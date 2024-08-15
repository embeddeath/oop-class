#pragma once
/***********************************************************
    File: person.hpp
    Description: Person class file. 
    Author: Miguel Márquez
    Date: 8/14/2024

************************************************************/
/***********************************************************
    Includes
************************************************************/
#include<string>
/***********************************************************
    Type Definitions
************************************************************/

/***********************************************************
    Macro Definitions
************************************************************/

/***********************************************************
    External Interface Function Declarations
************************************************************/ 

/***********************************************************
    Global Variable Definitions
************************************************************/

/***********************************************************
    Class Declarations and Definitions
************************************************************/

class Person
{
    public:
        /* To ensure input type safety?? */
        enum class Gender {MALE, FEMALE};
        enum class SkinColor {WHITE, BLACK, YELLOW, BROWN}; 
        enum class HairColor {BROWN, BLACK, BLONDE, GREY, WHITE}; 
        enum class Nationality {MEXICAN, AMERICAN, PERUVIAN, ITALIAN, SOUTHAFRICAN, CHINESE}; 
        enum class Occupation {UNEMPLOYED, EMPLOYED, SELFEMPLOYED}; 


        // Constructor Person();

        void setGender(Gender gender); 
        Gender getGender(void);

        void setName(std::string name); 
        std::string getName(void); 

        void setSkinColor(SkinColor skinColor); 
        SkinColor getSkinColor(void); 

        void setHairColor(HairColor hairColor); 
        HairColor getHairColor(void); 

        void setHeight(int height); 
        int getHeight(void); 

        void setWeight(int weight); 
        int getWeight(void);

        void setDayOfBirth(int dayOfBirth);
        int getDayOfBirth(void);

        void setMonthOfBirth(int monthOfBirth); 
        int getMonthOfBirth(void);

        void setYearOfBirth(int yearOfBirth); 
        int getYearOfBirth(void);

        void setNationality(Nationality nationality); 
        Nationality getNationality(void);

        void setOccupation(Occupation occupation); 
        Occupation getOccupation(void);

        void setPhoneNumber(std::string phoneNumber); 
        std::string getPhoneNumber(void);

        void setEmail(std::string email); 
        std::string getEmail(void);

        void setDisabilityStatus(bool disabilityStatus); 
        bool getDisabilityStatus(void); 

        void setDescription(std::string description); 
        std::string getDescription(void);

        void printInfo(void);

    private: 

        Gender gender; 
        int age; 
        std::string name; 
        SkinColor skinColor; 
        HairColor hairColor; 
        int height; 
        int weight; 
        int dayOfBirth; 
        int monthOfBirth; 
        int yearOfBirth; 
        Nationality nationality; 
        Occupation occupation; 
        std::string phoneNumber; 
        std::string email; 
        bool disabilityStatus; 
        std::string description; 
    

}; 

/***********************************************************
    Function Definitions
************************************************************/
