/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: block_2_Simulation
	Model Element	: block_2
//!	Generated Date	: Thu, 18, Aug 2022  
	File Path	: DefaultComponent/block_2_Simulation/block_2.h
*********************************************************************/

#ifndef block_2_H
#define block_2_H

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

//## class block_2
class block_2 : virtual public OMActivityContext {
public :

    //## auto_generated
    class Activity_0OfBlock_2;
    
//#[ ignore
    class Activity_0OfBlock_2 : virtual public OMActivity {
    public :
    
        class ActionAction_0InActivityActivity_0OfBlock_2 : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_0InActivityActivity_0OfBlock_2(const OMString& id, Activity_0OfBlock_2& activity, block_2& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setECommandEvent(evICommand value);
            
            virtual eCommandVT getCommandEvent();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            block_2* mContext;
            
            evICommand eCommandEvent;
            
            eCommandVT CommandEvent;
        };
        
        class ActionAction_1InActivityActivity_0OfBlock_2 : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_1InActivityActivity_0OfBlock_2(const OMString& id, Activity_0OfBlock_2& activity, block_2& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setECommandEvent(eCommandVT value);
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            block_2* mContext;
            
            eCommandVT eCommandEvent;
        };
        
        class ActionAccepteventaction_2InActivityActivity_0OfBlock_2 : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_2InActivityActivity_0OfBlock_2(const OMString& id, Activity_0OfBlock_2& activity, IOxfEvent::ID eventId, block_2& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual evICommand getECommandEvent();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            block_2* mContext;
            
            evICommand eCommandEvent;
        };
        
        class ActionActivityfinal_4InActivityActivity_0OfBlock_2 : virtual public OMActivityFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionActivityfinal_4InActivityActivity_0OfBlock_2(const OMString& id, Activity_0OfBlock_2& activity, block_2& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            block_2* mContext;
        };
        
        class DataFlow0InActivityActivity_0OfBlock_2 : virtual public OMDataFlow<evICommand> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow0InActivityActivity_0OfBlock_2(const OMString& id, Activity_0OfBlock_2& context, ActionAccepteventaction_2InActivityActivity_0OfBlock_2& sourceAction, ActionAction_0InActivityActivity_0OfBlock_2& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionAccepteventaction_2InActivityActivity_0OfBlock_2* dataSource;
            
            ActionAction_0InActivityActivity_0OfBlock_2* dataTarget;
        };
        
        class DataFlow2InActivityActivity_0OfBlock_2 : virtual public OMDataFlow<eCommandVT> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow2InActivityActivity_0OfBlock_2(const OMString& id, Activity_0OfBlock_2& context, ActionAction_0InActivityActivity_0OfBlock_2& sourceAction, ActionAction_1InActivityActivity_0OfBlock_2& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionAction_0InActivityActivity_0OfBlock_2* dataSource;
            
            ActionAction_1InActivityActivity_0OfBlock_2* dataTarget;
        };
        
        ////    Constructors and destructors    ////
        
        Activity_0OfBlock_2(block_2& context);
        
        ////    Framework    ////
        
        block_2* mContext;
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedblock_2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    block_2();
    
    //## auto_generated
    ~block_2();
    
//#[ ignore
    virtual OMActivity* createMainActivity();
    
    virtual void* getMe();
//#]

    //## activity_action activity_0:ROOT.action_0
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_0InActivityActivity_0OfBlock_2(evICommand eCommandEvent, eCommandVT& CommandEvent);
    
    //## activity_action activity_0:ROOT.action_0
    void delegatedInvokeContextMethodFromActionAction_0InActivityActivity_0OfBlock_2(evICommand eCommandEvent, eCommandVT& CommandEvent);
    
    //## activity_action activity_0:ROOT.action_1
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_1InActivityActivity_0OfBlock_2(eCommandVT eCommandEvent);
    
    //## activity_action activity_0:ROOT.action_1
    void delegatedInvokeContextMethodFromActionAction_1InActivityActivity_0OfBlock_2(eCommandVT eCommandEvent);
    
    //## activity_action activity_0:ROOT.accepteventaction_2
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_2InActivityActivity_0OfBlock_2(evICommand& eCommandEvent);
    
    //## activity_action activity_0:ROOT.accepteventaction_2
    void delegatedAcceptEventDataFromActionAccepteventaction_2InActivityActivity_0OfBlock_2(evICommand& eCommandEvent);
    
    //## activity_action activity_0:ROOT.activityfinal_4
    OMList<OMString> delegatedFilterPassableFlowsFromActionActivityfinal_4InActivityActivity_0OfBlock_2();
    
    ////    Additional operations    ////
    
    //## auto_generated
    eCommandVT getECommand() const;
    
    //## auto_generated
    void setECommand(eCommandVT p_eCommand);
    
    //## auto_generated
    evICommand* getEvCommand() const;
    
    //## auto_generated
    virtual bool startBehavior();
    
    ////    Attributes    ////

protected :

    eCommandVT eCommand;		//## attribute eCommand
    
    evICommand evCommand;		//## attribute evCommand
    
    ////    Framework operations    ////
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedblock_2 : virtual public AOMInstance {
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;

    DECLARE_ACTIVITY_META(block_2, OMAnimatedblock_2)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/block_2_Simulation/block_2.h
*********************************************************************/
