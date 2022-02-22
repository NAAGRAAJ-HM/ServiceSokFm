#pragma once
/*****************************************************/
/* File   : SokFm_EcuM.h                             */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_SokFm.h"

#include "EcuM_Client.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class interface_SokFm_EcuM : public interface_EcuM_Client{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, SOKFM_CODE) InitFunction(void);
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
extern interface_SokFm_EcuM *EcuM_Client_ptr_SokFm;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

