/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: ProvideConfortableTemperature_Simulation
	Model Element	: ProvideConfortableTemperature_Simulation
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/ProvideConfortableTemperature_Simulation/MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "ProvideConfortableTemperature.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            ProvideConfortableTemperature * p_ProvideConfortableTemperature;
            p_ProvideConfortableTemperature = new ProvideConfortableTemperature;
            p_ProvideConfortableTemperature->startBehavior();
            //#[ configuration DefaultComponent::ProvideConfortableTemperature_Simulation 
            //#]
            OXF::start();
            delete p_ProvideConfortableTemperature;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent/ProvideConfortableTemperature_Simulation/MainDefaultComponent.cpp
*********************************************************************/
