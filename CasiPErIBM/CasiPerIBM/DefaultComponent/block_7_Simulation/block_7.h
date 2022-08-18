/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: block_7_Simulation
	Model Element	: block_7
//!	Generated Date	: Thu, 18, Aug 2022  
	File Path	: DefaultComponent/block_7_Simulation/block_7.h
*********************************************************************/

#ifndef block_7_H
#define block_7_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//##   ignore
#include <simulation/OMActivityContext.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class block_7
class block_7 : virtual public OMActivityContext {
public :

    //## auto_generated
    class Activity_0OfBlock_7;
    
//#[ ignore
    class Activity_0OfBlock_7 : virtual public OMActivity {
    public :
    
        class ActionAccepteventaction_0InActivityActivity_0OfBlock_7 : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_0InActivityActivity_0OfBlock_7(const OMString& id, Activity_0OfBlock_7& activity, IOxfEvent::ID eventId, block_7& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual evICommand getECommandEvent();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            block_7* mContext;
            
            evICommand eCommandEvent;
        };
        
        class ActionAction_1InActivityActivity_0OfBlock_7 : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_1InActivityActivity_0OfBlock_7(const OMString& id, Activity_0OfBlock_7& activity, block_7& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setPin_2(evICommand value);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            block_7* mContext;
            
            evICommand pin_2;
        };
        
        class DataFlow0InActivityActivity_0OfBlock_7 : virtual public OMDataFlow<evICommand> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow0InActivityActivity_0OfBlock_7(const OMString& id, Activity_0OfBlock_7& context, ActionAccepteventaction_0InActivityActivity_0OfBlock_7& sourceAction, ActionAction_1InActivityActivity_0OfBlock_7& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionAccepteventaction_0InActivityActivity_0OfBlock_7* dataSource;
            
            ActionAction_1InActivityActivity_0OfBlock_7* dataTarget;
        };
        
        ////    Constructors and destructors    ////
        
        Activity_0OfBlock_7(block_7& context);
        
        ////    Framework    ////
        
        block_7* mContext;
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedblock_7;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    block_7();
    
    //## auto_generated
    ~block_7();
    
//#[ ignore
    virtual OMActivity* createMainActivity();
    
    virtual void* getMe();
//#]

    //## activity_action activity_0:ROOT.accepteventaction_0
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityActivity_0OfBlock_7(evICommand& eCommandEvent);
    
    //## activity_action activity_0:ROOT.accepteventaction_0
    void delegatedAcceptEventDataFromActionAccepteventaction_0InActivityActivity_0OfBlock_7(evICommand& eCommandEvent);
    
    //## activity_action activity_0:ROOT.action_1
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_1InActivityActivity_0OfBlock_7(evICommand pin_2);
    
    //## activity_action activity_0:ROOT.action_1
    void delegatedInvokeContextMethodFromActionAction_1InActivityActivity_0OfBlock_7(evICommand pin_2);
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();
    
    ////    Framework operations    ////
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedblock_7 : virtual public AOMInstance {
    DECLARE_ACTIVITY_META(block_7, OMAnimatedblock_7)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/block_7_Simulation/block_7.h
*********************************************************************/
