/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: ProvideConfortableTemperature_Simulation
	Model Element	: VehicleOccupant
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/ProvideConfortableTemperature_Simulation/VehicleOccupant.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "VehicleOccupant.h"
//## link itsProvideConfortableTemperature
#include "ProvideConfortableTemperature.h"
//#[ ignore
#define Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context_VehicleOccupant_VehicleOccupant_SERIALIZE OM_NO_OP
//#]

//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context

//## class VehicleOccupant
VehicleOccupant::VehicleOccupant() {
    NOTIFY_CONSTRUCTOR(VehicleOccupant, VehicleOccupant(), 0, Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context_VehicleOccupant_VehicleOccupant_SERIALIZE);
    itsProvideConfortableTemperature = NULL;
}

VehicleOccupant::~VehicleOccupant() {
    NOTIFY_DESTRUCTOR(~VehicleOccupant, true);
    cleanUpRelations();
}

ProvideConfortableTemperature* VehicleOccupant::getItsProvideConfortableTemperature() const {
    return itsProvideConfortableTemperature;
}

void VehicleOccupant::setItsProvideConfortableTemperature(ProvideConfortableTemperature* p_ProvideConfortableTemperature) {
    if(p_ProvideConfortableTemperature != NULL)
        {
            p_ProvideConfortableTemperature->_setItsVehicleOccupant(this);
        }
    _setItsProvideConfortableTemperature(p_ProvideConfortableTemperature);
}

void VehicleOccupant::cleanUpRelations() {
    if(itsProvideConfortableTemperature != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsProvideConfortableTemperature");
            VehicleOccupant* p_VehicleOccupant = itsProvideConfortableTemperature->getItsVehicleOccupant();
            if(p_VehicleOccupant != NULL)
                {
                    itsProvideConfortableTemperature->__setItsVehicleOccupant(NULL);
                }
            itsProvideConfortableTemperature = NULL;
        }
}

void VehicleOccupant::__setItsProvideConfortableTemperature(ProvideConfortableTemperature* p_ProvideConfortableTemperature) {
    itsProvideConfortableTemperature = p_ProvideConfortableTemperature;
    if(p_ProvideConfortableTemperature != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsProvideConfortableTemperature", p_ProvideConfortableTemperature, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsProvideConfortableTemperature");
        }
}

void VehicleOccupant::_setItsProvideConfortableTemperature(ProvideConfortableTemperature* p_ProvideConfortableTemperature) {
    if(itsProvideConfortableTemperature != NULL)
        {
            itsProvideConfortableTemperature->__setItsVehicleOccupant(NULL);
        }
    __setItsProvideConfortableTemperature(p_ProvideConfortableTemperature);
}

void VehicleOccupant::_clearItsProvideConfortableTemperature() {
    NOTIFY_RELATION_CLEARED("itsProvideConfortableTemperature");
    itsProvideConfortableTemperature = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedVehicleOccupant::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsProvideConfortableTemperature", false, true);
    if(myReal->itsProvideConfortableTemperature)
        {
            aomsRelations->ADD_ITEM(myReal->itsProvideConfortableTemperature);
        }
}
//#]

IMPLEMENT_META_P(VehicleOccupant, Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context, Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context, false, OMAnimatedVehicleOccupant)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/ProvideConfortableTemperature_Simulation/VehicleOccupant.cpp
*********************************************************************/
