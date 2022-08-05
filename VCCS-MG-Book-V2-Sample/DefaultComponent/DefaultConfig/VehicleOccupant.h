/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: VehicleOccupant
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/DefaultConfig/VehicleOccupant.h
*********************************************************************/

#ifndef VehicleOccupant_H
#define VehicleOccupant_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "P_2_System_Context.h"
//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context

//## class VehicleOccupant
class VehicleOccupant {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedVehicleOccupant;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    VehicleOccupant();
    
    //## auto_generated
    ~VehicleOccupant();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedVehicleOccupant : virtual public AOMInstance {
    DECLARE_META(VehicleOccupant, OMAnimatedVehicleOccupant)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/VehicleOccupant.h
*********************************************************************/
