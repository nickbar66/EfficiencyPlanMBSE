/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: block_0_Simulation
	Model Element	: block_0_Simulation
//!	Generated Date	: Wed, 17, Aug 2022  
	File Path	: DefaultComponent/block_0_Simulation/MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "block_0.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            block_0 * p_block_0;
            p_block_0 = new block_0;
            p_block_0->startBehavior();
            //#[ configuration DefaultComponent::block_0_Simulation 
            //#]
            OXF::start();
            delete p_block_0;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent/block_0_Simulation/MainDefaultComponent.cpp
*********************************************************************/
