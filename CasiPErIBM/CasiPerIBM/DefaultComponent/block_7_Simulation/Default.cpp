/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: block_7_Simulation
	Model Element	: Default
//!	Generated Date	: Thu, 18, Aug 2022  
	File Path	: DefaultComponent/block_7_Simulation/Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "block_7.h"
//#[ ignore
#define evICommand_SERIALIZE OMADD_SER(eCommandEvent, eCommandVT2String(myEvent->eCommandEvent))

#define evICommand_UNSERIALIZE OMADD_UNSER(eCommandVT, eCommandEvent, String2eCommandVT)

#define evICommand_CONSTRUCTOR evICommand(eCommandEvent)
//#]

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Default, Default)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

//#[ ignore
char* eCommandVT2String(eCommandVT arg) {
    char* buf = new char[20];
    switch(arg)
    {
        case ON:
            strcpy(buf,"ON");
            break;
        case OFF:
            strcpy(buf,"OFF");
            break;
        case IDLE:
            strcpy(buf,"IDLE");
            break;
        default:
            strcpy(buf,"Invalid Enum Value");
            break;
    }
    return buf;
}

eCommandVT String2eCommandVT(char* str, eCommandVT type) {
    if(strcmp(str,"ON") == 0)
    {
        type = ON;
    }
    else if(strcmp(str,"OFF") == 0)
    {
        type = OFF;
    }
    else if(strcmp(str,"IDLE") == 0)
    {
        type = IDLE;
    }
    delete[] str;
    return type;
}
//#]
#endif // _OMINSTRUMENT

//## event evICommand(eCommandVT)
//#[ ignore
evICommand::evICommand(int p_eCommandEvent) : eCommandEvent((eCommandVT)p_eCommandEvent) {
    NOTIFY_EVENT_CONSTRUCTOR(evICommand)
    setId(evICommand_Default_id);
}
//#]

evICommand::evICommand(eCommandVT p_eCommandEvent) : eCommandEvent(p_eCommandEvent) {
    NOTIFY_EVENT_CONSTRUCTOR(evICommand)
    setId(evICommand_Default_id);
}

bool evICommand::isTypeOf(const short id) const {
    return (evICommand_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evICommand, Default, Default, evICommand(eCommandVT))

/*********************************************************************
	File Path	: DefaultComponent/block_7_Simulation/Default.cpp
*********************************************************************/
