//Перегрузка оператора сравнения в height и оператора присвоения в width
#include <iostream>
using namespace std;

class WoodTh {
 protected
  int width, height;

 public
  WoodTh(int a = 0, int b = 0) {
    width = a;
    height = b;
  }
bool operator==(WoodTh A, WoodTh B) {
    return A.height == B.height; }
bool operator!=(WoodTh A, WoodTh B) {
    return A.height != B.height; }
bool operator>(WoodTh A, WoodTh B) {
    return A.height > B.height; }
bool operator<(WoodTh A, WoodTh B) {
    return A.height < B.height; }
    
  cout << width << " width" << endl;
} WoodTh& operator+=(WoodTh B) {
  width += B.width;
  return *this;
}
int width;
}
;

int main() {
  WoodTh A(20, 30);
  WoodTh B(10, 40);
  A += B;
  bool sravn1 = A == B;
  bool sravn2 = A > B;
  cout << A << endl;
  cout << B << endl;

  return 0;
}
