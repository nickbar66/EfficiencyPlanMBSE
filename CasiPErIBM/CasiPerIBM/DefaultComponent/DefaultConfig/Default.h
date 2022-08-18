/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Wed, 17, Aug 2022  
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class block_0;

//#[ ignore
#define evICommand_Default_id 18601
//#]

//## package Default



//## event evICommand(int)
class evICommand : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evICommand(int p_iCommand = 5);
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
    
    ////    Framework    ////
    
    int iCommand;		//## auto_generated
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/
