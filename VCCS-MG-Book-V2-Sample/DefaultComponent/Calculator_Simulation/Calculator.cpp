/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: Calculator_Simulation
	Model Element	: Calculator
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/Calculator_Simulation/Calculator.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Calculator.h"
//#[ ignore
#define TestSimulazioni_Calculator_Calculator_SERIALIZE OM_NO_OP
//#]

//## package TestSimulazioni

//## class Calculator
//#[ ignore
Calculator::Activity_0OfCalculator::ActionGetXInActivityActivity_0OfCalculator::ActionGetXInActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& activity, Calculator& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> Calculator::Activity_0OfCalculator::ActionGetXInActivityActivity_0OfCalculator::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionGetXInActivityActivity_0OfCalculator(a);
}

int Calculator::Activity_0OfCalculator::ActionGetXInActivityActivity_0OfCalculator::getA() {
    return a;
}

void Calculator::Activity_0OfCalculator::ActionGetXInActivityActivity_0OfCalculator::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("a", x2String(a));
}

void Calculator::Activity_0OfCalculator::ActionGetXInActivityActivity_0OfCalculator::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionGetXInActivityActivity_0OfCalculator(a);
}

Calculator::Activity_0OfCalculator::ActionGetYInActivityActivity_0OfCalculator::ActionGetYInActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& activity, Calculator& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> Calculator::Activity_0OfCalculator::ActionGetYInActivityActivity_0OfCalculator::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionGetYInActivityActivity_0OfCalculator(b);
}

int Calculator::Activity_0OfCalculator::ActionGetYInActivityActivity_0OfCalculator::getB() {
    return b;
}

void Calculator::Activity_0OfCalculator::ActionGetYInActivityActivity_0OfCalculator::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("b", x2String(b));
}

void Calculator::Activity_0OfCalculator::ActionGetYInActivityActivity_0OfCalculator::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionGetYInActivityActivity_0OfCalculator(b);
}

Calculator::Activity_0OfCalculator::ActionAddingInActivityActivity_0OfCalculator::ActionAddingInActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& activity, Calculator& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> Calculator::Activity_0OfCalculator::ActionAddingInActivityActivity_0OfCalculator::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAddingInActivityActivity_0OfCalculator(c, a, b);
}

int Calculator::Activity_0OfCalculator::ActionAddingInActivityActivity_0OfCalculator::getC() {
    return c;
}

void Calculator::Activity_0OfCalculator::ActionAddingInActivityActivity_0OfCalculator::setA(int value) {
    this->a = value;
}

void Calculator::Activity_0OfCalculator::ActionAddingInActivityActivity_0OfCalculator::setB(int value) {
    this->b = value;
}

void Calculator::Activity_0OfCalculator::ActionAddingInActivityActivity_0OfCalculator::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(3);
    tokens.addAttribute("c", x2String(c));
    tokens.addAttribute("a", x2String(a));
    tokens.addAttribute("b", x2String(b));
}

void Calculator::Activity_0OfCalculator::ActionAddingInActivityActivity_0OfCalculator::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAddingInActivityActivity_0OfCalculator(c, a, b);
}

Calculator::Activity_0OfCalculator::ActionWriteZInActivityActivity_0OfCalculator::ActionWriteZInActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& activity, Calculator& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> Calculator::Activity_0OfCalculator::ActionWriteZInActivityActivity_0OfCalculator::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionWriteZInActivityActivity_0OfCalculator(c);
}

void Calculator::Activity_0OfCalculator::ActionWriteZInActivityActivity_0OfCalculator::setC(int value) {
    this->c = value;
}

void Calculator::Activity_0OfCalculator::ActionWriteZInActivityActivity_0OfCalculator::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("c", x2String(c));
}

void Calculator::Activity_0OfCalculator::ActionWriteZInActivityActivity_0OfCalculator::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionWriteZInActivityActivity_0OfCalculator(c);
}

Calculator::Activity_0OfCalculator::ActionActivityfinal_7InActivityActivity_0OfCalculator::ActionActivityfinal_7InActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& activity, Calculator& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> Calculator::Activity_0OfCalculator::ActionActivityfinal_7InActivityActivity_0OfCalculator::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_7InActivityActivity_0OfCalculator();
}

Calculator::Activity_0OfCalculator::ControlFork_5InActivityActivity_0OfCalculator::ControlFork_5InActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& activity, Calculator& context) : OMForkNode(id, activity), mContext(&context) {
}

