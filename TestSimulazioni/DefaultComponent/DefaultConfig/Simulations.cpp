/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Simulations
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent\DefaultConfig\Simulations.cpp
*********************************************************************/

//## auto_generated
#include "Simulations.h"
//## auto_generated
#include "StateChartSim.h"
//## package Simulations



//## event evTurnOn()
evTurnOn::evTurnOn() {
    setId(evTurnOn_Simulations_id);
}

bool evTurnOn::isTypeOf(const short id) const {
    return (evTurnOn_Simulations_id==id);
}

//## event evTurnOff()
evTurnOff::evTurnOff() {
    setId(evTurnOff_Simulations_id);
}

bool evTurnOff::isTypeOf(const short id) const {
    return (evTurnOff_Simulations_id==id);
}

//## event evOrderGiven()
evOrderGiven::evOrderGiven() {
    setId(evOrderGiven_Simulations_id);
}

bool evOrderGiven::isTypeOf(const short id) const {
    return (evOrderGiven_Simulations_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Simulations.cpp
*********************************************************************/
