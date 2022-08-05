/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: Calculator
	Model Element	: VehicleOccupant
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/Calculator/VehicleOccupant.h
*********************************************************************/

#ifndef VehicleOccupant_H
#define VehicleOccupant_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## link itsProvideConfortableTemperature
class ProvideConfortableTemperature;

//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context

//## class VehicleOccupant
class VehicleOccupant {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    VehicleOccupant();
    
    //## auto_generated
    ~VehicleOccupant();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ProvideConfortableTemperature* getItsProvideConfortableTemperature() const;
    
    //## auto_generated
    void setItsProvideConfortableTemperature(ProvideConfortableTemperature* p_ProvideConfortableTemperature);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ProvideConfortableTemperature* itsProvideConfortableTemperature;		//## link itsProvideConfortableTemperature
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsProvideConfortableTemperature(ProvideConfortableTemperature* p_ProvideConfortableTemperature);
    
    //## auto_generated
    void _setItsProvideConfortableTemperature(ProvideConfortableTemperature* p_ProvideConfortableTemperature);
    
    //## auto_generated
    void _clearItsProvideConfortableTemperature();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/Calculator/VehicleOccupant.h
*********************************************************************/
