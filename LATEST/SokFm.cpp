/******************************************************************************/
/* File   : SokFm.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgSokFm.hpp"
#include "SokFm_core.hpp"
#include "infSokFm.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SOKFM_AR_RELEASE_VERSION_MAJOR                                         4
#define SOKFM_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SOKFM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SOKFM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SOKFM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SOKFM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_SokFm:
      public abstract_module
   ,  public class_SokFm_Functionality
{
   public:
      module_SokFm(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, SOKFM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, SOKFM_CONFIG_DATA, SOKFM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SOKFM_CODE) DeInitFunction (void);
      FUNC(void, SOKFM_CODE) MainFunction   (void);
      SOKFM_CORE_FUNCTIONALITIES
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

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_SokFm, SOKFM_VAR) SokFm(
   {
         SOKFM_AR_RELEASE_VERSION_MAJOR
      ,  SOKFM_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
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
   if(E_OK != IsInitDone){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_LOW){
            // check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
            // use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgSokFm;
         }
      }
      else{
#if(STD_ON == SokFm_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == SokFm_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == SokFm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  0 //TBD: IdError
      );
#endif
   }
#endif
}

FUNC(void, SOKFM_CODE) module_SokFm::DeInitFunction(void){
#if(STD_ON == SokFm_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == SokFm_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == SokFm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  0 //TBD: IdError
      );
#endif
   }
#endif
}

FUNC(void, SOKFM_CODE) module_SokFm::MainFunction(void){
#if(STD_ON == SokFm_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == SokFm_InitCheck)
   }
   else{
#if(STD_ON == SokFm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  0 //TBD: IdError
      );
#endif
   }
#endif
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

