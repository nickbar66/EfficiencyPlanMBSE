/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: Calculator_Simulation
	Model Element	: Cabin
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/Calculator_Simulation/Cabin.h
*********************************************************************/

#ifndef Cabin_H
#define Cabin_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "P_2_System_Context.h"
//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context

//## class Cabin
class Cabin {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCabin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Cabin();
    
    //## auto_generated
    ~Cabin();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCabin : virtual public AOMInstance {
    DECLARE_META(Cabin, OMAnimatedCabin)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/Calculator_Simulation/Cabin.h
*********************************************************************/
