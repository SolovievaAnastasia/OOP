// Использование статических методов
#include <iostream>
using namespace std;

class IDSet {
 private:
  static int n_id;  // объявление статической переменной-члена

 public:
  static int getNextID();  // объявление статического метода
};

int IDSet::n_id = 1;

int IDSet::getNextID() { return n_id++; }

int main() {
  for (int count = 0; count < 4; ++count)
    cout << "The next ID is: " << IDSet::getNextID() << endl;

  return 0;
}
