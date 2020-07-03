// Дружественные классы 
#include <iostream>
#include <string>
using namespace std;

class Ship;

class People {
 public:
  People(string n) { name = n; }
  void swim(Ship &a);
  void setPrice(Ship &a, int price);

 private:
  string name;
};

class Ship {
  friend class People;

 public:
  Ship(string shipName, int shipPrice) {
    name = shipName;
    price = shipPrice;
  }
  string getName() { return name; }
  int getPrice() { return price; }

 private:
  string name;
  int price;
};

void People::swim(Ship &a) { cout << name << " sailes on " << a.name << endl; }
void People::setPrice(Ship &a, int price) {
  if (price > 0) a.price = price;
}

int main() {
  Ship lainer("Pearl", 45000);
  People first("Petya");
  first.swim(lainer);
  first.setPrice(lainer, 8000);
  cout << lainer.getName() << " : " << lainer.getPrice() << endl;

  return 0;
}
