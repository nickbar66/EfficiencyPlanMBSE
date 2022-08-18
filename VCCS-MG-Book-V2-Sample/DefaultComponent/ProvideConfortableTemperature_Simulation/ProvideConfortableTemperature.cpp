/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: ProvideConfortableTemperature_Simulation
	Model Element	: ProvideConfortableTemperature
//!	Generated Date	: Thu, 18, Aug 2022  
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
    return mContext->delegatedFilterPassableFlowsFromActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(eCommand, Status);
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::setECommand(eCommandVT value) {
    this->eCommand = value;
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::setStatus(int value) {
    this->Status = value;
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(2);
    tokens.addAttribute("eCommand", x2String(eCommand));
    tokens.addAttribute("Status", x2String(Status));
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(eCommand, Status);
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

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionActivityfinal_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionActivityfinal_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, ProvideConfortableTemperature& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionActivityfinal_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature();
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& activity, IOxfEvent::ID eventId, ProvideConfortableTemperature& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(eCommand, Status);
}

eCommandVT ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::getECommand() {
    return eCommand;
}

int ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::getStatus() {
    return Status;
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(2);
    tokens.addAttribute("eCommand", x2String(eCommand));
    tokens.addAttribute("Status", x2String(Status));
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(eCommand, Status);
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

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::DataFlow18InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::DataFlow18InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& context, ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature& sourceAction, ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature& targetAction) : OMDataFlow<eCommandVT>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::DataFlow18InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::giveToken() {
    dataTarget->setECommand(dequeueToken());
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::DataFlow18InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::takeToken() {
    enqueueToken(dataSource->getECommand());
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::DataFlow18InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::serializeTokens(AOMSAttributes& tokens) {
    if(getTokenCount() > 0)
    {
    	tokens.setCount(getTokenCount());
    	for(int i = 0 ; i < getTokenCount() ; i++)
    	{
    		char idx[10];
    		OMitoa(i, idx, 10);
    		tokens.addAttribute(idx, x2String(mTokens.getAt(i)));
    	}
    }
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::DataFlow19InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::DataFlow19InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(const OMString& id, ProvideConfortableTemperatureOfProvideConfortableTemperature& context, ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature& sourceAction, ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature& targetAction) : OMDataFlow<int>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::DataFlow19InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::giveToken() {
    dataTarget->setStatus(dequeueToken());
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::DataFlow19InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::takeToken() {
    enqueueToken(dataSource->getStatus());
}

void ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::DataFlow19InActivityProvideConfortableTemperatureOfProvideConfortableTemperature::serializeTokens(AOMSAttributes& tokens) {
    if(getTokenCount() > 0)
    {
    	tokens.setCount(getTokenCount());
    	for(int i = 0 ; i < getTokenCount() ; i++)
    	{
    		char idx[10];
    		OMitoa(i, idx, 10);
    		tokens.addAttribute(idx, x2String(mTokens.getAt(i)));
    	}
    }
}

ProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature::ProvideConfortableTemperatureOfProvideConfortableTemperature(ProvideConfortableTemperature& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varTurnOnClimateControl = new ActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.TurnOnClimateControl", *this, *mContext);
    ActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varCheckSystem = new ActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.CheckSystem", *this, *mContext);
    ActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varStartClimateControl = new ActionStartClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.StartClimateControl", *this, *mContext);
    ActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varStopClimateControl = new ActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.StopClimateControl", *this, *mContext);
    ActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varMeasureTemperature = new ActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.MeasureTemperature", *this, *mContext);
    ActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varEvaluateControl = new ActionEvaluateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.EvaluateControl", *this, *mContext);
    ActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varDisplayTemperature = new ActionDisplayTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.DisplayTemperature", *this, *mContext);
    ActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varSetTemperature = new ActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.SetTemperature", *this, *mContext);
    ActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varProvideAir = new ActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.ProvideAir", *this, *mContext);
    ActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varReachDesiredTemperature = new ActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.ReachDesiredTemperature", *this, *mContext);
    ActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varGetConfortableAir = new ActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.GetConfortableAir", *this, *mContext);
    ActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varEnjoyTemperaturee = new ActionEnjoyTemperatureeInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.EnjoyTemperaturee", *this, *mContext);
    ActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varTurnOffClimateControl = new ActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.TurnOffClimateControl", *this, *mContext);
    ActionActivityfinal_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varActivityfinal_31 = new ActionActivityfinal_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.activityfinal_31", *this, *mContext);
    ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varAccepteventaction_34 = new ActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.accepteventaction_34", *this, evUserCommand_P_3_Exchange_Items_P_1_Problem_Domain_Model_id, *mContext);
    ControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varCheckSystemState = new ControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.CheckSystemState", *this, *mContext);
    ControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varMergenode_20 = new ControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.mergenode_20", *this, *mContext);
    ControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varMergenode_31 = new ControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.mergenode_31", *this, *mContext);
    ControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature* varEvalTemp = new ControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:ROOT.EvalTemp", *this, *mContext);
    OMInitialAction* varInitialNode20 = new OMInitialAction("ProvideConfortableTemperature:20", *this);
    
    // Setup flows
    new OMControlFlow("ProvideConfortableTemperature:0", *this, *varCheckSystemState, *varStartClimateControl);
    new OMControlFlow("ProvideConfortableTemperature:1", *this, *varCheckSystemState, *varMergenode_20);
    new OMControlFlow("ProvideConfortableTemperature:2", *this, *varStopClimateControl, *varMergenode_20);
    new OMControlFlow("ProvideConfortableTemperature:3", *this, *varStartClimateControl, *varMergenode_31);
    new OMControlFlow("ProvideConfortableTemperature:4", *this, *varMergenode_31, *varMeasureTemperature);
    new OMControlFlow("ProvideConfortableTemperature:5", *this, *varDisplayTemperature, *varEvaluateControl);
    new OMControlFlow("ProvideConfortableTemperature:6", *this, *varMeasureTemperature, *varDisplayTemperature);
    new OMControlFlow("ProvideConfortableTemperature:7", *this, *varEvalTemp, *varSetTemperature);
    new OMControlFlow("ProvideConfortableTemperature:8", *this, *varSetTemperature, *varProvideAir);
    new OMControlFlow("ProvideConfortableTemperature:9", *this, *varProvideAir, *varReachDesiredTemperature);
    new OMControlFlow("ProvideConfortableTemperature:10", *this, *varReachDesiredTemperature, *varGetConfortableAir);
    new OMControlFlow("ProvideConfortableTemperature:11", *this, *varGetConfortableAir, *varMergenode_31);
    new OMControlFlow("ProvideConfortableTemperature:12", *this, *varEvalTemp, *varEnjoyTemperaturee);
    new OMControlFlow("ProvideConfortableTemperature:13", *this, *varEnjoyTemperaturee, *varTurnOffClimateControl);
    new OMControlFlow("ProvideConfortableTemperature:14", *this, *varTurnOffClimateControl, *varStopClimateControl);
    new OMControlFlow("ProvideConfortableTemperature:15", *this, *varCheckSystem, *varCheckSystemState);
    new OMControlFlow("ProvideConfortableTemperature:16", *this, *varEvaluateControl, *varEvalTemp);
    new OMControlFlow("ProvideConfortableTemperature:17", *this, *varTurnOnClimateControl, *varCheckSystem);
    new DataFlow18InActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:18", *this, *varAccepteventaction_34, *varTurnOnClimateControl);
    new DataFlow19InActivityProvideConfortableTemperatureOfProvideConfortableTemperature("ProvideConfortableTemperature:19", *this, *varAccepteventaction_34, *varTurnOnClimateControl);
    new OMControlFlow("ProvideConfortableTemperature:20", *this, *varInitialNode20, *varTurnOnClimateControl);
    new OMControlFlow("ProvideConfortableTemperature:21", *this, *varMergenode_20, *varActivityfinal_31);
}
//#]

ProvideConfortableTemperature::ProvideConfortableTemperature() : Status(10), eConfortable(OFF) {
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

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(eCommandVT eCommand, int Status) {
    //#[ activity_action ProvideConfortableTemperature:ROOT.TurnOnClimateControl
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:17");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionTurnOnClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature(eCommandVT eCommand, int Status) {
    //#[ activity_action ProvideConfortableTemperature:ROOT.TurnOnClimateControl
    OK=Status;
    eConfortable=eCommand;
    
    
    
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionCheckSystemInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.CheckSystem
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:15");
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
    ans.add("ProvideConfortableTemperature:3");
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
    ans.add("ProvideConfortableTemperature:2");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionStopClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.StopClimateControl
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionMeasureTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.MeasureTemperature
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:6");
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
    ans.add("ProvideConfortableTemperature:16");
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
    ans.add("ProvideConfortableTemperature:5");
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
    ans.add("ProvideConfortableTemperature:8");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionSetTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.SetTemperature
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionProvideAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.ProvideAir
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:9");
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
    ans.add("ProvideConfortableTemperature:10");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionReachDesiredTemperatureInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.ReachDesiredTemperature
    eConfortable=ON;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionGetConfortableAirInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.GetConfortableAir
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:11");
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
    ans.add("ProvideConfortableTemperature:13");
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
    ans.add("ProvideConfortableTemperature:14");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedInvokeContextMethodFromActionTurnOffClimateControlInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.TurnOffClimateControl
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionActivityfinal_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_action ProvideConfortableTemperature:ROOT.activityfinal_31
    OMList<OMString> ans;
    return ans;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(eCommandVT& eCommand, int& Status) {
    //#[ activity_action ProvideConfortableTemperature:ROOT.accepteventaction_34
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:18");
    ans.add("ProvideConfortableTemperature:19");
    return ans;
    //#]
}

void ProvideConfortableTemperature::delegatedAcceptEventDataFromActionAccepteventaction_34InActivityProvideConfortableTemperatureOfProvideConfortableTemperature(eCommandVT& eCommand, int& Status) {
    //#[ activity_action ProvideConfortableTemperature:ROOT.accepteventaction_34
    eCommand = ((evUserCommand*)getCurrentEvent())->eCommand;
    Status = ((evUserCommand*)getCurrentEvent())->Status;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromControlCheckSystemStateInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_control ProvideConfortableTemperature:ROOT.CheckSystemState
    OMList<OMString> ans;
    if (OK) { ans.add("ProvideConfortableTemperature:0"); }
    else { ans.add("ProvideConfortableTemperature:1"); }
    return ans;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromControlMergenode_20InActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_control ProvideConfortableTemperature:ROOT.mergenode_20
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:21");
    return ans;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromControlMergenode_31InActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_control ProvideConfortableTemperature:ROOT.mergenode_31
    OMList<OMString> ans;
    ans.add("ProvideConfortableTemperature:4");
    return ans;
    //#]
}

OMList<OMString> ProvideConfortableTemperature::delegatedFilterPassableFlowsFromControlEvalTempInActivityProvideConfortableTemperatureOfProvideConfortableTemperature() {
    //#[ activity_control ProvideConfortableTemperature:ROOT.EvalTemp
    OMList<OMString> ans;
    if (eConfortable) { ans.add("ProvideConfortableTemperature:12"); }
    else { ans.add("ProvideConfortableTemperature:7"); }
    return ans;
    //#]
}

int ProvideConfortableTemperature::getOK() const {
    return OK;
}

void ProvideConfortableTemperature::setOK(int p_OK) {
    OK = p_OK;
}

int ProvideConfortableTemperature::getStatus() const {
    return Status;
}

void ProvideConfortableTemperature::setStatus(int p_Status) {
    Status = p_Status;
}

evUserCommand* ProvideConfortableTemperature::getUserCommand() const {
    return (evUserCommand*) &UserCommand;
}

eCommandVT ProvideConfortableTemperature::getEConfortable() const {
    return eConfortable;
}

void ProvideConfortableTemperature::setEConfortable(eCommandVT p_eConfortable) {
    eConfortable = p_eConfortable;
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
    aomsAttributes->addAttribute("eConfortable", x2String((int)myReal->eConfortable));
    aomsAttributes->addAttribute("OK", x2String(myReal->OK));
    aomsAttributes->addAttribute("UserCommand", UNKNOWN2STRING(myReal->UserCommand));
    aomsAttributes->addAttribute("Status", x2String(myReal->Status));
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
