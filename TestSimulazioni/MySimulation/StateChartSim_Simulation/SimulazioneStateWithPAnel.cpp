/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: MySimulation 
	Configuration 	: StateChartSim_Simulation
	Model Element	: SimulazioneStateWithPAnel
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: MySimulation/StateChartSim_Simulation/SimulazioneStateWithPAnel.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SimulazioneStateWithPAnel.h"
//## auto_generated
#include "StateChartSim.h"
//#[ ignore
#define evTurnOn_SERIALIZE OM_NO_OP

#define evTurnOn_UNSERIALIZE OM_NO_OP

#define evTurnOn_CONSTRUCTOR evTurnOn()

#define evTurnOff_SERIALIZE OM_NO_OP

#define evTurnOff_UNSERIALIZE OM_NO_OP

#define evTurnOff_CONSTRUCTOR evTurnOff()

#define evOrderGiven_SERIALIZE OM_NO_OP

#define evOrderGiven_UNSERIALIZE OM_NO_OP

#define evOrderGiven_CONSTRUCTOR evOrderGiven()
//#]

//## package SimulazioneStateWithPAnel


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(SimulazioneStateWithPAnel, SimulazioneStateWithPAnel)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evTurnOn()
evTurnOn::evTurnOn() {
    NOTIFY_EVENT_CONSTRUCTOR(evTurnOn)
    setId(evTurnOn_SimulazioneStateWithPAnel_id);
}

bool evTurnOn::isTypeOf(const short id) const {
    return (evTurnOn_SimulazioneStateWithPAnel_id==id);
}

IMPLEMENT_META_EVENT_P(evTurnOn, SimulazioneStateWithPAnel, SimulazioneStateWithPAnel, evTurnOn())

//## event evTurnOff()
evTurnOff::evTurnOff() {
    NOTIFY_EVENT_CONSTRUCTOR(evTurnOff)
    setId(evTurnOff_SimulazioneStateWithPAnel_id);
}

bool evTurnOff::isTypeOf(const short id) const {
    return (evTurnOff_SimulazioneStateWithPAnel_id==id);
}

IMPLEMENT_META_EVENT_P(evTurnOff, SimulazioneStateWithPAnel, SimulazioneStateWithPAnel, evTurnOff())

//## event evOrderGiven()
evOrderGiven::evOrderGiven() {
    NOTIFY_EVENT_CONSTRUCTOR(evOrderGiven)
    setId(evOrderGiven_SimulazioneStateWithPAnel_id);
}

bool evOrderGiven::isTypeOf(const short id) const {
    return (evOrderGiven_SimulazioneStateWithPAnel_id==id);
}

IMPLEMENT_META_EVENT_P(evOrderGiven, SimulazioneStateWithPAnel, SimulazioneStateWithPAnel, evOrderGiven())

/*********************************************************************
	File Path	: MySimulation/StateChartSim_Simulation/SimulazioneStateWithPAnel.cpp
*********************************************************************/
