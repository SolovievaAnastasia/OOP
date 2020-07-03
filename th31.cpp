//Использование статических переменных-членов класса

#include <iostream>
using namespace std;

class WoodTh {
 private:
  static int Set;
  int id;

 public:
  Anything() {
    id = Set++;
  }  // увеличиваем значение идентификатора для следующего объекта

  int getID() const { return id; }
};

// Мы определяем и инициализируем s_idGenerator несмотря на то, что он объявлен
// как private
// Это нормально, поскольку определение не подпадает под действия спецификаторов
// доступа
int WoodTh::Set = 1;  // начинаем наш ID-генератор со значения 1

int main() {
  WoodTh first;
  WoodTh second;
  WoodTh third;

  cout << first.getID() << endl;
  cout << second.getID() << endl;
  cout << third.getID() << endl;
  return 0;
}
