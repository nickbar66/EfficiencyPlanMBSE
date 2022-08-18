/*********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: ProvideConfortableTemperature_Simulation
	Model Element	: ProvideConfortableTemperature
//!	Generated Date	: Thu, 18, Aug 2022  
	File Path	: DefaultComponent/ProvideConfortableTemperature_Simulation/ProvideConfortableTemperature.h
*********************************************************************/

#ifndef ProvideConfortableTemperature_H
#define ProvideConfortableTemperature_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <../Profiles/SysML/SIDefinitions.h>
//## auto_generated
#include <aom/aom.h>
//##   ignore
#include <simulation/OMActivityContext.h>
//## auto_generated
#include "P_3_Use_Cases.h"
//## attribute UserCommand
#include "P_3_Exchange_Items.h"
//## link itsVehicleOccupant
class VehicleOccupant;

//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_3_Use_Cases

//## usecase ProvideConfortableTemperature
class ProvideConfortableTemperature : virtual public OMActivityContext {
public :

    //## auto_generated
    class ProvideConfortableTemperatureOfProvideConfortableTemperature;
    
//#[ ignore
    class ProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMActivity {
    public :
    
        class ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void setECommand(eCommandVT value);
            
            virtual void setStatus(int value);
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
            
            eCommandVT eCommand;
            
            int Status;
        };
        
        class ActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionActivityfinal_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMActivityFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionActivityfinal_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, IOxfEvent::ID eventId, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual eCommandVT getECommand();
            
            virtual int getStatus();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
            
            eCommandVT eCommand;
            
            int Status;
        };
        
        class ControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMDecisionNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMMergeNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMMergeNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class ControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMDecisionNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ProvideConfortableTemperature* mContext;
        };
        
        class DataFlow18InActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMDataFlow<eCommandVT> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow18InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& context, ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature& sourceAction, ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature* dataSource;
            
            ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* dataTarget;
        };
        
        class DataFlow19InActivityProvideConfortableTemperatureOfProvideConfortableTemperature : virtual public OMDataFlow<int> {
            ////    Constructors and destructors    ////
            
        public :
        
            DataFlow19InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& context, ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature& sourceAction, ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature& targetAction);
            
            virtual void giveToken();
            
            virtual void takeToken();
            
            void serializeTokens(AOMSAttributes& tokens);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature* dataSource;
            
            ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* dataTarget;
        };
        
        ////    Constructors and destructors    ////
        
        ProvideConfortableTemperatureOfProvideConfortableTemperature(ProvideConfortableTemperature& context);
        
        ////    Framework    ////
        
        ProvideConfortableTemperature* mContext;
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedProvideConfortableTemperature;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ProvideConfortableTemperature();
    
    //## auto_generated
    ~ProvideConfortableTemperature();
    
//#[ ignore
    virtual OMActivity* createMainActivity();
    
    virtual void* getMe();
