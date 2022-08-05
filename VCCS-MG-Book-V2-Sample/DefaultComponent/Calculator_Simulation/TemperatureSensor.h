/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: Calculator_Simulation
	Model Element	: TemperatureSensor
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/Calculator_Simulation/TemperatureSensor.h
*********************************************************************/

#ifndef TemperatureSensor_H
#define TemperatureSensor_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "P_2_System_Context.h"
//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context

//## class TemperatureSensor
class TemperatureSensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTemperatureSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TemperatureSensor();
    
    //## auto_generated
    ~TemperatureSensor();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTemperatureSensor : virtual public AOMInstance {
    DECLARE_META(TemperatureSensor, OMAnimatedTemperatureSensor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/Calculator_Simulation/TemperatureSensor.h
*********************************************************************/
