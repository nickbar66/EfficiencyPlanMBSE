/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: block_7_Simulation
	Model Element	: block_7
//!	Generated Date	: Thu, 18, Aug 2022  
	File Path	: DefaultComponent/block_7_Simulation/block_7.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "block_7.h"
//#[ ignore
#define Default_block_7_block_7_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class block_7
//#[ ignore
block_7::Activity_0OfBlock_7::ActionAccepteventaction_0InActivityActivity_0OfBlock_7::ActionAccepteventaction_0InActivityActivity_0OfBlock_7(const OMString& id, Activity_0OfBlock_7& activity, IOxfEvent::ID eventId, block_7& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> block_7::Activity_0OfBlock_7::ActionAccepteventaction_0InActivityActivity_0OfBlock_7::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityActivity_0OfBlock_7(eCommandEvent);
}

evICommand block_7::Activity_0OfBlock_7::ActionAccepteventaction_0InActivityActivity_0OfBlock_7::getECommandEvent() {
    return eCommandEvent;
}

void block_7::Activity_0OfBlock_7::ActionAccepteventaction_0InActivityActivity_0OfBlock_7::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_0InActivityActivity_0OfBlock_7(eCommandEvent);
}

block_7::Activity_0OfBlock_7::ActionAction_1InActivityActivity_0OfBlock_7::ActionAction_1InActivityActivity_0OfBlock_7(const OMString& id, Activity_0OfBlock_7& activity, block_7& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> block_7::Activity_0OfBlock_7::ActionAction_1InActivityActivity_0OfBlock_7::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAction_1InActivityActivity_0OfBlock_7(pin_2);
}

void block_7::Activity_0OfBlock_7::ActionAction_1InActivityActivity_0OfBlock_7::setPin_2(evICommand value) {
    this->pin_2 = value;
}

void block_7::Activity_0OfBlock_7::ActionAction_1InActivityActivity_0OfBlock_7::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAction_1InActivityActivity_0OfBlock_7(pin_2);
}

block_7::Activity_0OfBlock_7::DataFlow0InActivityActivity_0OfBlock_7::DataFlow0InActivityActivity_0OfBlock_7(const OMString& id, Activity_0OfBlock_7& context, ActionAccepteventaction_0InActivityActivity_0OfBlock_7& sourceAction, ActionAction_1InActivityActivity_0OfBlock_7& targetAction) : OMDataFlow<evICommand>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void block_7::Activity_0OfBlock_7::DataFlow0InActivityActivity_0OfBlock_7::giveToken() {
    dataTarget->setPin_2(dequeueToken());
}

void block_7::Activity_0OfBlock_7::DataFlow0InActivityActivity_0OfBlock_7::takeToken() {
    enqueueToken(dataSource->getECommandEvent());
}

void block_7::Activity_0OfBlock_7::DataFlow0InActivityActivity_0OfBlock_7::serializeTokens(AOMSAttributes& tokens) {
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

block_7::Activity_0OfBlock_7::Activity_0OfBlock_7(block_7& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionAccepteventaction_0InActivityActivity_0OfBlock_7* varAccepteventaction_0 = new ActionAccepteventaction_0InActivityActivity_0OfBlock_7("activity_0:ROOT.accepteventaction_0", *this, evICommand_Default_id, *mContext);
    ActionAction_1InActivityActivity_0OfBlock_7* varAction_1 = new ActionAction_1InActivityActivity_0OfBlock_7("activity_0:ROOT.action_1", *this, *mContext);
    
    // Setup flows
    new DataFlow0InActivityActivity_0OfBlock_7("activity_0:0", *this, *varAccepteventaction_0, *varAction_1);
}
//#]

block_7::block_7() {
    NOTIFY_ACTIVITY_CONSTRUCTOR(block_7, block_7(), 0, Default_block_7_block_7_SERIALIZE);
}

block_7::~block_7() {
    NOTIFY_DESTRUCTOR(~block_7, true);
}

//#[ ignore
OMActivity* block_7::createMainActivity() {
    return new Activity_0OfBlock_7(*this);
}

void* block_7::getMe() {
    return this;
}
//#]

OMList<OMString> block_7::delegatedFilterPassableFlowsFromActionAccepteventaction_0InActivityActivity_0OfBlock_7(evICommand& eCommandEvent) {
    //#[ activity_action activity_0:ROOT.accepteventaction_0
    OMList<OMString> ans;
    ans.add("activity_0:0");
    return ans;
    //#]
}

void block_7::delegatedAcceptEventDataFromActionAccepteventaction_0InActivityActivity_0OfBlock_7(evICommand& eCommandEvent) {
    //#[ activity_action activity_0:ROOT.accepteventaction_0
    eCommandEvent = ((evICommand*)getCurrentEvent())->eCommandEvent;
    //#]
}

OMList<OMString> block_7::delegatedFilterPassableFlowsFromActionAction_1InActivityActivity_0OfBlock_7(evICommand pin_2) {
    //#[ activity_action activity_0:ROOT.action_1
    OMList<OMString> ans;
    return ans;
    //#]
}

void block_7::delegatedInvokeContextMethodFromActionAction_1InActivityActivity_0OfBlock_7(evICommand pin_2) {
    //#[ activity_action activity_0:ROOT.action_1
    //#]
}

bool block_7::startBehavior() {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_ACTIVITY_META_P(block_7, Default, Default, false, OMAnimatedblock_7)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/block_7_Simulation/block_7.cpp
*********************************************************************/
