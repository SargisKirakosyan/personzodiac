#include "person.h"

personYear::Person::Person(std::string fn, std::string ln, int by, int bm, int bd) : firstName(fn), lastName(ln), birthYear(by), birthMonth(bm), birthDay(bd)  {}

std::string personYear::Person::getYearAnimal() {
  double whole, decimal;
  decimal = std::modf(birthYear/12, &whole);
  int year = decimal*12;
  switch(year) {
    case 0:
      return "Կապիկ";
      break;
    case 1:
      return "Աքլոր";
      break;
    case 2:
      return "Շուն";
      break;
    case 3:
      return "Խոզ";
      break;    
    case 4:
      return "Առնետ";
      break;
    case 5:
      return "Ցուլ";
      break;    
    case 6:
      return "Վագր";
      break;    
    case 7:
      return "Ճագար";
      break;    
    case 8:
      return "Վիշապ";
      break;    
    case 9:
      return "Օձ";
      break;    
    case 10:
      return "Ձի";
      break;
    case 11:
      return "Այծ";
      break;
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
      break;
    case 2:
      if(birthDay<19) {
        return "Ջրհոս";
      }
      return "Ձկներ";
      break;
    case 3:
      if(birthDay<=20) {
        return "Ձկներ";
      }
      return "Խոյ";
      break;
    case 4:
      if(birthDay<=20) {
        return "Խոյ";
      }
      return "Ցուլ";
      break;
    case 5:
      if(birthDay>=20) {
        return "Ցուլ";
      }
      return "Երկվորյակներ";
      break;
    case 6:
      if(birthDay<=21) {
        return "Երկվորյակներ";
      }
      return "Խեցգետին";
      break;
    case 7:
      if(birthDay<=22) {
        return "Խեցգետին";
      }
      return "Առյուծ";
      break;
    case 8:
      if(birthDay<=23) {
        return "Առյուծ";
      }
      return "Կույս";
      break;
    case 9:
      if(birthDay<=23) {
        return "Կույս";
      }
      return "Կշեռք";
      break;
    case 10:
      if(birthDay<=23) {
        return "Կշեռք";
      }
      return "Կարիճ";
      break;
    case 11:
      if(birthDay<=22) {
        return "Կարիճ";
      }
      return "Աղեղնավոր";
      break;
    case 12:
      if(birthDay<=21) {
        return "Աղեղնավոր";
      }
      return "Այծեղջյուր";
      break;
  }
  return 0;
}
