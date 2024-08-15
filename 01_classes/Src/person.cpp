/***********************************************************
    File: file.cpp
    Description: Person class file. 
    Author: Miguel Márquez
    Date: 8/14/2024

************************************************************/

/***********************************************************
    Includes
************************************************************/
#include "person.hpp"
#include <iostream>

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

/* Person methods */

void Person::setGender(Person::Gender gender)
{
    this->gender = gender; 
}

Person::Gender Person::getGender(void)
{
    return this->gender; 
}

void Person::setName(std::string name)
{
    this->name = name; 
}

std::string Person::getName(void)
{
    return this->name; 
}

void Person::setSkinColor(Person::SkinColor skinColor)
{
    this->skinColor = skinColor; 
}

Person::SkinColor Person::getSkinColor(void)
{
    return this->skinColor; 
}

void Person::setHairColor(Person::HairColor hairColor)
{
    this->hairColor=hairColor; 
}

Person::HairColor Person::getHairColor(void)
{
    return this->hairColor; 
}

void Person::setHeight(int height)
{
    this->height = height; 
}

int Person::getHeight(void)
{
    return this->height; 
}

void Person::setWeight(int weight)
{
    this->weight = weight; 
}

int Person::getWeight(void)
{
    return this->weight; 
}

void Person::setDayOfBirth(int dayOfBirth)
{
    this->dayOfBirth = dayOfBirth; 
}

int Person::getDayOfBirth(void)
{
    return this->dayOfBirth; 
}

void Person::setMonthOfBirth(int monthOfBirth)
{
    this->monthOfBirth = monthOfBirth; 
} 

int Person::getMonthOfBirth(void)
{
    return this->monthOfBirth; 
}

void Person::setYearOfBirth(int yearOfBirth)
{
    this->yearOfBirth = yearOfBirth; 
} 

int Person::getYearOfBirth(void)
{
    return this->yearOfBirth;
}

void Person::setNationality(Person::Nationality nationality)
{
    this->nationality = nationality; 
} 

Person::Nationality Person::getNationality(void)
{
    return this->nationality; 
}

void Person::setOccupation(Person::Occupation occupation)
{
    this->occupation = occupation; 
} 

Person::Occupation Person::getOccupation(void)
{
    return this->occupation; 
}

void Person::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber; 
} 

std::string Person::getPhoneNumber(void)
{
    return this->phoneNumber; 
}

void Person::setEmail(std::string email)
{
    this->email = email; 
} 

std::string Person::getEmail(void)
{
    return this->email; 
}

void Person::setDisabilityStatus(bool disabilityStatus)
{
    this->disabilityStatus = disabilityStatus; 
}   

bool Person::getDisabilityStatus(void)
{
    return this->disabilityStatus; 
} 

void Person::setDescription(std::string description)
{
    this->description = description; 
} 

std::string Person::getDescription(void)
{
    return this->description; 
} 

void Person::printInfo(void)
{
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "SkinColor: " << (int)this->skinColor << std::endl; /* Disadvantage of using enum class, need for cast to int for usage with std>>cout.*/
    std::cout << "Email: " << this->email << std::endl; 

}


/***********************************************************
    Function Definitions
************************************************************/


