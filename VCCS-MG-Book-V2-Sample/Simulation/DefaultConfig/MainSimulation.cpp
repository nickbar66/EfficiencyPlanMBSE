/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: Simulation 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Tue, 2, Aug 2022  
	File Path	: Simulation/DefaultConfig/MainSimulation.cpp
*********************************************************************/

//## auto_generated
#include "MainSimulation.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            //#[ configuration Simulation::DefaultConfig 
            //#]
            OXF::start();
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: Simulation/DefaultConfig/MainSimulation.cpp
*********************************************************************/
