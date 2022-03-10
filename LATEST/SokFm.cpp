/*****************************************************/
/* File   : SokFm.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infSokFm_EcuM.h"
#include "infSokFm_SchM.h"
#include "SokFm_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_SokFm:
      public abstract_module
{
   public:
      FUNC(void, SOKFM_CODE) InitFunction   (void);
      FUNC(void, SOKFM_CODE) DeInitFunction (void);
      FUNC(void, SOKFM_CODE) GetVersionInfo (void);
      FUNC(void, SOKFM_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_SokFm   SokFm;
infEcuMClient* gptrinfEcuMClient_SokFm = &SokFm;
infDcmClient*  gptrinfDcmClient_SokFm  = &SokFm;
infSchMClient* gptrinfSchMClient_SokFm = &SokFm;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SOKFM_CODE) module_SokFm::InitFunction(void){
}

FUNC(void, SOKFM_CODE) module_SokFm::DeInitFunction(void){
}

FUNC(void, SOKFM_CODE) module_SokFm::GetVersionInfo(void){
}

FUNC(void, SOKFM_CODE) module_SokFm::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

