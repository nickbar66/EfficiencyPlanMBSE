/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: MySimulation 
	Configuration 	: Cygwin
	Model Element	: Cygwin
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: MySimulation/Cygwin/MainMySimulation.cpp
*********************************************************************/

//## auto_generated
#include "MainMySimulation.h"
//## auto_generated
#include "Calculator.h"
//## auto_generated
#include "StateChartSim.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Calculator * p_Calculator;
            StateChartSim * p_StateChartSim;
            p_Calculator = new Calculator;
            p_Calculator->startBehavior();
            p_StateChartSim = new StateChartSim;
            p_StateChartSim->startBehavior();
            //#[ configuration MySimulation::Cygwin 
            //#]
            OXF::start();
            delete p_Calculator;
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
	File Path	: MySimulation/Cygwin/MainMySimulation.cpp
*********************************************************************/
