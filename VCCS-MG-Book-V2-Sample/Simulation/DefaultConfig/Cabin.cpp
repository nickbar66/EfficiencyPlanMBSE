/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: Simulation 
	Configuration 	: DefaultConfig
	Model Element	: Cabin
//!	Generated Date	: Tue, 2, Aug 2022  
	File Path	: Simulation/DefaultConfig/Cabin.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Cabin.h"
//#[ ignore
#define Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context_Cabin_Cabin_SERIALIZE OM_NO_OP
//#]

//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context

//## class Cabin
Cabin::Cabin() {
    NOTIFY_CONSTRUCTOR(Cabin, Cabin(), 0, Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context_Cabin_Cabin_SERIALIZE);
}

Cabin::~Cabin() {
    NOTIFY_DESTRUCTOR(~Cabin, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Cabin, Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context, Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context, false, OMAnimatedCabin)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Simulation/DefaultConfig/Cabin.cpp
*********************************************************************/
