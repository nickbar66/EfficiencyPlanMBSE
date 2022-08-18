/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: block_0_Simulation
	Model Element	: block_0
//!	Generated Date	: Thu, 18, Aug 2022  
	File Path	: DefaultComponent/block_0_Simulation/block_0.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "block_0.h"
//#[ ignore
#define Default_block_0_block_0_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class block_0
//#[ ignore
block_0::Activity_0OfBlock_0::ActionAction_0InActivityActivity_0OfBlock_0::ActionAction_0InActivityActivity_0OfBlock_0(const OMString& id, Activity_0OfBlock_0& activity, block_0& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> block_0::Activity_0OfBlock_0::ActionAction_0InActivityActivity_0OfBlock_0::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAction_0InActivityActivity_0OfBlock_0(iCommand);
}

void block_0::Activity_0OfBlock_0::ActionAction_0InActivityActivity_0OfBlock_0::setICommand(int value) {
    this->iCommand = value;
}

void block_0::Activity_0OfBlock_0::ActionAction_0InActivityActivity_0OfBlock_0::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("iCommand", x2String(iCommand));
}

void block_0::Activity_0OfBlock_0::ActionAction_0InActivityActivity_0OfBlock_0::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAction_0InActivityActivity_0OfBlock_0(iCommand);
}

block_0::Activity_0OfBlock_0::ActionAction_1InActivityActivity_0OfBlock_0::ActionAction_1InActivityActivity_0OfBlock_0(const OMString& id, Activity_0OfBlock_0& activity, block_0& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> block_0::Activity_0OfBlock_0::ActionAction_1InActivityActivity_0OfBlock_0::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAction_1InActivityActivity_0OfBlock_0();
}

void block_0::Activity_0OfBlock_0::ActionAction_1InActivityActivity_0OfBlock_0::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAction_1InActivityActivity_0OfBlock_0();
}

block_0::Activity_0OfBlock_0::ActionActivityfinal_3InActivityActivity_0OfBlock_0::ActionActivityfinal_3InActivityActivity_0OfBlock_0(const OMString& id, Activity_0OfBlock_0& activity, block_0& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> block_0::Activity_0OfBlock_0::ActionActivityfinal_3InActivityActivity_0OfBlock_0::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_3InActivityActivity_0OfBlock_0();
}

block_0::Activity_0OfBlock_0::ActionAccepteventaction_4InActivityActivity_0OfBlock_0::ActionAccepteventaction_4InActivityActivity_0OfBlock_0(const OMString& id, Activity_0OfBlock_0& activity, IOxfEvent::ID eventId, block_0& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> block_0::Activity_0OfBlock_0::ActionAccepteventaction_4InActivityActivity_0OfBlock_0::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAccepteventaction_4InActivityActivity_0OfBlock_0(iCommand);
}

int block_0::Activity_0OfBlock_0::ActionAccepteventaction_4InActivityActivity_0OfBlock_0::getICommand() {
    return iCommand;
}

void block_0::Activity_0OfBlock_0::ActionAccepteventaction_4InActivityActivity_0OfBlock_0::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("iCommand", x2String(iCommand));
}

void block_0::Activity_0OfBlock_0::ActionAccepteventaction_4InActivityActivity_0OfBlock_0::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionAccepteventaction_4InActivityActivity_0OfBlock_0(iCommand);
}

block_0::Activity_0OfBlock_0::DataFlow3InActivityActivity_0OfBlock_0::DataFlow3InActivityActivity_0OfBlock_0(const OMString& id, Activity_0OfBlock_0& context, ActionAccepteventaction_4InActivityActivity_0OfBlock_0& sourceAction, ActionAction_0InActivityActivity_0OfBlock_0& targetAction) : OMDataFlow<int>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void block_0::Activity_0OfBlock_0::DataFlow3InActivityActivity_0OfBlock_0::giveToken() {
    dataTarget->setICommand(dequeueToken());
}

void block_0::Activity_0OfBlock_0::DataFlow3InActivityActivity_0OfBlock_0::takeToken() {
    enqueueToken(dataSource->getICommand());
}

