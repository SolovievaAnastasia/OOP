#include <iostream>

class WoodTh {
 private:
  int sh_number;

 public:
  WoodTh(int number) { setNumber(number); }

  void setNumber(int number) { sh_number = number; }
  int getNumber() { return sh_number; }
};

int main() {
  WoodTh ship(3);
  ship.setNumber(4);
  std::cout << ship.getNumber() << '\n';

  return 0;
}
