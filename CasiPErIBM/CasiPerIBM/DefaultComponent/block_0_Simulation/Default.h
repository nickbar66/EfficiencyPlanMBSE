/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: block_0_Simulation
	Model Element	: Default
//!	Generated Date	: Thu, 18, Aug 2022  
	File Path	: DefaultComponent/block_0_Simulation/Default.h
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
class block_0;

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

//## event evICommand()
class evICommand : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevICommand;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evICommand();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
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
	File Path	: DefaultComponent/block_0_Simulation/Default.h
*********************************************************************/
