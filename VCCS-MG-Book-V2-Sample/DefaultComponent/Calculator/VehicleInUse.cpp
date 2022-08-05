/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: Calculator
	Model Element	: VehicleInUse
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/Calculator/VehicleInUse.cpp
*********************************************************************/

//## auto_generated
#include "VehicleInUse.h"
//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context

//## class VehicleInUse
VehicleInUse::VehicleInUse() {
}

VehicleInUse::~VehicleInUse() {
}

Cabin* VehicleInUse::getItsCabin() const {
    return (Cabin*) &itsCabin;
}

TemperatureSensor* VehicleInUse::getItsTemperatureSensor() const {
    return (TemperatureSensor*) &itsTemperatureSensor;
}

VCCU* VehicleInUse::getItsVCCU() const {
    return (VCCU*) &itsVCCU;
}

VehicleOccupant* VehicleInUse::getItsVehicleOccupant() const {
    return (VehicleOccupant*) &itsVehicleOccupant;
}

/*********************************************************************
	File Path	: DefaultComponent/Calculator/VehicleInUse.cpp
*********************************************************************/
