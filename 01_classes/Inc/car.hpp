#pragma once
/***********************************************************
    File: car.hpp
    Description: Car class header file, will not separate
    method definition and implementation this time. 
    Author: Miguel Márquez
    Date: 8/14/2024

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
class Car
{
    public:
        
    // Model Name
    void setModelName(const std::string& modelName) {
        this->modelName = modelName;
    }

    std::string getModelName() const {
        return this->modelName;
    }

    // Model Year
    void setModelYear(int modelYear) {
        this->modelYear = modelYear;
    }

    int getModelYear() const {
        return this->modelYear;
    }

    // Owner Name
    void setOwnerName(const std::string& ownerName) { //std::string& will pass the string as a reference and not as a value, it is the preferred way.
        this->ownerName = ownerName;
    }

    std::string getOwnerName() const {
        return this->ownerName;
    }

    // Color
    void setColor(const std::string& color) {
        this->color = color;
    }

    std::string getColor() const {
        return this->color;
    }

    // Body Style
    void setBodyStyle(const std::string& bodyStyle) {
        this->bodyStyle = bodyStyle;
    }

    std::string getBodyStyle() const {
        return this->bodyStyle;
    }

    // VIN
    void setVin(const std::string& vin) {
        this->vin = vin;
    }

    std::string getVin() const {
        return this->vin;
    }

    // Transmission Type
    void setTransmissionType(const std::string& transmissionType) {
        this->transmissionType = transmissionType;
    }

    std::string getTransmissionType() const {
        return this->transmissionType;
    }

    // Engine Type
    void setEngineType(const std::string& engineType) {
        this->engineType = engineType;
    }

    std::string getEngineType() const {
        return this->engineType;
    }

    // Cylinder Number
    void setCylinderNumber(int cylinderNumber) {
        this->cylinderNumber = cylinderNumber;
    }

    int getCylinderNumber() const {
        return this->cylinderNumber;
    }

    // Cylinder Volume
    void setCylinderVolume(int cylinderVolume) {
        this->cylinderVolume = cylinderVolume;
    }

    int getCylinderVolume() const {
        return this->cylinderVolume;
    }

    // Max Speed
    void setMaxSpeed(int maxSpeed) {
        this->maxSpeed = maxSpeed;
    }

    int getMaxSpeed() const {
        return this->maxSpeed;
    }

    // Horsepower
    void setHorsepower(int horsepower) {
        this->horsepower = horsepower;
    }

    int getHorsepower() const {
        return this->horsepower;
    }

    // Torque
    void setTorque(int torque) {
        this->torque = torque;
    }

    int getTorque() const {
        return this->torque;
    }

    // Number of Doors
    void setNumberOfDoors(int numberOfDoors) {
        this->numberOfDoors = numberOfDoors;
    }

    int getNumberOfDoors() const {  // Const attribute specifies that the method does not modify attributes. 
        // this->numberOfDoors = 1; This is prevented by the const attribute. 
        return this->numberOfDoors;
    }

    // Rim Size
    void setRimSize(int rimSize) {
        this->rimSize = rimSize;
    }

    int getRimSize() const {
        return this->rimSize;
    }

    void printCarData(void)
    {   
        std::cout << "Model: " << this->modelName << std::endl;  
        std::cout << "ModelYear: " << this->modelYear << std::endl; 
        
    }
    private: 
        std::string modelName;
        int modelYear; 
        std::string ownerName; 
        std::string color;
        std::string bodyStyle; 
        std::string vin; 
        std::string transmissionType;
        std::string engineType; 
        int cylinderNumber; 
        int cylinderVolume; 
        int maxSpeed; 
        int horsepower; 
        int torque;
        int numberOfDoors; 
        int rimSize; 
    
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