void block_0::Activity_0OfBlock_0::DataFlow3InActivityActivity_0OfBlock_0::serializeTokens(AOMSAttributes& tokens) {
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

block_0::Activity_0OfBlock_0::Activity_0OfBlock_0(block_0& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionAction_0InActivityActivity_0OfBlock_0* varAction_0 = new ActionAction_0InActivityActivity_0OfBlock_0("activity_0:ROOT.action_0", *this, *mContext);
    ActionAction_1InActivityActivity_0OfBlock_0* varAction_1 = new ActionAction_1InActivityActivity_0OfBlock_0("activity_0:ROOT.action_1", *this, *mContext);
    ActionActivityfinal_3InActivityActivity_0OfBlock_0* varActivityfinal_3 = new ActionActivityfinal_3InActivityActivity_0OfBlock_0("activity_0:ROOT.activityfinal_3", *this, *mContext);
    ActionAccepteventaction_4InActivityActivity_0OfBlock_0* varAccepteventaction_4 = new ActionAccepteventaction_4InActivityActivity_0OfBlock_0("activity_0:ROOT.accepteventaction_4", *this, evICommand_Default_id, *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("activity_0:0", *this);
    
    // Setup flows
    new OMControlFlow("activity_0:0", *this, *varInitialNode0, *varAccepteventaction_4);
    new OMControlFlow("activity_0:1", *this, *varAction_0, *varAction_1);
    new OMControlFlow("activity_0:2", *this, *varAction_1, *varActivityfinal_3);
    new DataFlow3InActivityActivity_0OfBlock_0("activity_0:3", *this, *varAccepteventaction_4, *varAction_0);
}
//#]

block_0::block_0() : iCommand(10), iStatus(20) {
    NOTIFY_ACTIVITY_CONSTRUCTOR(block_0, block_0(), 0, Default_block_0_block_0_SERIALIZE);
}

block_0::~block_0() {
    NOTIFY_DESTRUCTOR(~block_0, true);
}

//#[ ignore
OMActivity* block_0::createMainActivity() {
    return new Activity_0OfBlock_0(*this);
}

void* block_0::getMe() {
    return this;
}
//#]

OMList<OMString> block_0::delegatedFilterPassableFlowsFromActionAction_0InActivityActivity_0OfBlock_0(int iCommand) {
    //#[ activity_action activity_0:ROOT.action_0
    OMList<OMString> ans;
    ans.add("activity_0:1");
    return ans;
    //#]
}

void block_0::delegatedInvokeContextMethodFromActionAction_0InActivityActivity_0OfBlock_0(int iCommand) {
    //#[ activity_action activity_0:ROOT.action_0
    iBuf = iCommand + iStatus;
    //#]
}

OMList<OMString> block_0::delegatedFilterPassableFlowsFromActionAction_1InActivityActivity_0OfBlock_0() {
    //#[ activity_action activity_0:ROOT.action_1
    OMList<OMString> ans;
    ans.add("activity_0:2");
    return ans;
    //#]
}

void block_0::delegatedInvokeContextMethodFromActionAction_1InActivityActivity_0OfBlock_0() {
    //#[ activity_action activity_0:ROOT.action_1
    iCommand = iBuf + iStatus*10;
    //#]
}

OMList<OMString> block_0::delegatedFilterPassableFlowsFromActionActivityfinal_3InActivityActivity_0OfBlock_0() {
    //#[ activity_action activity_0:ROOT.activityfinal_3
    OMList<OMString> ans;
    return ans;
    //#]
}

OMList<OMString> block_0::delegatedFilterPassableFlowsFromActionAccepteventaction_4InActivityActivity_0OfBlock_0(int& iCommand) {
    //#[ activity_action activity_0:ROOT.accepteventaction_4
    OMList<OMString> ans;
    ans.add("activity_0:3");
    return ans;
    //#]
}

void block_0::delegatedAcceptEventDataFromActionAccepteventaction_4InActivityActivity_0OfBlock_0(int& iCommand) {
    //#[ activity_action activity_0:ROOT.accepteventaction_4
    //#]
}

int block_0::getIBuf() const {
    return iBuf;
}

void block_0::setIBuf(int p_iBuf) {
    iBuf = p_iBuf;
}

int block_0::getICommand() const {
    return iCommand;
}

void block_0::setICommand(int p_iCommand) {
    iCommand = p_iCommand;
}

int block_0::getIStatus() const {
    return iStatus;
}

void block_0::setIStatus(int p_iStatus) {
    iStatus = p_iStatus;
}

bool block_0::startBehavior() {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedblock_0::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("iCommand", x2String(myReal->iCommand));
    aomsAttributes->addAttribute("iStatus", x2String(myReal->iStatus));
    aomsAttributes->addAttribute("iBuf", x2String(myReal->iBuf));
}
//#]

IMPLEMENT_ACTIVITY_META_P(block_0, Default, Default, false, OMAnimatedblock_0)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/block_0_Simulation/block_0.cpp
*********************************************************************/
