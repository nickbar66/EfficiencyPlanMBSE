/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: MySimulation 
	Configuration 	: StateChartSim_Simulation
	Model Element	: StateChartSim_Simulation
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: MySimulation/StateChartSim_Simulation/MainMySimulation.cpp
*********************************************************************/

//## auto_generated
#include "MainMySimulation.h"
//## auto_generated
#include "StateChartSim.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            StateChartSim * p_StateChartSim;
            p_StateChartSim = new StateChartSim;
            p_StateChartSim->startBehavior();
            //#[ configuration MySimulation::StateChartSim_Simulation 
            //#]
            OXF::start();
            delete p_StateChartSim;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: MySimulation/StateChartSim_Simulation/MainMySimulation.cpp
*********************************************************************/
