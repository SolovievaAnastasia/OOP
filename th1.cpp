#include <iostream>
using namespace std;

class WoodTh {
 protected:
  int width, height;

 public:
  WoodTh(int a = 0, int b = 0) {
    width = a;
    height = b;
  }
    ;
    
    void display() 
    {
        cout << width << " width" << endl;
        cout << height <<" height" <<endl;
    }
};
  int main() {
    WoodTh A(20, 30);
    WoodTh B(10, 40);
    A.display();

    return 0;
  }
