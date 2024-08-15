/***********************************************************
    File: main.cpp
    Author: Miguel Márquez
    Date: 8/14/2024

************************************************************/

/***********************************************************
    Includes
************************************************************/
#include <iostream>
#include <string>
#include "person.hpp"
#include "car.hpp"

/***********************************************************
    Type Definitions
************************************************************/

/***********************************************************
    Macro Definitions
************************************************************/

/***********************************************************
    Unit-Internal Function Declarations
************************************************************/

/***********************************************************
    Global Variable Definitions
************************************************************/

/***********************************************************
    Class Declarations and Definitions
************************************************************/

/***********************************************************
    Function Definitions
************************************************************/


int main (int argc, char* argv[])
{

    Person Miguel; 

    Miguel.setGender(Person::Gender::MALE);
    Miguel.setName("Miguel Marquez");
    Miguel.setSkinColor(Person::SkinColor::WHITE); 
    Miguel.setHairColor(Person::HairColor::BROWN); 
    Miguel.setHeight(180);
    Miguel.setWeight(84); 
    Miguel.setDayOfBirth(21); 
    Miguel.setMonthOfBirth(7);
    Miguel.setYearOfBirth(2002); 
    Miguel.setNationality(Person::Nationality::MEXICAN);
    Miguel.setOccupation(Person::Occupation::EMPLOYED); 
    Miguel.setPhoneNumber("3326624039");
    Miguel.setEmail("marquezhdezmiguel12@gmail.com");
    Miguel.setDisabilityStatus(false);
    Miguel.setDescription("Borracho pero buen muchacho");

    Miguel.printInfo(); 

    Person Diego; 
    Diego.setGender(Person::Gender::MALE);
    Diego.setName("Diego Arrellin");
    Diego.setSkinColor(Person::SkinColor::BROWN); 
    Diego.setHairColor(Person::HairColor::BLACK); 
    Diego.setHeight(180);
    Diego.setWeight(84); 
    Diego.setDayOfBirth(21); 
    Diego.setMonthOfBirth(7);
    Diego.setYearOfBirth(2002); 
    Diego.setNationality(Person::Nationality::MEXICAN);
    Diego.setOccupation(Person::Occupation::UNEMPLOYED); 
    Diego.setPhoneNumber("3333333333");
    Diego.setEmail("nextsupergm@gmail.com");
    Diego.setDisabilityStatus(false);
    Diego.setDescription("Borracho pero buen muchacho");
    Diego.printInfo();


    
    Car car1;
    car1.setModelName("Mazda3");
    car1.setModelYear(2016);
    car1.setOwnerName("Miguel"); 
    car1.setColor("White");
    car1.setBodyStyle("Sedan");
    car1.setVin("13214123412");
    car1.setTransmissionType("Auto 6SPD");
    car1.setEngineType("Gasoline");
    car1.setCylinderNumber(4);
    car1.setCylinderVolume(2000); 
    car1.setMaxSpeed(260); 
    car1.setHorsepower(140); 
    car1.setNumberOfDoors(4); 
    car1.setRimSize(17);  

    car1.printCarData(); 
    return 0; 
}