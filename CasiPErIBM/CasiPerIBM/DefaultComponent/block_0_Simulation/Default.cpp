/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: block_0_Simulation
	Model Element	: Default
//!	Generated Date	: Thu, 18, Aug 2022  
	File Path	: DefaultComponent/block_0_Simulation/Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "block_0.h"
//#[ ignore
#define evICommand_SERIALIZE OM_NO_OP

#define evICommand_UNSERIALIZE OM_NO_OP

#define evICommand_CONSTRUCTOR evICommand()
//#]

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Default, Default)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evICommand()
evICommand::evICommand() {
    NOTIFY_EVENT_CONSTRUCTOR(evICommand)
    setId(evICommand_Default_id);
}

bool evICommand::isTypeOf(const short id) const {
    return (evICommand_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evICommand, Default, Default, evICommand())

/*********************************************************************
	File Path	: DefaultComponent/block_0_Simulation/Default.cpp
*********************************************************************/
