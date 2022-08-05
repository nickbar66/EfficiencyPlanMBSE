/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Simulations
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent\DefaultConfig\Simulations.h
*********************************************************************/

#ifndef Simulations_H
#define Simulations_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class StateChartSim;

//#[ ignore
#define evTurnOn_Simulations_id 27001

#define evTurnOff_Simulations_id 27002

#define evOrderGiven_Simulations_id 27003
//#]

//## package Simulations



//## event evTurnOn()
class evTurnOn : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evTurnOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evTurnOff()
class evTurnOff : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evTurnOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evOrderGiven()
class evOrderGiven : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evOrderGiven();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Simulations.h
*********************************************************************/
