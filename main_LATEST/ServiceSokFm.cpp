/******************************************************************************/
/* File   : ServiceSokFm.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceSokFm.hpp"
#include "infServiceSokFm_Imp.hpp"

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

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceSokFm, SOKFM_VAR) ServiceSokFm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SOKFM_CODE) module_ServiceSokFm::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SOKFM_CONST,       SOKFM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SOKFM_CONFIG_DATA, SOKFM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceSokFm_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceSokFm_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceSokFm_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceSokFm_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceSokFm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SOKFM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SOKFM_CODE) module_ServiceSokFm::DeInitFunction(
   void
){
#if(STD_ON == ServiceSokFm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceSokFm_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceSokFm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SOKFM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SOKFM_CODE) module_ServiceSokFm::MainFunction(
   void
){
#if(STD_ON == ServiceSokFm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceSokFm_InitCheck)
   }
   else{
#if(STD_ON == ServiceSokFm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SOKFM_E_UNINIT
      );
#endif
   }
#endif
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

