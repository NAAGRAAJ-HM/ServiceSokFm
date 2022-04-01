/******************************************************************************/
/* File   : SokFm.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infSokFm_EcuM.hpp"
#include "infSokFm_Dcm.hpp"
#include "infSokFm_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SOKFM_AR_RELEASE_MAJOR_VERSION                                         4
#define SOKFM_AR_RELEASE_MINOR_VERSION                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SOKFM_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible SOKFM_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(SOKFM_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible SOKFM_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_SokFm:
      public abstract_module
{
   public:
      module_SokFm(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, SOKFM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, SOKFM_CONFIG_DATA, SOKFM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SOKFM_CODE) DeInitFunction (void);
      FUNC(void, SOKFM_CODE) MainFunction   (void);
};

extern VAR(module_SokFm, SOKFM_VAR) SokFm;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, SOKFM_VAR, SOKFM_CONST) gptrinfEcuMClient_SokFm = &SokFm;
CONSTP2VAR(infDcmClient,  SOKFM_VAR, SOKFM_CONST) gptrinfDcmClient_SokFm  = &SokFm;
CONSTP2VAR(infSchMClient, SOKFM_VAR, SOKFM_CONST) gptrinfSchMClient_SokFm = &SokFm;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgSokFm.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_SokFm, SOKFM_VAR) SokFm(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SOKFM_CODE) module_SokFm::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, SOKFM_CONFIG_DATA, SOKFM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == SokFm_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == SokFm_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == SokFm_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_SokFm as back-up configuration
      }
      IsInitDone = E_OK;
#if(STD_ON == SokFm_InitCheck)
   }
#endif
}

FUNC(void, SOKFM_CODE) module_SokFm::DeInitFunction(void){
#if(STD_ON == SokFm_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == SokFm_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == SokFm_InitCheck)
   }
#endif
}

FUNC(void, SOKFM_CODE) module_SokFm::MainFunction(void){
#if(STD_ON == SokFm_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == SokFm_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == SokFm_InitCheck)
   }
#endif
}

class class_SokFm_Unused{
   public:
};

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

