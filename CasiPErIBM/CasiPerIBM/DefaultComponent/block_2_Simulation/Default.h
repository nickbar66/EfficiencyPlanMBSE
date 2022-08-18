/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: block_2_Simulation
	Model Element	: Default
//!	Generated Date	: Thu, 18, Aug 2022  
	File Path	: DefaultComponent/block_2_Simulation/Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class block_2;

//#[ ignore
#define evICommand_Default_id 18601
//#]

//## package Default


//## type eCommandVT
enum eCommandVT {
    ON = 1,
    OFF = 2,
    IDLE = 3
};

#ifdef _OMINSTRUMENT
//#[ ignore
char* eCommandVT2String(eCommandVT arg);

eCommandVT String2eCommandVT(char* str, eCommandVT type);
//#]
#endif // _OMINSTRUMENT

//## event evICommand(eCommandVT)
class evICommand : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevICommand;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
//#[ ignore
    evICommand(int p_eCommandEvent);
//#]

    //## auto_generated
    evICommand(eCommandVT p_eCommandEvent = OFF);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    eCommandVT eCommandEvent;		//## auto_generated
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevICommand : virtual public AOMEvent {
    DECLARE_META_EVENT(evICommand)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/block_2_Simulation/Default.h
*********************************************************************/
