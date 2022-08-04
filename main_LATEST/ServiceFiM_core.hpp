#pragma once
/******************************************************************************/
/* File   : ServiceFiM_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceFiM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define FIM_CORE_FUNCTIONALITIES                                               \
              FUNC(void, FIM_CODE) GetFunctionPermission       (void);         \
              FUNC(void, FIM_CODE) SetFunctionAvailable        (void);         \
              FUNC(void, FIM_CODE) ServiceDemTriggerOnMonitorStatus   (void);         \
              FUNC(void, FIM_CODE) ServiceDemTriggerOnServiceComponentStatus (void);         \
              FUNC(void, FIM_CODE) ServiceDemInitFunction             (void);         \
              FUNC(void, FIM_CODE) FunctionInhibition          (void);         \
              FUNC(void, FIM_CODE) ControlFunctionAvailable    (void);         \
              FUNC(void, FIM_CODE) FunctionIdType              (void);         \

#define FIM_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, FIM_CODE) GetFunctionPermission       (void) = 0;     \
      virtual FUNC(void, FIM_CODE) SetFunctionAvailable        (void) = 0;     \
      virtual FUNC(void, FIM_CODE) ServiceDemTriggerOnMonitorStatus   (void) = 0;     \
      virtual FUNC(void, FIM_CODE) ServiceDemTriggerOnServiceComponentStatus (void) = 0;     \
      virtual FUNC(void, FIM_CODE) ServiceDemInitFunction             (void) = 0;     \
      virtual FUNC(void, FIM_CODE) FunctionInhibition          (void) = 0;     \
      virtual FUNC(void, FIM_CODE) ControlFunctionAvailable    (void) = 0;     \
      virtual FUNC(void, FIM_CODE) FunctionIdType              (void) = 0;     \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceFiM_Functionality{
   public:
      FIM_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

