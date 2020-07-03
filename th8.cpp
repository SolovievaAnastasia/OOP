#include <iostream>
using namespace std;

class WoodTh {
 public:
  virtual void Make() = 0;
};
class Ship : public WoodTh {
 public:
  void Make() { cout << "Ship" << endl; }
};
class Chair : public WoodTh {
 public:
  void Make() { cout << "Chair" << endl; }
};

int main() {
  Ship A;
  Chair B;
  A.Make();
  B.Make();
  return 0;
}
