#pragma once
/***********************************************************
    File: animal.hpp
    Description: animal class header file, will not separate
    method definition and implementation this time. 
    Author: Miguel Márquez
    Date: 9/14/2024

************************************************************/
/***********************************************************
    Includes
************************************************************/
#include<iostream>
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
class Animal
{
    public:
        
    void setName(const std::string& name) {
        this->name = name;
    }

    std::string getName() const {
        return this->name;
    }

    void setUniqueId(int uniqueId) {
        this->uniqueId = uniqueId;
    }

    int getUniqueId() const {
        return this->uniqueId;
    }

    void setOwnerName(const std::string& ownerName) { //std::string& will pass the string as a reference and not as a value, it is the preferred way.
        this->ownerName = ownerName;
    }

    std::string getOwnerName() const {
        return this->ownerName;
    }

    void setColor(const std::string& color) {
        this->color = color;
    }

    std::string getColor() const {
        return this->color;
    }

    void setSpecies(const std::string& species) {
        this->species = species;
    }

    std::string getSpecies() const {
        return this->species;
    }

    void setDescription(const std::string& description) {
        this->description = description;
    }

    std::string getDescription() const {
        return this->description;
    }

    void setZooName(const std::string& zooName) {
        this->zooName = zooName;
    }

    std::string getZooName() const {
        return this->zooName;
    }

    void setNativeBiome(const std::string& nativeBiome) {
        this->nativeBiome = nativeBiome;
    }

    std::string getNativeBiome() const {
        return this->nativeBiome;
    }

    void setWeight(int weight) {
        this->weight = weight;
    }

    int getWeight() const {
        return this->weight;
    }

    void setAlimentType(std::string alimentType) {
        this->alimentType = alimentType;
    }

    std::string getAlimentType() const {
        return this->alimentType;
    }

    void setScientificName(std::string scientificName) {
        this->scientificName = scientificName;
    }

    std::string getScientificName() const {
        return this->scientificName;
    }

    void setFriendlinessStatus(bool friendlinessStatus) {
        this->friendlinessStatus = friendlinessStatus;
    }

    bool isFriendly() const {
        return this->friendlinessStatus;
    }

    void setHealthStatus(bool healthStatus) {
        this->healthStatus = healthStatus;
    }

    bool isHealthy() const {
        return this->healthStatus;
    }

    void setMood(std::string alimentType) {
        this->mood = mood;
    }

    std::string getMood() const {
        return this->mood;
    }

    void printData(void)
    {   
        std::cout << "Name: " << this->name << std::endl;  
        std::cout << "Species: " << this->species << std::endl; 
        
    }
    
    private: 
        std::string name; 
        int uniqueId; 
        std::string ownerName; 
        std::string color; 
        std::string species; 
        std::string description; 
        std::string zooName; 
        std::string nativeBiome; 
        int weight; 
        std::string alimentType; 
        std::string scientificName; 
        bool friendlinessStatus; 
        bool healthStatus; 
        std::string mood; 
}; 

/***********************************************************
    Global Variable Definitions
************************************************************/

/***********************************************************
    Class Declarations and Definitions
************************************************************/

/***********************************************************
    Function Definitions
************************************************************/
