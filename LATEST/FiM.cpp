/*****************************************************/
/* File   : FiM.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "FiM.h"

#include "FiM_EcuM.h"
#include "FiM_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_FiM_EcuM FiM_EcuM;
class_EcuM_Client *EcuM_Client_ptr_FiM = &FiM_EcuM;
class_FiM_SchM FiM_SchM;
class_SchM_Client *SchM_Client_ptr_FiM = &FiM_SchM;
class_FiM FiM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, FIM_CODE) class_FiM_EcuM::InitFunction(void){
}

FUNC(void, FIM_CODE) class_FiM_SchM::MainFunction(void){
}

FUNC(void, FIM_CODE) class_FiM::GetFunctionPermission(void){
}

FUNC(void, FIM_CODE) class_FiM::SetFunctionAvailable(void){
}

FUNC(void, FIM_CODE) class_FiM::DemTriggerOnMonitorStatus(void){
}

FUNC(void, FIM_CODE) class_FiM::DemTriggerOnComponentStatus(void){
}

FUNC(void, FIM_CODE) class_FiM::DemInitFunction(void){
}

FUNC(void, FIM_CODE) class_FiM::GetVersionInfo(void){
}

FUNC(void, FIM_CODE) class_FiM::FunctionInhibition(void){
}

FUNC(void, FIM_CODE) class_FiM::ControlFunctionAvailable(void){
}

FUNC(void, FIM_CODE) class_FiM::FunctionIdType(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

