#include <iostream>
#include <cmath>

namespace personYear {
  class Person {
    private:
      std::string firstName, lastName;
      double birthYear;
      int birthMonth, birthDay;
    public:
      Person(std::string fn, std::string ln, int by, int bm, int bd) : firstName(fn), lastName(ln), birthYear(by), birthMonth(bm), birthDay(bd)  {}
      ~Person(){};
      std::string checkYearAnimal() {
        std::string yearAnimal;
        double whole, decimal;
        decimal = std::modf(birthYear/12, &whole);
        int year = decimal*12;
        switch(year) {
          case 0:
            yearAnimal="Կապիկ";
            break;
          case 1:
            yearAnimal="Աքլոր";
            break;
          case 2:
            yearAnimal="Շուն";
            break;
          case 3:
            yearAnimal="Խոզ";
            break;    
          case 4:
            yearAnimal="Առնետ";
            break;
          case 5:
            yearAnimal="Ցուլ";
            break;    
          case 6:
            yearAnimal="Վագր";
            break;    
          case 7:
            yearAnimal="Ճագար";
            break;    
          case 8:
            yearAnimal="Վիշապ";
            break;    
          case 9:
            yearAnimal="Օձ";
            break;    
          case 10:
            yearAnimal="Ձի";
            break;
          case 11:
            yearAnimal="Այծ";
            break;
        }
        return yearAnimal;
      }
      std::string checkZodiac() {
        std::string animalName;
        switch(birthMonth) {
          case 1:
            if(birthDay>=20) {
            animalName="Ջրհոս";
            } else {
              animalName="Այծեղջյուր";
            }
            break;
          case 2:
            if(birthDay<19) {
              animalName="Ջրհոս";
            } else {
              animalName="Ձկներ";
            }
            break;
          case 3:
            if(birthDay<=20) {
              animalName="Ձկներ";
            } else {
              animalName="Խոյ";
            }
            break;
          case 4:
            if(birthDay<=20) {
              animalName="Խոյ";
            } else {
              animalName="Ցուլ";
            }
            break;
          case 5:
            if(birthDay>=20) {
              animalName="Ցուլ";
            } else {
              animalName="Երկվորյակներ";
            }
            break;
          case 6:
            if(birthDay<=21) {
              animalName="Երկվորյակներ";
            } else {
              animalName="Խեցգետին";
            }
            break;
          case 7:
            if(birthDay<=22) {
              animalName="Խեցգետին";
            } else {
              animalName="Առյուծ";
            }
            break;
          case 8:
            if(birthDay<=23) {
              animalName="Առյուծ";
            } else {
              animalName="Կույս";
            }
            break;
          case 9:
            if(birthDay<=23) {
              animalName="Կույս";
            } else {
              animalName="Կշեռք";
            }
            break;
          case 10:
            if(birthDay<=23) {
              animalName="Կշեռք";
            } else {
              animalName="Կարիճ";
            }
            break;
          case 11:
            if(birthDay<=22) {
              animalName="Կարիճ";
            } else {
              animalName="Աղեղնավոր";
            }
            break;
          case 12:
            if(birthDay<=21) {
              animalName="Աղեղնավոր";
            } else {
              animalName="Այծեղջյուր";
            }
            break;
        }
        return animalName;
      }
  };
}

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
    std::cout << person[j]->checkYearAnimal() << " " << person[j]->checkZodiac() << std::endl;
  }
}
