#include <iostream>
using namespace std;

class WoodTh {
 public:
  int counter;  // общее кол животных
 protected:
  int ship;
  int chair;
  int pencil;

  // функция вычисление общего количества животных
  count_WoodTh() { counter = ship + chair + pencil; }
  set_ship(int count_of_ship) { ship = count_of_ship; }
};

class ship : public WoodTh {
 public:
  int count_ship() {
    return ship;
    ship
  }
};
