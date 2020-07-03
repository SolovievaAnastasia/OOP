#include <iostream>
#include <string>
using namespace std;

class Ship {
 private:
  string name;
  int id;

 public:
  Ship(string name, int id) : p_name(name), p_id(id) {}

  string getName() { return p_name; }
  int getID() { return p_id; }
};

class Machine {
 private:
  string p_engine;
  int p_kpd;

 public:
  Machine(string engine, int kpd) : p_engine(engine), p_kpd(kpd) {}

  string getEngine() { return p_engine; }
  double getKpd() { return p_kpd; }
};

class Parohod : public Ship, public Machine {
 private:
  int p_year;

 public:
  Parohod(string name, int id, string engine, int kpd, int year)
      : Ship(name, id), Machine(engine, kpd), p_year(year) {}
};
