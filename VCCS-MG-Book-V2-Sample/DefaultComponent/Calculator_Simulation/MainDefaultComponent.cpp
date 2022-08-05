/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: Calculator_Simulation
	Model Element	: Calculator_Simulation
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/Calculator_Simulation/MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Calculator.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Calculator * p_Calculator;
            p_Calculator = new Calculator;
            p_Calculator->startBehavior();
            //#[ configuration DefaultComponent::Calculator_Simulation 
            //#]
            OXF::start();
            delete p_Calculator;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent/Calculator_Simulation/MainDefaultComponent.cpp
*********************************************************************/
