#include "person.h"

int main() {
  int personQuantity;
  std::cin >> personQuantity;
  personYear::Person** person = new personYear::Person*[personQuantity];
  for (int i=0; i<personQuantity; ++i) {
    std::string fn, ln;
    double by, bm, bd;
    std::cin >> fn >> ln >> by >> bm >> bd;
    person[i] = new personYear::Person(fn, ln, by, bm, bd);
  }
  for(int j=0; j<personQuantity; j++) {
    std::cout << person[j]->getYearAnimal() << ", " << person[j]->getZodiac() << std::endl;
  }
}