//#]

    //## activity_action ProvideConfortableTemperature:ROOT.TurnOnClimateControl
    OMList<OMString> delegatedFilterPassableFlowsFromActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(eCommandVT eCommand, int Status);
    
    //## activity_action ProvideConfortableTemperature:ROOT.TurnOnClimateControl
    void delegatedInvokeContextMethodFromActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(eCommandVT eCommand, int Status);
    
    //## activity_action ProvideConfortableTemperature:ROOT.CheckSystem
    OMList<OMString> delegatedFilterPassableFlowsFromActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.CheckSystem
    void delegatedInvokeContextMethodFromActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.StartClimateControl
    OMList<OMString> delegatedFilterPassableFlowsFromActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.StartClimateControl
    void delegatedInvokeContextMethodFromActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.StopClimateControl
    OMList<OMString> delegatedFilterPassableFlowsFromActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.StopClimateControl
    void delegatedInvokeContextMethodFromActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.MeasureTemperature
    OMList<OMString> delegatedFilterPassableFlowsFromActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.MeasureTemperature
    void delegatedInvokeContextMethodFromActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.EvaluateControl
    OMList<OMString> delegatedFilterPassableFlowsFromActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.EvaluateControl
    void delegatedInvokeContextMethodFromActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.DisplayTemperature
    OMList<OMString> delegatedFilterPassableFlowsFromActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.DisplayTemperature
    void delegatedInvokeContextMethodFromActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.SetTemperature
    OMList<OMString> delegatedFilterPassableFlowsFromActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.SetTemperature
    void delegatedInvokeContextMethodFromActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.ProvideAir
    OMList<OMString> delegatedFilterPassableFlowsFromActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.ProvideAir
    void delegatedInvokeContextMethodFromActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.ReachDesiredTemperature
    OMList<OMString> delegatedFilterPassableFlowsFromActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.ReachDesiredTemperature
    void delegatedInvokeContextMethodFromActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.GetConfortableAir
    OMList<OMString> delegatedFilterPassableFlowsFromActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.GetConfortableAir
    void delegatedInvokeContextMethodFromActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.EnjoyTemperaturee
    OMList<OMString> delegatedFilterPassableFlowsFromActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.EnjoyTemperaturee
    void delegatedInvokeContextMethodFromActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.TurnOffClimateControl
    OMList<OMString> delegatedFilterPassableFlowsFromActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.TurnOffClimateControl
    void delegatedInvokeContextMethodFromActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.activityfinal_31
    OMList<OMString> delegatedFilterPassableFlowsFromActionActivityfinal_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_action ProvideConfortableTemperature:ROOT.accepteventaction_34
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(eCommandVT& eCommand, int& Status);
    
    //## activity_action ProvideConfortableTemperature:ROOT.accepteventaction_34
    void delegatedAcceptEventDataFromActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(eCommandVT& eCommand, int& Status);
    
    //## activity_control ProvideConfortableTemperature:ROOT.CheckSystemState
    OMList<OMString> delegatedFilterPassableFlowsFromControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_control ProvideConfortableTemperature:ROOT.mergenode_20
    OMList<OMString> delegatedFilterPassableFlowsFromControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_control ProvideConfortableTemperature:ROOT.mergenode_31
    OMList<OMString> delegatedFilterPassableFlowsFromControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    //## activity_control ProvideConfortableTemperature:ROOT.EvalTemp
    OMList<OMString> delegatedFilterPassableFlowsFromControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getOK() const;
    
    //## auto_generated
    void setOK(int p_OK);
    
    //## auto_generated
    int getStatus() const;
    
    //## auto_generated
    void setStatus(int p_Status);
    
    //## auto_generated
    evUserCommand* getUserCommand() const;
    
    //## auto_generated
    eCommandVT getEConfortable() const;
    
    //## auto_generated
    void setEConfortable(eCommandVT p_eConfortable);
    
    //## auto_generated
    VehicleOccupant* getItsVehicleOccupant() const;
    
    //## auto_generated
    void setItsVehicleOccupant(VehicleOccupant* p_VehicleOccupant);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int OK;		//## attribute OK
    
    int Status;		//## attribute Status
    
    evUserCommand UserCommand;		//## attribute UserCommand
    
    eCommandVT eConfortable;		//## attribute eConfortable
    
    ////    Relations and components    ////
    
    VehicleOccupant* itsVehicleOccupant;		//## link itsVehicleOccupant
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsVehicleOccupant(VehicleOccupant* p_VehicleOccupant);
    
    //## auto_generated
    void _setItsVehicleOccupant(VehicleOccupant* p_VehicleOccupant);
    
    //## auto_generated
    void _clearItsVehicleOccupant();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedProvideConfortableTemperature : virtual public AOMInstance {
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;

    DECLARE_ACTIVITY_META(ProvideConfortableTemperature, OMAnimatedProvideConfortableTemperature)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/ProvideConfortableTemperature_Simulation/ProvideConfortableTemperature.h
*********************************************************************/
