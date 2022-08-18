/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Wed, 17, Aug 2022  
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/

//## auto_generated
#include "Default.h"
//## auto_generated
#include "block_0.h"
//## package Default



//## event evICommand(int)
evICommand::evICommand(int p_iCommand) : iCommand(p_iCommand) {
    setId(evICommand_Default_id);
}

bool evICommand::isTypeOf(const short id) const {
    return (evICommand_Default_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/