OMList<OMString> Calculator::Activity_0OfCalculator::ControlFork_5InActivityActivity_0OfCalculator::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromControlFork_5InActivityActivity_0OfCalculator();
}

Calculator::Activity_0OfCalculator::DataFlow2InActivityActivity_0OfCalculator::DataFlow2InActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& context, ActionGetXInActivityActivity_0OfCalculator& sourceAction, ActionAddingInActivityActivity_0OfCalculator& targetAction) : OMDataFlow<int>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void Calculator::Activity_0OfCalculator::DataFlow2InActivityActivity_0OfCalculator::giveToken() {
    dataTarget->setA(dequeueToken());
}

void Calculator::Activity_0OfCalculator::DataFlow2InActivityActivity_0OfCalculator::takeToken() {
    enqueueToken(dataSource->getA());
}

void Calculator::Activity_0OfCalculator::DataFlow2InActivityActivity_0OfCalculator::serializeTokens(AOMSAttributes& tokens) {
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

Calculator::Activity_0OfCalculator::DataFlow3InActivityActivity_0OfCalculator::DataFlow3InActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& context, ActionGetYInActivityActivity_0OfCalculator& sourceAction, ActionAddingInActivityActivity_0OfCalculator& targetAction) : OMDataFlow<int>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void Calculator::Activity_0OfCalculator::DataFlow3InActivityActivity_0OfCalculator::giveToken() {
    dataTarget->setB(dequeueToken());
}

void Calculator::Activity_0OfCalculator::DataFlow3InActivityActivity_0OfCalculator::takeToken() {
    enqueueToken(dataSource->getB());
}

