/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: MySimulation 
	Configuration 	: StateChartSim_Simulation
	Model Element	: StateChartSim
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: MySimulation/StateChartSim_Simulation/StateChartSim.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "StateChartSim.h"
//#[ ignore
#define SimulazioneStateWithPAnel_StateChartSim_StateChartSim_SERIALIZE OM_NO_OP
//#]

//## package SimulazioneStateWithPAnel

//## class StateChartSim
StateChartSim::StateChartSim(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(StateChartSim, StateChartSim(), 0, SimulazioneStateWithPAnel_StateChartSim_StateChartSim_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

StateChartSim::~StateChartSim() {
    NOTIFY_DESTRUCTOR(~StateChartSim, true);
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
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("3");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("3");
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
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.On.WaitingForOrder");
                    NOTIFY_STATE_ENTERED("ROOT.On.OrderTaken");
                    On_subState = OrderTaken;
                    rootState_active = OrderTaken;
                    NOTIFY_TRANSITION_TERMINATED("2");
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
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    On_entDef();
                    NOTIFY_TRANSITION_TERMINATED("0");
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
    NOTIFY_STATE_ENTERED("ROOT.On");
    rootState_subState = On;
    NOTIFY_TRANSITION_STARTED("4");
    NOTIFY_STATE_ENTERED("ROOT.On.WaitingForOrder");
    On_subState = WaitingForOrder;
    rootState_active = WaitingForOrder;
    NOTIFY_TRANSITION_TERMINATED("4");
}

IOxfReactive::TakeEventStatus StateChartSim::On_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evTurnOff_SimulazioneStateWithPAnel_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            switch (On_subState) {
                // State WaitingForOrder
                case WaitingForOrder:
                {
                    NOTIFY_STATE_EXITED("ROOT.On.WaitingForOrder");
                }
                break;
                // State OrderTaken
                case OrderTaken:
                {
                    NOTIFY_STATE_EXITED("ROOT.On.OrderTaken");
                }
                break;
                default:
                    break;
            }
            On_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.On");
            NOTIFY_STATE_ENTERED("ROOT.Off");
            rootState_subState = Off;
            rootState_active = Off;
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStateChartSim::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case StateChartSim::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        case StateChartSim::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedStateChartSim::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
    switch (myReal->On_subState) {
        case StateChartSim::WaitingForOrder:
        {
            WaitingForOrder_serializeStates(aomsState);
        }
        break;
        case StateChartSim::OrderTaken:
        {
            OrderTaken_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedStateChartSim::WaitingForOrder_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.WaitingForOrder");
}

void OMAnimatedStateChartSim::OrderTaken_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.OrderTaken");
}

void OMAnimatedStateChartSim::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(StateChartSim, SimulazioneStateWithPAnel, SimulazioneStateWithPAnel, false, OMAnimatedStateChartSim)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: MySimulation/StateChartSim_Simulation/StateChartSim.cpp
*********************************************************************/
