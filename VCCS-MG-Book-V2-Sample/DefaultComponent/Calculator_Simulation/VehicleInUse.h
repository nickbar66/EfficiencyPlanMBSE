/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: Calculator_Simulation
	Model Element	: VehicleInUse
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/Calculator_Simulation/VehicleInUse.h
*********************************************************************/

#ifndef VehicleInUse_H
#define VehicleInUse_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "P_2_System_Context.h"
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
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedVehicleInUse;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedVehicleInUse : virtual public AOMInstance {
    DECLARE_META(VehicleInUse, OMAnimatedVehicleInUse)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/Calculator_Simulation/VehicleInUse.h
*********************************************************************/
