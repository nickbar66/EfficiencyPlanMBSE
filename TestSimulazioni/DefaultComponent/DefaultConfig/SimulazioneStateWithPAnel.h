/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SimulazioneStateWithPAnel
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent\DefaultConfig\SimulazioneStateWithPAnel.h
*********************************************************************/

#ifndef SimulazioneStateWithPAnel_H
#define SimulazioneStateWithPAnel_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class StateChartSim;

//#[ ignore
#define evTurnOn_SimulazioneStateWithPAnel_id 27001

#define evTurnOff_SimulazioneStateWithPAnel_id 27002

#define evOrderGiven_SimulazioneStateWithPAnel_id 27003
//#]

//## package SimulazioneStateWithPAnel



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
	File Path	: DefaultComponent\DefaultConfig\SimulazioneStateWithPAnel.h
*********************************************************************/
