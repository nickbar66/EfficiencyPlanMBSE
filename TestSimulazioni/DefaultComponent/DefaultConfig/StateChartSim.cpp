/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: StateChartSim
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent\DefaultConfig\StateChartSim.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "StateChartSim.h"
//## package SimulazioneStateWithPAnel

//## class StateChartSim
StateChartSim::StateChartSim(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

StateChartSim::~StateChartSim() {
}

bool StateChartSim::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void StateChartSim::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    On_subState = OMNonState;
}

void StateChartSim::rootState_entDef() {
    {
        rootState_subState = Off;
        rootState_active = Off;
    }
}

IOxfReactive::TakeEventStatus StateChartSim::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State WaitingForOrder
        case WaitingForOrder:
        {
            if(IS_EVENT_TYPE_OF(evOrderGiven_SimulazioneStateWithPAnel_id))
                {
                    On_subState = OrderTaken;
                    rootState_active = OrderTaken;
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = On_handleEvent();
                }
        }
        break;
        // State OrderTaken
        case OrderTaken:
        {
            res = On_handleEvent();
        }
        break;
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(evTurnOn_SimulazioneStateWithPAnel_id))
                {
                    On_entDef();
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

void StateChartSim::On_entDef() {
    rootState_subState = On;
    On_subState = WaitingForOrder;
    rootState_active = WaitingForOrder;
}

IOxfReactive::TakeEventStatus StateChartSim::On_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evTurnOff_SimulazioneStateWithPAnel_id))
        {
            On_subState = OMNonState;
            rootState_subState = Off;
            rootState_active = Off;
            res = eventConsumed;
        }
    
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\StateChartSim.cpp
*********************************************************************/
