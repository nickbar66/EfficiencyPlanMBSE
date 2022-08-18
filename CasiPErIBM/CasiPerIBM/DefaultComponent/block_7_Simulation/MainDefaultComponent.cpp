/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: block_7_Simulation
	Model Element	: block_7_Simulation
//!	Generated Date	: Thu, 18, Aug 2022  
	File Path	: DefaultComponent/block_7_Simulation/MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "block_7.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            block_7 * p_block_7;
            p_block_7 = new block_7;
            p_block_7->startBehavior();
            //#[ configuration DefaultComponent::block_7_Simulation 
            //#]
            OXF::start();
            delete p_block_7;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent/block_7_Simulation/MainDefaultComponent.cpp
*********************************************************************/
