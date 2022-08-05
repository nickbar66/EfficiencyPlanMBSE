/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: Simulation 
	Configuration 	: DefaultConfig
	Model Element	: VehicleOccupant
//!	Generated Date	: Tue, 2, Aug 2022  
	File Path	: Simulation/DefaultConfig/VehicleOccupant.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "VehicleOccupant.h"
//#[ ignore
#define Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context_VehicleOccupant_VehicleOccupant_SERIALIZE OM_NO_OP
//#]

//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context

//## class VehicleOccupant
VehicleOccupant::VehicleOccupant() {
    NOTIFY_CONSTRUCTOR(VehicleOccupant, VehicleOccupant(), 0, Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context_VehicleOccupant_VehicleOccupant_SERIALIZE);
}

VehicleOccupant::~VehicleOccupant() {
    NOTIFY_DESTRUCTOR(~VehicleOccupant, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedVehicleOccupant::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(VehicleOccupant, Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context, Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context, false, OMAnimatedVehicleOccupant)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: Simulation/DefaultConfig/VehicleOccupant.cpp
*********************************************************************/
