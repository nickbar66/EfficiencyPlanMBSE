/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: block_0
//!	Generated Date	: Wed, 17, Aug 2022  
	File Path	: DefaultComponent/DefaultConfig/block_0.h
*********************************************************************/

#ifndef block_0_H
#define block_0_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//##   ignore
#include <simulation/OMActivityContext.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class block_0
class block_0 : virtual public OMActivityContext {
public :

    //## auto_generated
    class Activity_0OfBlock_0;
    
//#[ ignore
    class Activity_0OfBlock_0 : virtual public OMActivity {
    public :
    
        class ActionAction_0InActivityActivity_0OfBlock_0 : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_0InActivityActivity_0OfBlock_0(const OMString& id, Activity_0OfBlock_0& activity, block_0& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setICommand(int value);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            block_0* mContext;
            
            int iCommand;
        };
        
        class ActionAction_1InActivityActivity_0OfBlock_0 : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_1InActivityActivity_0OfBlock_0(const OMString& id, Activity_0OfBlock_0& activity, block_0& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            block_0* mContext;
        };
        
        class ActionActivityfinal_3InActivityActivity_0OfBlock_0 : virtual public OMActivityFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionActivityfinal_3InActivityActivity_0OfBlock_0(const OMString& id, Activity_0OfBlock_0& activity, block_0& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            block_0* mContext;
        };
        
        class ActionAccepteventaction_4InActivityActivity_0OfBlock_0 : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_4InActivityActivity_0OfBlock_0(const OMString& id, Activity_0OfBlock_0& activity, IOxfEvent::ID eventId, block_0& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual int getICommand();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            block_0* mContext;
            
            int iCommand;
        };
        
        class DataFlow3InActivityActivity_0OfBlock_0 : virtual public OMDataFlow<int> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow3InActivityActivity_0OfBlock_0(const OMString& id, Activity_0OfBlock_0& context, ActionAccepteventaction_4InActivityActivity_0OfBlock_0& sourceAction, ActionAction_0InActivityActivity_0OfBlock_0& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionAccepteventaction_4InActivityActivity_0OfBlock_0* dataSource;
            
            ActionAction_0InActivityActivity_0OfBlock_0* dataTarget;
        };
        
        ////    Constructors and destructors    ////
        
        Activity_0OfBlock_0(block_0& context);
        
        ////    Framework    ////
        
        block_0* mContext;
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    block_0();
    
    //## auto_generated
    ~block_0();
    
//#[ ignore
    virtual OMActivity* createMainActivity();
//#]

    //## activity_action activity_0:ROOT.action_0
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_0InActivityActivity_0OfBlock_0(int iCommand);
    
    //## activity_action activity_0:ROOT.action_0
    void delegatedInvokeContextMethodFromActionAction_0InActivityActivity_0OfBlock_0(int iCommand);
    
    //## activity_action activity_0:ROOT.action_1
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_1InActivityActivity_0OfBlock_0();
    
    //## activity_action activity_0:ROOT.action_1
    void delegatedInvokeContextMethodFromActionAction_1InActivityActivity_0OfBlock_0();
    
    //## activity_action activity_0:ROOT.activityfinal_3
    OMList<OMString> delegatedFilterPassableFlowsFromActionActivityfinal_3InActivityActivity_0OfBlock_0();
    
    //## activity_action activity_0:ROOT.accepteventaction_4
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_4InActivityActivity_0OfBlock_0(int& iCommand);
    
    //## activity_action activity_0:ROOT.accepteventaction_4
    void delegatedAcceptEventDataFromActionAccepteventaction_4InActivityActivity_0OfBlock_0(int& iCommand);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getIBuf() const;
    
    //## auto_generated
    void setIBuf(int p_iBuf);
    
    //## auto_generated
    int getICommand() const;
    
    //## auto_generated
    void setICommand(int p_iCommand);
    
    //## auto_generated
    int getIStatus() const;
    
    //## auto_generated
    void setIStatus(int p_iStatus);
    
    //## auto_generated
    virtual bool startBehavior();
    
    ////    Attributes    ////

protected :

    int iBuf;		//## attribute iBuf
    
    int iCommand;		//## attribute iCommand
    
    int iStatus;		//## attribute iStatus
    
    ////    Framework operations    ////
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/block_0.h
*********************************************************************/
