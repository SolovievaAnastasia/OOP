#include <iostream>
using namespace std;

class Ship {
 public:
  Ship(int pr) { price = pr; }
  void display() { cout << price << " rubles" << endl; }
  Ship& operator+=(Ship B) {
    price += B.price;
    return *this;
  }
  int price;
};
int main() {
  Ship A(200000);
  Ship B(300000);
  A += B;
  A.display();
  return 0;
}
