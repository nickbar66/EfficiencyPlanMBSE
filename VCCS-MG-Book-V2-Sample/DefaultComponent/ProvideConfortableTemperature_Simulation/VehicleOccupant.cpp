/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: ProvideConfortableTemperature_Simulation
	Model Element	: VehicleOccupant
//!	Generated Date	: Mon, 15, Aug 2022  
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
    itsVehicleOccupant = NULL;
    itsVehicleOccupant_1 = NULL;
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

VehicleOccupant* VehicleOccupant::getItsVehicleOccupant() const {
    return itsVehicleOccupant;
}

void VehicleOccupant::setItsVehicleOccupant(VehicleOccupant* p_VehicleOccupant) {
    if(p_VehicleOccupant != NULL)
        {
            p_VehicleOccupant->_setItsVehicleOccupant_1(this);
        }
    _setItsVehicleOccupant(p_VehicleOccupant);
}

VehicleOccupant* VehicleOccupant::getItsVehicleOccupant_1() const {
    return itsVehicleOccupant_1;
}

void VehicleOccupant::setItsVehicleOccupant_1(VehicleOccupant* p_VehicleOccupant) {
    if(p_VehicleOccupant != NULL)
        {
            p_VehicleOccupant->_setItsVehicleOccupant(this);
        }
    _setItsVehicleOccupant_1(p_VehicleOccupant);
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
    if(itsVehicleOccupant != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsVehicleOccupant");
            VehicleOccupant* p_VehicleOccupant = itsVehicleOccupant->getItsVehicleOccupant_1();
            if(p_VehicleOccupant != NULL)
                {
                    itsVehicleOccupant->__setItsVehicleOccupant_1(NULL);
                }
            itsVehicleOccupant = NULL;
        }
    if(itsVehicleOccupant_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsVehicleOccupant_1");
            VehicleOccupant* p_VehicleOccupant = itsVehicleOccupant_1->getItsVehicleOccupant();
            if(p_VehicleOccupant != NULL)
                {
                    itsVehicleOccupant_1->__setItsVehicleOccupant(NULL);
                }
            itsVehicleOccupant_1 = NULL;
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

void VehicleOccupant::__setItsVehicleOccupant(VehicleOccupant* p_VehicleOccupant) {
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

void VehicleOccupant::_setItsVehicleOccupant(VehicleOccupant* p_VehicleOccupant) {
    if(itsVehicleOccupant != NULL)
        {
            itsVehicleOccupant->__setItsVehicleOccupant_1(NULL);
        }
    __setItsVehicleOccupant(p_VehicleOccupant);
}

void VehicleOccupant::_clearItsVehicleOccupant() {
    NOTIFY_RELATION_CLEARED("itsVehicleOccupant");
    itsVehicleOccupant = NULL;
}

void VehicleOccupant::__setItsVehicleOccupant_1(VehicleOccupant* p_VehicleOccupant) {
    itsVehicleOccupant_1 = p_VehicleOccupant;
    if(p_VehicleOccupant != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsVehicleOccupant_1", p_VehicleOccupant, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsVehicleOccupant_1");
        }
}

void VehicleOccupant::_setItsVehicleOccupant_1(VehicleOccupant* p_VehicleOccupant) {
    if(itsVehicleOccupant_1 != NULL)
        {
            itsVehicleOccupant_1->__setItsVehicleOccupant(NULL);
        }
    __setItsVehicleOccupant_1(p_VehicleOccupant);
}

void VehicleOccupant::_clearItsVehicleOccupant_1() {
    NOTIFY_RELATION_CLEARED("itsVehicleOccupant_1");
    itsVehicleOccupant_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedVehicleOccupant::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsProvideConfortableTemperature", false, true);
    if(myReal->itsProvideConfortableTemperature)
        {
            aomsRelations->ADD_ITEM(myReal->itsProvideConfortableTemperature);
        }
    aomsRelations->addRelation("itsVehicleOccupant", false, true);
    if(myReal->itsVehicleOccupant)
        {
            aomsRelations->ADD_ITEM(myReal->itsVehicleOccupant);
        }
    aomsRelations->addRelation("itsVehicleOccupant_1", false, true);
    if(myReal->itsVehicleOccupant_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsVehicleOccupant_1);
        }
}
//#]

IMPLEMENT_META_P(VehicleOccupant, Model_P_1_Problem_Domain_P_1_Black_Box_P_2_System_Context, Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context, false, OMAnimatedVehicleOccupant)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/ProvideConfortableTemperature_Simulation/VehicleOccupant.cpp
*********************************************************************/
