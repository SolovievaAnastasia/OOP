#include <iostream>
using namespace std;

class WoodTh {
 public:
  virtual void Make() { cout << "Make something\n"; }
};

class Ship : public WoodTh {
 public:
  void Make() { cout << "Grind\n"; }
};

class Pencil : public WoodTh {
 public:
  void Make() { cout << "Carve\n"; }
};

class Machine : public WoodTh {
 public:
  void Make() { cout << "Cut\n"; }
};

int main() {
  WoodTh *Array[7];
  WoodTh *ptr;
  int choice = 1 + rand() % 3;
  for (int i = 0; i < 7; i++) {
    cout << i + 1 << ". ";
    cin >> choice;

    switch (choice) {
      case 1:
        ptr = new Ship;
        break;
      case 2:
        ptr = new Pencil;
        break;
      case 3:
        ptr = new Machine;
        break;
      default:
        ptr = new WoodTh;
        break;
    }

    Array[i] = ptr;
  }
  for (int i = 0; i < 7; i++) Array[i]->Make();

  for (int i = 0; i < 7; i++) delete Array[i];

  cin.get();
}
