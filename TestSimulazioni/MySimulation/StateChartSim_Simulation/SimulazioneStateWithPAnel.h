/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: MySimulation 
	Configuration 	: StateChartSim_Simulation
	Model Element	: SimulazioneStateWithPAnel
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: MySimulation/StateChartSim_Simulation/SimulazioneStateWithPAnel.h
*********************************************************************/

#ifndef SimulazioneStateWithPAnel_H
#define SimulazioneStateWithPAnel_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
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
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTurnOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTurnOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTurnOn : virtual public AOMEvent {
    DECLARE_META_EVENT(evTurnOn)
};
//#]
#endif // _OMINSTRUMENT

//## event evTurnOff()
class evTurnOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTurnOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTurnOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTurnOff : virtual public AOMEvent {
    DECLARE_META_EVENT(evTurnOff)
};
//#]
#endif // _OMINSTRUMENT

//## event evOrderGiven()
class evOrderGiven : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevOrderGiven;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evOrderGiven();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevOrderGiven : virtual public AOMEvent {
    DECLARE_META_EVENT(evOrderGiven)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: MySimulation/StateChartSim_Simulation/SimulazioneStateWithPAnel.h
*********************************************************************/
