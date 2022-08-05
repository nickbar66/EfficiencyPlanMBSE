/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: Simulation 
	Configuration 	: DefaultConfig
	Model Element	: VehicleInUse
//!	Generated Date	: Tue, 2, Aug 2022  
	File Path	: Simulation/DefaultConfig/VehicleInUse.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "VehicleInUse.h"
//#[ ignore
#define Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context_VehicleInUse_VehicleInUse_SERIALIZE OM_NO_OP
//#]

//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context

//## class VehicleInUse
VehicleInUse::VehicleInUse() {
    NOTIFY_CONSTRUCTOR(VehicleInUse, VehicleInUse(), 0, Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context_VehicleInUse_VehicleInUse_SERIALIZE);
}

VehicleInUse::~VehicleInUse() {
    NOTIFY_DESTRUCTOR(~VehicleInUse, true);
}

Cabin* VehicleInUse::getItsCabin() const {
    return (Cabin*) &itsCabin;
}

TemperatureSensor* VehicleInUse::getItsTemperatureSensor() const {
    return (TemperatureSensor*) &itsTemperatureSensor;
}

VCCU* VehicleInUse::getItsVCCU() const {
    return (VCCU*) &itsVCCU;
}

VehicleOccupant* VehicleInUse::getItsVehicleOccupant() const {
    return (VehicleOccupant*) &itsVehicleOccupant;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedVehicleInUse::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsVCCU", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsVCCU);
    aomsRelations->addRelation("itsCabin", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCabin);
    aomsRelations->addRelation("itsTemperatureSensor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsTemperatureSensor);
    aomsRelations->addRelation("itsVehicleOccupant", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsVehicleOccupant);
}
//#]

IMPLEMENT_META_P(VehicleInUse, Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context, Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context, false, OMAnimatedVehicleInUse)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Simulation/DefaultConfig/VehicleInUse.cpp
*********************************************************************/
