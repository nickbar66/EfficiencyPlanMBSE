/********************************************************************
	Rhapsody	: 9.0.1 
	Login		: BaronciniN
	Component	: DefaultComponent 
	Configuration 	: Calculator
	Model Element	: VehicleOccupant
//!	Generated Date	: Fri, 5, Aug 2022  
	File Path	: DefaultComponent/Calculator/VehicleOccupant.cpp
*********************************************************************/

//## auto_generated
#include "VehicleOccupant.h"
//## link itsProvideConfortableTemperature
#include "ProvideConfortableTemperature.h"
//## package Model::P_1_Problem_Domain::P_1_Black_Box::P_2_System_Context

//## class VehicleOccupant
VehicleOccupant::VehicleOccupant() {
    itsProvideConfortableTemperature = NULL;
}

VehicleOccupant::~VehicleOccupant() {
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
}

void VehicleOccupant::_setItsProvideConfortableTemperature(ProvideConfortableTemperature* p_ProvideConfortableTemperature) {
    if(itsProvideConfortableTemperature != NULL)
        {
            itsProvideConfortableTemperature->__setItsVehicleOccupant(NULL);
        }
    __setItsProvideConfortableTemperature(p_ProvideConfortableTemperature);
}

void VehicleOccupant::_clearItsProvideConfortableTemperature() {
    itsProvideConfortableTemperature = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent/Calculator/VehicleOccupant.cpp
*********************************************************************/
