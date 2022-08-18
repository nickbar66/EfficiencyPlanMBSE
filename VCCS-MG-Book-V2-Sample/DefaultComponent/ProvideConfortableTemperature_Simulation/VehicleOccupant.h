/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: ProvideConfortableTemperature_Simulation
	Model Element	: VehicleOccupant
//!	Generated Date	: Mon, 15, Aug 2022  
	File Path	: DefaultComponent/ProvideConfortableTemperature_Simulation/VehicleOccupant.h
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
//## link itsProvideConfortableTemperature
class ProvideConfortableTemperature;

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
    
    ////    Additional operations    ////
    
    //## auto_generated
    ProvideConfortableTemperature* getItsProvideConfortableTemperature() const;
    
    //## auto_generated
    void setItsProvideConfortableTemperature(ProvideConfortableTemperature* p_ProvideConfortableTemperature);
    
    //## auto_generated
    VehicleOccupant* getItsVehicleOccupant() const;
    
    //## auto_generated
    void setItsVehicleOccupant(VehicleOccupant* p_VehicleOccupant);
    
    //## auto_generated
    VehicleOccupant* getItsVehicleOccupant_1() const;
    
    //## auto_generated
    void setItsVehicleOccupant_1(VehicleOccupant* p_VehicleOccupant);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ProvideConfortableTemperature* itsProvideConfortableTemperature;		//## link itsProvideConfortableTemperature
    
    VehicleOccupant* itsVehicleOccupant;		//## link itsVehicleOccupant
    
    VehicleOccupant* itsVehicleOccupant_1;		//## link itsVehicleOccupant_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsProvideConfortableTemperature(ProvideConfortableTemperature* p_ProvideConfortableTemperature);
    
    //## auto_generated
    void _setItsProvideConfortableTemperature(ProvideConfortableTemperature* p_ProvideConfortableTemperature);
    
    //## auto_generated
    void _clearItsProvideConfortableTemperature();
    
    //## auto_generated
    void __setItsVehicleOccupant(VehicleOccupant* p_VehicleOccupant);
    
    //## auto_generated
    void _setItsVehicleOccupant(VehicleOccupant* p_VehicleOccupant);
    
    //## auto_generated
    void _clearItsVehicleOccupant();
    
    //## auto_generated
    void __setItsVehicleOccupant_1(VehicleOccupant* p_VehicleOccupant);
    
    //## auto_generated
    void _setItsVehicleOccupant_1(VehicleOccupant* p_VehicleOccupant);
    
    //## auto_generated
    void _clearItsVehicleOccupant_1();
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
	File Path	: DefaultComponent/ProvideConfortableTemperature_Simulation/VehicleOccupant.h
*********************************************************************/
