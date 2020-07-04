using namespace std;
#include <iostream>

class WoodTh {
 public:
  class Ship {
   public:
    void Swim() {}
  };

 private:
  void Make() {
    Ship ship;  // обращение по имени из метода внешнего класса
    ship.Swim();
  }
};

int main() {
  WoodTh::Ship ship;
  ship.Swim();
  return 0;
}
