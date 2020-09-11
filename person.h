#pragma once

#include <iostream>
#include <cmath>

namespace personYear {
  class Person {
    private:
      std::string firstName;
      std::string lastName;
      double birthYear;
      int birthMonth, birthDay;
    public:
      Person(std::string fn, std::string ln, int by, int bm, int bd);
      ~Person(){};
      std::string getYearAnimal();
      std::string getZodiac();
  };
}
