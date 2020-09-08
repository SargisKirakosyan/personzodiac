#include "person.h"

personYear::Person::Person(std::string fn, std::string ln, int by, int bm, int bd) : firstName(fn), lastName(ln), birthYear(by), birthMonth(bm), birthDay(bd)  {}

std::string personYear::Person::getYearAnimal() {
  double whole, decimal;
  decimal = std::modf(birthYear/12, &whole);
  int year = decimal*12;
  switch(year) {
    case 0:
      return "Կապիկ";
    case 1:
      return "Աքլոր";
    case 2:
      return "Շուն";
    case 3:
      return "Խոզ";    
    case 4:
      return "Առնետ";
    case 5:
      return "Ցուլ";    
    case 6:
      return "Վագր";    
    case 7:
      return "Ճագար";    
    case 8:
      return "Վիշապ";    
    case 9:
      return "Օձ";    
    case 10:
      return "Ձի";
    case 11:
      return "Այծ";
  }
  return 0;
}
std::string personYear::Person::getZodiac() {
  switch(birthMonth) {
    case 1:
      if(birthDay>=20) {
        return "Ջրհոս";
      }
      return "Այծեղջյուր";
    case 2:
      if(birthDay<19) {
        return "Ջրհոս";
      }
      return "Ձկներ";
    case 3:
      if(birthDay<=20) {
        return "Ձկներ";
      }
      return "Խոյ";
    case 4:
      if(birthDay<=20) {
        return "Խոյ";
      }
      return "Ցուլ";
    case 5:
      if(birthDay>=20) {
        return "Ցուլ";
      }
      return "Երկվորյակներ";
    case 6:
      if(birthDay<=21) {
        return "Երկվորյակներ";
      }
      return "Խեցգետին";
    case 7:
      if(birthDay<=22) {
        return "Խեցգետին";
      }
      return "Առյուծ";
    case 8:
      if(birthDay<=23) {
        return "Առյուծ";
      }
      return "Կույս";
    case 9:
      if(birthDay<=23) {
        return "Կույս";
      }
      return "Կշեռք";
    case 10:
      if(birthDay<=23) {
        return "Կշեռք";
      }
      return "Կարիճ";
    case 11:
      if(birthDay<=22) {
        return "Կարիճ";
      }
      return "Աղեղնավոր";
    case 12:
      if(birthDay<=21) {
        return "Աղեղնավոր";
      }
      return "Այծեղջյուր";
  }
  return 0;
}
