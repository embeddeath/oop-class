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
#include "Person.hpp"

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
    Miguel.setPhoneNumber("3326624029");
    Miguel.setEmail("marquezhdezmiguel@gmail.com");
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


    return 0; 
}