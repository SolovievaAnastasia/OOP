//Использование статических переменных-членов класса

#include <iostream>
using namespace std;

class WoodTh {
 private:
  static int Set;
  int id;

 public:
  WoodTh() {
    id = Set++;
  }  
  int getID() const { return id; }
};

int WoodTh::Set = 1;  

int main() {
  WoodTh first;
  WoodTh second;
  WoodTh third;

  cout << first.getID() << endl;
  cout << second.getID() << endl;
  cout << third.getID() << endl;
  return 0;
}
