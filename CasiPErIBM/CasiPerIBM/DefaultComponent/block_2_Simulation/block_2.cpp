/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: block_2_Simulation
	Model Element	: block_2
//!	Generated Date	: Thu, 18, Aug 2022  
	File Path	: DefaultComponent/block_2_Simulation/block_2.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "block_2.h"
//#[ ignore
#define Default_block_2_block_2_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class block_2
//#[ ignore
block_2::Activity_0OfBlock_2::ActionAction_0InActivityActivity_0OfBlock_2::ActionAction_0InActivityActivity_0OfBlock_2(const OMString& id, Activity_0OfBlock_2& activity, block_2& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> block_2::Activity_0OfBlock_2::ActionAction_0InActivityActivity_0OfBlock_2::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAction_0InActivityActivity_0OfBlock_2(eCommandEvent, CommandEvent);
}

void block_2::Activity_0OfBlock_2::ActionAction_0InActivityActivity_0OfBlock_2::setECommandEvent(evICommand value) {
    this->eCommandEvent = value;
}

eCommandVT block_2::Activity_0OfBlock_2::ActionAction_0InActivityActivity_0OfBlock_2::getCommandEvent() {
    return CommandEvent;
}

void block_2::Activity_0OfBlock_2::ActionAction_0InActivityActivity_0OfBlock_2::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(2);
    tokens.addAttribute("CommandEvent", eCommandVT2String(CommandEvent));
}

void block_2::Activity_0OfBlock_2::ActionAction_0InActivityActivity_0OfBlock_2::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAction_0InActivityActivity_0OfBlock_2(eCommandEvent, CommandEvent);
}

block_2::Activity_0OfBlock_2::ActionAction_1InActivityActivity_0OfBlock_2::ActionAction_1InActivityActivity_0OfBlock_2(const OMString& id, Activity_0OfBlock_2& activity, block_2& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> block_2::Activity_0OfBlock_2::ActionAction_1InActivityActivity_0OfBlock_2::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAction_1InActivityActivity_0OfBlock_2(eCommandEvent);
}

void block_2::Activity_0OfBlock_2::ActionAction_1InActivityActivity_0OfBlock_2::setECommandEvent(eCommandVT value) {
    this->eCommandEvent = value;
}

void block_2::Activity_0OfBlock_2::ActionAction_1InActivityActivity_0OfBlock_2::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("eCommandEvent", eCommandVT2String(eCommandEvent));
}

void block_2::Activity_0OfBlock_2::ActionAction_1InActivityActivity_0OfBlock_2::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAction_1InActivityActivity_0OfBlock_2(eCommandEvent);
}

block_2::Activity_0OfBlock_2::ActionAccepteventaction_2InActivityActivity_0OfBlock_2::ActionAccepteventaction_2InActivityActivity_0OfBlock_2(const OMString& id, Activity_0OfBlock_2& activity, IOxfEvent::ID eventId, block_2& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> block_2::Activity_0OfBlock_2::ActionAccepteventaction_2InActivityActivity_0OfBlock_2::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_2InActivityActivity_0OfBlock_2(eCommandEvent);
}

evICommand block_2::Activity_0OfBlock_2::ActionAccepteventaction_2InActivityActivity_0OfBlock_2::getECommandEvent() {
    return eCommandEvent;
}

void block_2::Activity_0OfBlock_2::ActionAccepteventaction_2InActivityActivity_0OfBlock_2::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_2InActivityActivity_0OfBlock_2(eCommandEvent);
}

block_2::Activity_0OfBlock_2::ActionActivityfinal_4InActivityActivity_0OfBlock_2::ActionActivityfinal_4InActivityActivity_0OfBlock_2(const OMString& id, Activity_0OfBlock_2& activity, block_2& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> block_2::Activity_0OfBlock_2::ActionActivityfinal_4InActivityActivity_0OfBlock_2::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_4InActivityActivity_0OfBlock_2();
}

block_2::Activity_0OfBlock_2::DataFlow0InActivityActivity_0OfBlock_2::DataFlow0InActivityActivity_0OfBlock_2(const OMString& id, Activity_0OfBlock_2& context, ActionAccepteventaction_2InActivityActivity_0OfBlock_2& sourceAction, ActionAction_0InActivityActivity_0OfBlock_2& targetAction) : OMDataFlow<evICommand>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void block_2::Activity_0OfBlock_2::DataFlow0InActivityActivity_0OfBlock_2::giveToken() {
    dataTarget->setECommandEvent(dequeueToken());
}

void block_2::Activity_0OfBlock_2::DataFlow0InActivityActivity_0OfBlock_2::takeToken() {
    enqueueToken(dataSource->getECommandEvent());
}

void block_2::Activity_0OfBlock_2::DataFlow0InActivityActivity_0OfBlock_2::serializeTokens(AOMSAttributes& tokens) {
    if(getTokenCount() > 0)
    {
    	tokens.setCount(getTokenCount());
    	for(int i = 0 ; i < getTokenCount() ; i++)
    	{
    		char idx[10];
    		OMitoa(i, idx, 10);
    		tokens.addAttribute(idx, (mTokens.getAt(i)));
    	}
    }
}

block_2::Activity_0OfBlock_2::DataFlow2InActivityActivity_0OfBlock_2::DataFlow2InActivityActivity_0OfBlock_2(const OMString& id, Activity_0OfBlock_2& context, ActionAction_0InActivityActivity_0OfBlock_2& sourceAction, ActionAction_1InActivityActivity_0OfBlock_2& targetAction) : OMDataFlow<eCommandVT>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void block_2::Activity_0OfBlock_2::DataFlow2InActivityActivity_0OfBlock_2::giveToken() {
    dataTarget->setECommandEvent(dequeueToken());
}

