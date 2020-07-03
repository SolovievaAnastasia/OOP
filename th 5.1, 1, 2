using namespace std;
#include <iostream>
#include <string>

class Ship;

class People {
 public:
  People(string n) { name = n; }
  void swim(Ship& a);
  void setPrice(Ship& a, int price);

 private:
  string name;
};

class Ship {
  friend void People::swim(Ship&);
  friend void People::setPrice(Ship&, int price);

 public:
  Ship(string shName, int shPrice) {
    name = shName;
    price = shPrice;
  }
  string getName() { return name; }
  int getPrice() { return price; }

 private:
  string name;
  int price;
};

void People::swim(Ship& a) { cout << name << " sail on " << a.name << endl; }
void People::setPrice(Ship& a, int price) {
  if (price > 0) a.price = price;
}

int main() {
  Ship lainer("Pearl", 45000);
  People first("Petya");
  first.drive(lainer);
  first.setPrice(lainer, 8000);
  cout << lainer.getName() << " : " << lainer.getPrice() << endl;

  return 0;
}
