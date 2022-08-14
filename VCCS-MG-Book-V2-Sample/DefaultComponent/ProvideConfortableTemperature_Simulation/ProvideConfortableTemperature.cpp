/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: ProvideConfortableTemperature_Simulation
	Model Element	: ProvideConfortableTemperature
//!	Generated Date	: Sun, 14, Aug 2022  
	File Path	: DefaultComponent/ProvideConfortableTemperature_Simulation/ProvideConfortableTemperature.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ProvideConfortableTemperature.h"
//## link itsVehicleOccupant
#include "VehicleOccupant.h"
//#[ ignore
#define Model_P_1_Problem_Domain_P_1_Black_Box_P_3_Use_Cases_ProvideConfortableTemperature_ProvideConfortableTemperature_SERIALIZE OM_NO_OP
//#]

//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_3_Use_Cases

//## usecase ProvideConfortableTemperature
//#[ ignore
ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionActivityfinal_9InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionActivityfinal_9InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionActivityfinal_9InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_9InActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMDecisionNode(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMMergeNode(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMMergeNode(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMDecisionNode(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature(ProvideConfortableTemperature& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varTurnOnClimateControl = new ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.TurnOnClimateControl", *this, *mContext);
    ActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varCheckSystem = new ActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.CheckSystem", *this, *mContext);
    ActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varStartClimateControl = new ActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.StartClimateControl", *this, *mContext);
    ActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varStopClimateControl = new ActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.StopClimateControl", *this, *mContext);
    ActionActivityfinal_9InActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varActivityfinal_9 = new ActionActivityfinal_9InActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.activityfinal_9", *this, *mContext);
    ActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varMeasureTemperature = new ActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.MeasureTemperature", *this, *mContext);
    ActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varEvaluateControl = new ActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.EvaluateControl", *this, *mContext);
    ActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varDisplayTemperature = new ActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.DisplayTemperature", *this, *mContext);
    ActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varSetTemperature = new ActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.SetTemperature", *this, *mContext);
    ActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varProvideAir = new ActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.ProvideAir", *this, *mContext);
    ActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varReachDesiredTemperature = new ActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.ReachDesiredTemperature", *this, *mContext);
    ActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varGetConfortableAir = new ActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.GetConfortableAir", *this, *mContext);
    ActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varEnjoyTemperaturee = new ActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.EnjoyTemperaturee", *this, *mContext);
    ActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varTurnOffClimateControl = new ActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.TurnOffClimateControl", *this, *mContext);
    ControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varCheckSystemState = new ControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.CheckSystemState", *this, *mContext);
    ControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varMergenode_20 = new ControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.mergenode_20", *this, *mContext);
    ControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varMergenode_31 = new ControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.mergenode_31", *this, *mContext);
    ControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varEvalTemp = new ControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.EvalTemp", *this, *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("ProvideConfortableTemperature:0", *this);
    
    // Setup flows
    new OMControlFlow("ProvideConfortableTemperature:0", *this, *varInitialNode0, *varTurnOnClimateControl);
    new OMControlFlow("ProvideConfortableTemperature:1", *this, *varTurnOnClimateControl, *varCheckSystem);
    new OMControlFlow("ProvideConfortableTemperature:2", *this, *varCheckSystemState, *varStartClimateControl);
    new OMControlFlow("ProvideConfortableTemperature:3", *this, *varCheckSystemState, *varMergenode_20);
    new OMControlFlow("ProvideConfortableTemperature:4", *this, *varStopClimateControl, *varMergenode_20);
    new OMControlFlow("ProvideConfortableTemperature:5", *this, *varMergenode_20, *varActivityfinal_9);
    new OMControlFlow("ProvideConfortableTemperature:6", *this, *varStartClimateControl, *varMergenode_31);
    new OMControlFlow("ProvideConfortableTemperature:7", *this, *varMergenode_31, *varMeasureTemperature);
    new OMControlFlow("ProvideConfortableTemperature:8", *this, *varDisplayTemperature, *varEvaluateControl);
    new OMControlFlow("ProvideConfortableTemperature:9", *this, *varMeasureTemperature, *varDisplayTemperature);
    new OMControlFlow("ProvideConfortableTemperature:10", *this, *varEvalTemp, *varSetTemperature);
    new OMControlFlow("ProvideConfortableTemperature:11", *this, *varSetTemperature, *varProvideAir);
    new OMControlFlow("ProvideConfortableTemperature:12", *this, *varProvideAir, *varReachDesiredTemperature);
    new OMControlFlow("ProvideConfortableTemperature:13", *this, *varReachDesiredTemperature, *varGetConfortableAir);
    new OMControlFlow("ProvideConfortableTemperature:14", *this, *varGetConfortableAir, *varMergenode_31);
    new OMControlFlow("ProvideConfortableTemperature:15", *this, *varEvalTemp, *varEnjoyTemperaturee);
    new OMControlFlow("ProvideConfortableTemperature:16", *this, *varEnjoyTemperaturee, *varTurnOffClimateControl);
    new OMControlFlow("ProvideConfortableTemperature:17", *this, *varTurnOffClimateControl, *varStopClimateControl);
    new OMControlFlow("ProvideConfortableTemperature:18", *this, *varCheckSystem, *varCheckSystemState);
    new OMControlFlow("ProvideConfortableTemperature:19", *this, *varEvaluateControl, *varEvalTemp);
}
//#]

ProvideConfortableTemperature::ProvideConfortableTemperature() : Confortable(0), OK(0) {
    NOTIFY_ACTIVITY_CONSTRUCTOR(ProvideConfortableTemperature, ProvideConfortableTemperature(), 0, Model_P_1_Problem_Domain_P_1_Black_Box_P_3_Use_Cases_ProvideConfortableTemperature_ProvideConfortableTemperature_SERIALIZE);
    itsVehicleOccupant = NULL;
}

ProvideConfortableTemperature::~ProvideConfortableTemperature() {
    NOTIFY_DESTRUCTOR(~ProvideConfortableTemperature, true);
    cleanUpRelations();
}

//#[ ignore
OMActivity* ProvideConfortableTemperature::createMainActivity() {
    return new ProvideConfortableTemperatureOfProvideConfortableTemperature(*this);
}

void* ProvideConfortableTemperature::getMe() {
    return this;
}
//#]

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.TurnOnClimateControl
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:1");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.TurnOnClimateControl
    OK=1;
    Confortable=0;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.CheckSystem
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:18");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.CheckSystem
    OK=1;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.StartClimateControl
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:6");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.StartClimateControl
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.StopClimateControl
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:4");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.StopClimateControl
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionActivityfinal_9InActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.activityfinal_9
    OMList<OMString> ans;
    return ans;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.MeasureTemperature
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:9");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.MeasureTemperature
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.EvaluateControl
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:19");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.EvaluateControl
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.DisplayTemperature
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:8");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.DisplayTemperature
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.SetTemperature
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:11");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.SetTemperature
    Confortable=1;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.ProvideAir
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:12");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.ProvideAir
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.ReachDesiredTemperature
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:13");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.ReachDesiredTemperature
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.GetConfortableAir
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:14");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.GetConfortableAir
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.EnjoyTemperaturee
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:16");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.EnjoyTemperaturee
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.TurnOffClimateControl
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:17");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.TurnOffClimateControl
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_control ProvideConfortableTemperature:ROOT.CheckSystemState
    OMList<OMString> ans;
    if (OK) { ans.add("ProvideConfortableTemperature:2"); }
    else { ans.add("ProvideConfortableTemperature:3"); }
    return ans;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_control ProvideConfortableTemperature:ROOT.mergenode_20
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:5");
    return ans;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_control ProvideConfortableTemperature:ROOT.mergenode_31
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:7");
    return ans;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_control ProvideConfortableTemperature:ROOT.EvalTemp
    OMList<OMString> ans;
    if (Confortable) { ans.add("ProvideConfortableTemperature:15"); }
    else { ans.add("ProvideConfortableTemperature:10"); }
    return ans;
    //#]
}

int ProvideConfortableTemperature::getConfortable() const {
    return Confortable;
}

void ProvideConfortableTemperature::setConfortable(int p_Confortable) {
    Confortable = p_Confortable;
}

int ProvideConfortableTemperature::getOK() const {
    return OK;
}

void ProvideConfortableTemperature::setOK(int p_OK) {
    OK = p_OK;
}

VehicleOccupant* ProvideConfortableTemperature::getItsVehicleOccupant() const {
    return itsVehicleOccupant;
}

void ProvideConfortableTemperature::setItsVehicleOccupant(VehicleOccupant* p_VehicleOccupant) {
    if(p_VehicleOccupant != NULL)
        {
            p_VehicleOccupant->_setItsProvideConfortableTemperature(this);
        }
    _setItsVehicleOccupant(p_VehicleOccupant);
}

bool ProvideConfortableTemperature::startBehavior() {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

void ProvideConfortableTemperature::cleanUpRelations() {
    if(itsVehicleOccupant != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsVehicleOccupant");
            ProvideConfortableTemperature* p_ProvideConfortableTemperature = itsVehicleOccupant->getItsProvideConfortableTemperature();
            if(p_ProvideConfortableTemperature != NULL)
                {
                    itsVehicleOccupant->__setItsProvideConfortableTemperature(NULL);
                }
            itsVehicleOccupant = NULL;
        }
}

void ProvideConfortableTemperature::__setItsVehicleOccupant(VehicleOccupant* p_VehicleOccupant) {
    itsVehicleOccupant = p_VehicleOccupant;
    if(p_VehicleOccupant != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsVehicleOccupant", p_VehicleOccupant, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsVehicleOccupant");
        }
}

void ProvideConfortableTemperature::_setItsVehicleOccupant(VehicleOccupant* p_VehicleOccupant) {
    if(itsVehicleOccupant != NULL)
        {
            itsVehicleOccupant->__setItsProvideConfortableTemperature(NULL);
        }
    __setItsVehicleOccupant(p_VehicleOccupant);
}

void ProvideConfortableTemperature::_clearItsVehicleOccupant() {
    NOTIFY_RELATION_CLEARED("itsVehicleOccupant");
    itsVehicleOccupant = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedProvideConfortableTemperature::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Confortable", x2String(myReal->Confortable));
    aomsAttributes->addAttribute("OK", x2String(myReal->OK));
}

void OMAnimatedProvideConfortableTemperature::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsVehicleOccupant", false, true);
    if(myReal->itsVehicleOccupant)
        {
            aomsRelations->ADD_ITEM(myReal->itsVehicleOccupant);
        }
}
//#]

IMPLEMENT_ACTIVITY_META_P(ProvideConfortableTemperature, Model_P_1_Problem_Domain_P_1_Black_Box_P_3_Use_Cases, Model::P_1_Problem_Domain::P_1_Black_Box::P_3_Use_Cases, false, OMAnimatedProvideConfortableTemperature)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/ProvideConfortableTemperature_Simulation/ProvideConfortableTemperature.cpp
*********************************************************************/