void Calculator::Activity_0OfCalculator::DataFlow3InActivityActivity_0OfCalculator::serializeTokens(AOMSAttributes& tokens) {
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

Calculator::Activity_0OfCalculator::DataFlow5InActivityActivity_0OfCalculator::DataFlow5InActivityActivity_0OfCalculator(const OMString& id, Activity_0OfCalculator& context, ActionAddingInActivityActivity_0OfCalculator& sourceAction, ActionWriteZInActivityActivity_0OfCalculator& targetAction) : OMDataFlow<int>(id, context, sourceAction, targetAction), dataSource(&sourceAction), dataTarget(&targetAction) {
}

void Calculator::Activity_0OfCalculator::DataFlow5InActivityActivity_0OfCalculator::giveToken() {
    dataTarget->setC(dequeueToken());
}

void Calculator::Activity_0OfCalculator::DataFlow5InActivityActivity_0OfCalculator::takeToken() {
    enqueueToken(dataSource->getC());
}

void Calculator::Activity_0OfCalculator::DataFlow5InActivityActivity_0OfCalculator::serializeTokens(AOMSAttributes& tokens) {
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

Calculator::Activity_0OfCalculator::Activity_0OfCalculator(Calculator& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionGetXInActivityActivity_0OfCalculator* varGetX = new ActionGetXInActivityActivity_0OfCalculator("activity_0:ROOT.GetX", *this, *mContext);
    ActionGetYInActivityActivity_0OfCalculator* varGetY = new ActionGetYInActivityActivity_0OfCalculator("activity_0:ROOT.GetY", *this, *mContext);
    ActionAddingInActivityActivity_0OfCalculator* varAdding = new ActionAddingInActivityActivity_0OfCalculator("activity_0:ROOT.adding", *this, *mContext);
    ActionWriteZInActivityActivity_0OfCalculator* varWriteZ = new ActionWriteZInActivityActivity_0OfCalculator("activity_0:ROOT.WriteZ", *this, *mContext);
    ActionActivityfinal_7InActivityActivity_0OfCalculator* varActivityfinal_7 = new ActionActivityfinal_7InActivityActivity_0OfCalculator("activity_0:ROOT.activityfinal_7", *this, *mContext);
    ControlFork_5InActivityActivity_0OfCalculator* varFork_5 = new ControlFork_5InActivityActivity_0OfCalculator("activity_0:ROOT.fork_5", *this, *mContext);
    OMInitialAction* varInitialNode6 = new OMInitialAction("activity_0:6", *this);
    
    // Setup flows
    new OMControlFlow("activity_0:0", *this, *varFork_5, *varGetX);
    new OMControlFlow("activity_0:1", *this, *varFork_5, *varGetY);
    new DataFlow2InActivityActivity_0OfCalculator("activity_0:2", *this, *varGetX, *varAdding);
    new DataFlow3InActivityActivity_0OfCalculator("activity_0:3", *this, *varGetY, *varAdding);
    new OMControlFlow("activity_0:4", *this, *varWriteZ, *varActivityfinal_7);
    new DataFlow5InActivityActivity_0OfCalculator("activity_0:5", *this, *varAdding, *varWriteZ);
    new OMControlFlow("activity_0:6", *this, *varInitialNode6, *varFork_5);
}
//#]

Calculator::Calculator() : X(7), Y(5), Z(0) {
    NOTIFY_ACTIVITY_CONSTRUCTOR(Calculator, Calculator(), 0, TestSimulazioni_Calculator_Calculator_SERIALIZE);
}

Calculator::~Calculator() {
    NOTIFY_DESTRUCTOR(~Calculator, true);
}

//#[ ignore
OMActivity* Calculator::createMainActivity() {
    return new Activity_0OfCalculator(*this);
}

void* Calculator::getMe() {
    return this;
}
//#]

OMList<OMString> Calculator::delegatedFilterPassableFlowsFromActionGetXInActivityActivity_0OfCalculator(int& a) {
    //#[ activity_action activity_0:ROOT.GetX
    OMList<OMString> ans;
    ans.add("activity_0:2");
    return ans;
    //#]
}

void Calculator::delegatedInvokeContextMethodFromActionGetXInActivityActivity_0OfCalculator(int& a) {
    //#[ activity_action activity_0:ROOT.GetX
    a=getX();
    //#]
}

OMList<OMString> Calculator::delegatedFilterPassableFlowsFromActionGetYInActivityActivity_0OfCalculator(int& b) {
    //#[ activity_action activity_0:ROOT.GetY
    OMList<OMString> ans;
    ans.add("activity_0:3");
    return ans;
    //#]
}

void Calculator::delegatedInvokeContextMethodFromActionGetYInActivityActivity_0OfCalculator(int& b) {
    //#[ activity_action activity_0:ROOT.GetY
    b=getY();
    //#]
}

OMList<OMString> Calculator::delegatedFilterPassableFlowsFromActionAddingInActivityActivity_0OfCalculator(int& c, int a, int b) {
    //#[ activity_action activity_0:ROOT.adding
    OMList<OMString> ans;
    ans.add("activity_0:5");
    return ans;
    //#]
}

void Calculator::delegatedInvokeContextMethodFromActionAddingInActivityActivity_0OfCalculator(int& c, int a, int b) {
    //#[ activity_action activity_0:ROOT.adding
    c=a+b;
    //#]
}

OMList<OMString> Calculator::delegatedFilterPassableFlowsFromActionWriteZInActivityActivity_0OfCalculator(int c) {
    //#[ activity_action activity_0:ROOT.WriteZ
    OMList<OMString> ans;
    ans.add("activity_0:4");
    return ans;
    //#]
}

void Calculator::delegatedInvokeContextMethodFromActionWriteZInActivityActivity_0OfCalculator(int c) {
    //#[ activity_action activity_0:ROOT.WriteZ
    setZ(c);
    
    //#]
}

OMList<OMString> Calculator::delegatedFilterPassableFlowsFromActionActivityfinal_7InActivityActivity_0OfCalculator() {
    //#[ activity_action activity_0:ROOT.activityfinal_7
    OMList<OMString> ans;
    return ans;
    //#]
}

OMList<OMString> Calculator::delegatedFilterPassableFlowsFromControlFork_5InActivityActivity_0OfCalculator() {
    //#[ activity_control activity_0:ROOT.fork_5
    OMList<OMString> ans;
    ans.add("activity_0:0");
    ans.add("activity_0:1");
    return ans;
    //#]
}

int Calculator::getX() const {
    return X;
}

void Calculator::setX(int p_X) {
    X = p_X;
}

int Calculator::getY() const {
    return Y;
}

void Calculator::setY(int p_Y) {
    Y = p_Y;
}

int Calculator::getZ() const {
    return Z;
}

void Calculator::setZ(int p_Z) {
    Z = p_Z;
}

bool Calculator::startBehavior() {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCalculator::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("X", x2String(myReal->X));
    aomsAttributes->addAttribute("Y", x2String(myReal->Y));
    aomsAttributes->addAttribute("Z", x2String(myReal->Z));
}
//#]

IMPLEMENT_ACTIVITY_META_P(Calculator, TestSimulazioni, TestSimulazioni, false, OMAnimatedCalculator)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/Calculator_Simulation/Calculator.cpp
*********************************************************************/