void block_2::Activity_0OfBlock_2::DataFlow2InActivityActivity_0OfBlock_2::takeToken() {
    enqueueToken(dataSource->getCommandEvent());
}

void block_2::Activity_0OfBlock_2::DataFlow2InActivityActivity_0OfBlock_2::serializeTokens(AOMSAttributes& tokens) {
    if(getTokenCount() > 0)
    {
    	tokens.setCount(getTokenCount());
    	for(int i = 0 ; i < getTokenCount() ; i++)
    	{
    		char idx[10];
    		OMitoa(i, idx, 10);
    		tokens.addAttribute(idx, eCommandVT2String(mTokens.getAt(i)));
    	}
    }
}

block_2::Activity_0OfBlock_2::Activity_0OfBlock_2(block_2& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionAction_0InActivityActivity_0OfBlock_2* varAction_0 = new ActionAction_0InActivityActivity_0OfBlock_2("activity_0:ROOT.action_0", *this, *mContext);
    ActionAction_1InActivityActivity_0OfBlock_2* varAction_1 = new ActionAction_1InActivityActivity_0OfBlock_2("activity_0:ROOT.action_1", *this, *mContext);
    ActionAccepteventaction_2InActivityActivity_0OfBlock_2* varAccepteventaction_2 = new ActionAccepteventaction_2InActivityActivity_0OfBlock_2("activity_0:ROOT.accepteventaction_2", *this, evICommand_Default_id, *mContext);
    ActionActivityfinal_4InActivityActivity_0OfBlock_2* varActivityfinal_4 = new ActionActivityfinal_4InActivityActivity_0OfBlock_2("activity_0:ROOT.activityfinal_4", *this, *mContext);
    
    // Setup flows
    new DataFlow0InActivityActivity_0OfBlock_2("activity_0:0", *this, *varAccepteventaction_2, *varAction_0);
    new OMControlFlow("activity_0:1", *this, *varAction_1, *varActivityfinal_4);
    new DataFlow2InActivityActivity_0OfBlock_2("activity_0:2", *this, *varAction_0, *varAction_1);
}
//#]

block_2::block_2() : eCommand(OFF) {
    NOTIFY_ACTIVITY_CONSTRUCTOR(block_2, block_2(), 0, Default_block_2_block_2_SERIALIZE);
}

block_2::~block_2() {
    NOTIFY_DESTRUCTOR(~block_2, true);
}

//#[ ignore
OMActivity* block_2::createMainActivity() {
    return new Activity_0OfBlock_2(*this);
}

void* block_2::getMe() {
    return this;
}
//#]

OMList<OMString> block_2::delegatedFilterPassableFlowsFromActionAction_0InActivityActivity_0OfBlock_2(evICommand eCommandEvent, eCommandVT& CommandEvent) {
    //#[ activity_action activity_0:ROOT.action_0
    OMList<OMString> ans;
    ans.add("activity_0:2");
    return ans;
    //#]
}

void block_2::delegatedInvokeContextMethodFromActionAction_0InActivityActivity_0OfBlock_2(evICommand eCommandEvent, eCommandVT& CommandEvent) {
    //#[ activity_action activity_0:ROOT.action_0
    eCommand=eCommand;
    
    
    //#]
}

OMList<OMString> block_2::delegatedFilterPassableFlowsFromActionAction_1InActivityActivity_0OfBlock_2(eCommandVT eCommandEvent) {
    //#[ activity_action activity_0:ROOT.action_1
    OMList<OMString> ans;
    ans.add("activity_0:1");
    return ans;
    //#]
}

void block_2::delegatedInvokeContextMethodFromActionAction_1InActivityActivity_0OfBlock_2(eCommandVT eCommandEvent) {
    //#[ activity_action activity_0:ROOT.action_1
    eCommand= eCommand;
    //#]
}

OMList<OMString> block_2::delegatedFilterPassableFlowsFromActionAccepteventaction_2InActivityActivity_0OfBlock_2(evICommand& eCommandEvent) {
    //#[ activity_action activity_0:ROOT.accepteventaction_2
    OMList<OMString> ans;
    ans.add("activity_0:0");
    return ans;
    //#]
}

void block_2::delegatedAcceptEventDataFromActionAccepteventaction_2InActivityActivity_0OfBlock_2(evICommand& eCommandEvent) {
    //#[ activity_action activity_0:ROOT.accepteventaction_2
    eCommandEvent = ((evICommand*)getCurrentEvent())->eCommandEvent;
    //#]
}

OMList<OMString> block_2::delegatedFilterPassableFlowsFromActionActivityfinal_4InActivityActivity_0OfBlock_2() {
    //#[ activity_action activity_0:ROOT.activityfinal_4
    OMList<OMString> ans;
    return ans;
    //#]
}

eCommandVT block_2::getECommand() const {
    return eCommand;
}

void block_2::setECommand(eCommandVT p_eCommand) {
    eCommand = p_eCommand;
}

evICommand* block_2::getEvCommand() const {
    return (evICommand*) &evCommand;
}

bool block_2::startBehavior() {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedblock_2::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("eCommand", eCommandVT2String(myReal->eCommand));
    aomsAttributes->addAttribute("evCommand", UNKNOWN2STRING(myReal->evCommand));
}
//#]

IMPLEMENT_ACTIVITY_META_P(block_2, Default, Default, false, OMAnimatedblock_2)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/block_2_Simulation/block_2.cpp
*********************************************************************/
