/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: Simulation 
	Configuration 	: DefaultConfig
	Model Element	: VCCU
//!	Generated Date	: Tue, 2, Aug 2022  
	File Path	: Simulation/DefaultConfig/VCCU.h
*********************************************************************/

#ifndef VCCU_H
#define VCCU_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "P_2_System_Context.h"
//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context

//## class VCCU
class VCCU {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedVCCU;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    VCCU();
    
    //## auto_generated
    ~VCCU();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedVCCU : virtual public AOMInstance {
    DECLARE_META(VCCU, OMAnimatedVCCU)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: Simulation/DefaultConfig/VCCU.h
*********************************************************************/
