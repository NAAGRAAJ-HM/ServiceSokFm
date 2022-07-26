/******************************************************************************/
/* File   : SokFm.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "SokFm.hpp"
#include "infSokFm_Imp.hpp"

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
VAR(module_SokFm, SOKFM_VAR) SokFm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SOKFM_CODE) module_SokFm::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SOKFM_CONST,       SOKFM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SOKFM_CONFIG_DATA, SOKFM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == SokFm_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstSokFm_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
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
         ,  SOKFM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SOKFM_CODE) module_SokFm::DeInitFunction(
   void
){
#if(STD_ON == SokFm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
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
         ,  SOKFM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SOKFM_CODE) module_SokFm::MainFunction(
   void
){
#if(STD_ON == SokFm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == SokFm_InitCheck)
   }
   else{
#if(STD_ON == SokFm_DevErrorDetect)
      Det_ReportError(
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

