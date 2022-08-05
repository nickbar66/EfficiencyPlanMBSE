/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SimulazioneStateWithPAnel
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent\DefaultConfig\SimulazioneStateWithPAnel.cpp
*********************************************************************/

//## auto_generated
#include "SimulazioneStateWithPAnel.h"
//## auto_generated
#include "StateChartSim.h"
//## package SimulazioneStateWithPAnel



//## event evTurnOn()
evTurnOn::evTurnOn() {
    setId(evTurnOn_SimulazioneStateWithPAnel_id);
}

bool evTurnOn::isTypeOf(const short id) const {
    return (evTurnOn_SimulazioneStateWithPAnel_id==id);
}

//## event evTurnOff()
evTurnOff::evTurnOff() {
    setId(evTurnOff_SimulazioneStateWithPAnel_id);
}

bool evTurnOff::isTypeOf(const short id) const {
    return (evTurnOff_SimulazioneStateWithPAnel_id==id);
}

//## event evOrderGiven()
evOrderGiven::evOrderGiven() {
    setId(evOrderGiven_SimulazioneStateWithPAnel_id);
}

bool evOrderGiven::isTypeOf(const short id) const {
    return (evOrderGiven_SimulazioneStateWithPAnel_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SimulazioneStateWithPAnel.cpp
*********************************************************************/
