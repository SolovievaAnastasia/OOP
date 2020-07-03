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
 public
  virtual int area() {
    cout << "Parent class area :" << endl;
    return 0;
  }
} class Ship : WoodTh {
 public
  Ship(int a = 0, int b = 0) : base(a, b) {}
 public
  override int area() {
    cout << "Ship class area :" << endl;
    return (width * height);
  }
} class Chair : WoodTh {
 public
  Triangle(int a = 0, int b = 0) : base(a, b) {}
 public
  override int area() {
    cout << "Chair class area :" << endl;
    return (width * height / 2);
  }
} class Caller {
 public
  void CallArea(WoodTh sh) {
    int a;
    a = sh.area();
    cout << "Area: " << a << endl;
  }
}

int main {
  Caller C = new Caller();
  Ship A = new Ship(100, 200);
  Chair B = new Chair(10, 5);

  C.CallArea(A);
  C.CallArea(B);
}
