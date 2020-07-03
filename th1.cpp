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
  int main() {
    WoodTh A(20, 30);
    WoodTh B(10, 40);
    cout << A << endl;
    cout << B << endl;

    return 0;
  }
