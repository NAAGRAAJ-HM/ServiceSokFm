/*****************************************************/
/* File   : SokFm.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "SokFm_EcuM.h"
#include "SokFm_SchM.h"
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
   ,  public interface_SokFm_EcuM
   ,  public interface_SokFm_SchM
{
   public:
      FUNC(void, SOKFM_CODE) InitFunction   (void);
      FUNC(void, SOKFM_CODE) DeInitFunction (void);
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
module_SokFm SokFm;

interface_SokFm_EcuM *EcuM_Client_ptr_SokFm = &SokFm;
interface_SokFm_SchM *SchM_Client_ptr_SokFm = &SokFm;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SOKFM_CODE) module_SokFm::InitFunction(void){
}

FUNC(void, SOKFM_CODE) module_SokFm::DeInitFunction(void){
}

FUNC(void, SOKFM_CODE) module_SokFm::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

