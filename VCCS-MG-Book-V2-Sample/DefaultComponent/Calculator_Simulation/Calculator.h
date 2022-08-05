/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: Calculator_Simulation
	Model Element	: Calculator
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/Calculator_Simulation/Calculator.h
*********************************************************************/

#ifndef Calculator_H
#define Calculator_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//##   ignore
#include <simulation/OMActivityContext.h>
//## auto_generated
#include "TestSimulazioni.h"
//## package TestSimulazioni

//## class Calculator
class Calculator : virtual public OMActivityContext {
public :

    //## auto_generated
    class Activity_0OfCalculator;
    
    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedCalculator;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    int X;		//## attribute X
    
    int Y;		//## attribute Y
    
    int Z;		//## attribute Z

public :

//#[ ignore
    class Activity_0OfCalculator : virtual public OMActivity {
    public :
    
        class ActionGetXInActivityActivity_0OfCalculator : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionGetXInActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& activity, Calculator& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual int getA();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Calculator* mContext;
            
            int a;
        };
        
        class ActionGetYInActivityActivity_0OfCalculator : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionGetYInActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& activity, Calculator& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual int getB();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Calculator* mContext;
            
            int b;
        };
        
        class ActionAddingInActivityActivity_0OfCalculator : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAddingInActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& activity, Calculator& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual int getC();
            
            virtual void setA(int value);
            
            virtual void setB(int value);
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Calculator* mContext;
            
            int c;
            
            int a;
            
            int b;
        };
        
        class ActionWriteZInActivityActivity_0OfCalculator : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionWriteZInActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& activity, Calculator& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setC(int value);
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Calculator* mContext;
            
            int c;
        };
        
        class ActionActivityfinal_7InActivityActivity_0OfCalculator : virtual public OMActivityFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionActivityfinal_7InActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& activity, Calculator& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Calculator* mContext;
        };
        
        class ControlFork_5InActivityActivity_0OfCalculator : virtual public OMForkNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ControlFork_5InActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& activity, Calculator& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            Calculator* mContext;
        };
        
        class DataFlow2InActivityActivity_0OfCalculator : virtual public OMDataFlow<int> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow2InActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& context, ActionGetXInActivityActivity_0OfCalculator& sourceAction, ActionAddingInActivityActivity_0OfCalculator& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionGetXInActivityActivity_0OfCalculator* dataSource;
            
            ActionAddingInActivityActivity_0OfCalculator* dataTarget;
        };
        
        class DataFlow3InActivityActivity_0OfCalculator : virtual public OMDataFlow<int> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow3InActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& context, ActionGetYInActivityActivity_0OfCalculator& sourceAction, ActionAddingInActivityActivity_0OfCalculator& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionGetYInActivityActivity_0OfCalculator* dataSource;
            
            ActionAddingInActivityActivity_0OfCalculator* dataTarget;
        };
        
        class DataFlow5InActivityActivity_0OfCalculator : virtual public OMDataFlow<int> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow5InActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& context, ActionAddingInActivityActivity_0OfCalculator& sourceAction, ActionWriteZInActivityActivity_0OfCalculator& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionAddingInActivityActivity_0OfCalculator* dataSource;
            
            ActionWriteZInActivityActivity_0OfCalculator* dataTarget;
        };
        
        ////    Constructors and destructors    ////
        
        Activity_0OfCalculator(Calculator& context);
        
        ////    Framework    ////
        
        Calculator* mContext;
    };
//#]

    //## auto_generated
    Calculator();
    
    //## auto_generated
    ~Calculator();
    
//#[ ignore
    virtual OMActivity* createMainActivity();
    
    virtual void* getMe();
//#]

    //## activity_action activity_0:ROOT.GetX
    OMList<OMString> delegatedFilterPassableFlowsFromActionGetXInActivityActivity_0OfCalculator(int& a);
    
    //## activity_action activity_0:ROOT.GetX
    void delegatedInvokeContextMethodFromActionGetXInActivityActivity_0OfCalculator(int& a);
    
    //## activity_action activity_0:ROOT.GetY
    OMList<OMString> delegatedFilterPassableFlowsFromActionGetYInActivityActivity_0OfCalculator(int& b);
    
    //## activity_action activity_0:ROOT.GetY
    void delegatedInvokeContextMethodFromActionGetYInActivityActivity_0OfCalculator(int& b);
    
    //## activity_action activity_0:ROOT.adding
    OMList<OMString> delegatedFilterPassableFlowsFromActionAddingInActivityActivity_0OfCalculator(int& c, int a, int b);
    
    //## activity_action activity_0:ROOT.adding
    void delegatedInvokeContextMethodFromActionAddingInActivityActivity_0OfCalculator(int& c, int a, int b);
    
    //## activity_action activity_0:ROOT.WriteZ
    OMList<OMString> delegatedFilterPassableFlowsFromActionWriteZInActivityActivity_0OfCalculator(int c);
    
    //## activity_action activity_0:ROOT.WriteZ
    void delegatedInvokeContextMethodFromActionWriteZInActivityActivity_0OfCalculator(int c);
    
    //## activity_action activity_0:ROOT.activityfinal_7
    OMList<OMString> delegatedFilterPassableFlowsFromActionActivityfinal_7InActivityActivity_0OfCalculator();
    
    //## activity_control activity_0:ROOT.fork_5
    OMList<OMString> delegatedFilterPassableFlowsFromControlFork_5InActivityActivity_0OfCalculator();
    
    //## auto_generated
    int getX() const;
    
    //## auto_generated
    void setX(int p_X);
    
    //## auto_generated
    int getY() const;
    
    //## auto_generated
    void setY(int p_Y);
    
    //## auto_generated
    int getZ() const;
    
    //## auto_generated
    void setZ(int p_Z);
    
    //## auto_generated
    virtual bool startBehavior();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCalculator : virtual public AOMInstance {
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;

    DECLARE_ACTIVITY_META(Calculator, OMAnimatedCalculator)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/Calculator_Simulation/Calculator.h
*********************************************************************/
