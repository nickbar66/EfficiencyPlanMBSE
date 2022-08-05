/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: Calculator
	Model Element	: VehicleInUse
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/Calculator/VehicleInUse.h
*********************************************************************/

#ifndef VehicleInUse_H
#define VehicleInUse_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## classInstance itsCabin
#include "Cabin.h"
//## classInstance itsTemperatureSensor
#include "TemperatureSensor.h"
//## classInstance itsVCCU
#include "VCCU.h"
//## classInstance itsVehicleOccupant
#include "VehicleOccupant.h"
//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context

//## class VehicleInUse
class VehicleInUse {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    VehicleInUse();
    
    //## auto_generated
    ~VehicleInUse();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Cabin* getItsCabin() const;
    
    //## auto_generated
    TemperatureSensor* getItsTemperatureSensor() const;
    
    //## auto_generated
    VCCU* getItsVCCU() const;
    
    //## auto_generated
    VehicleOccupant* getItsVehicleOccupant() const;
    
    ////    Relations and components    ////

protected :

    Cabin itsCabin;		//## classInstance itsCabin
    
    TemperatureSensor itsTemperatureSensor;		//## classInstance itsTemperatureSensor
    
    VCCU itsVCCU;		//## classInstance itsVCCU
    
    VehicleOccupant itsVehicleOccupant;		//## classInstance itsVehicleOccupant
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/Calculator/VehicleInUse.h
*********************************************************************/
