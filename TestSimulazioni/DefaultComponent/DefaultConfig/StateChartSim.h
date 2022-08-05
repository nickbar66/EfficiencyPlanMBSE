/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StateChartSim
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent\DefaultConfig\StateChartSim.h
*********************************************************************/

#ifndef StateChartSim_H
#define StateChartSim_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "SimulazioneStateWithPAnel.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## package SimulazioneStateWithPAnel

//## class StateChartSim
class StateChartSim : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    StateChartSim(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~StateChartSim();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // On:
    //## statechart_method
    inline bool On_IN() const;
    
    //## statechart_method
    void On_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus On_handleEvent();
    
    // WaitingForOrder:
    //## statechart_method
    inline bool WaitingForOrder_IN() const;
    
    // OrderTaken:
    //## statechart_method
    inline bool OrderTaken_IN() const;
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum StateChartSim_Enum {
        OMNonState = 0,
        On = 1,
        WaitingForOrder = 2,
        OrderTaken = 3,
        Off = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int On_subState;
//#]
};

inline bool StateChartSim::rootState_IN() const {
    return true;
}

inline bool StateChartSim::On_IN() const {
    return rootState_subState == On;
}

inline bool StateChartSim::WaitingForOrder_IN() const {
    return On_subState == WaitingForOrder;
}

inline bool StateChartSim::OrderTaken_IN() const {
    return On_subState == OrderTaken;
}

inline bool StateChartSim::Off_IN() const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StateChartSim.h
*********************************************************************/
