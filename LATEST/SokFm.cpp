/******************************************************************************/
/* File   : SokFm.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "SokFm_Cfg.h"
#include "infSokFm_EcuM.h"
#include "infSokFm_Dcm.h"
#include "infSokFm_SchM.h"

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
      FUNC(void, SOKFM_CODE) InitFunction   (void);
      FUNC(void, SOKFM_CODE) DeInitFunction (void);
      FUNC(void, SOKFM_CODE) GetVersionInfo (void);
      FUNC(void, SOKFM_CODE) MainFunction   (void);

   private:
      CONST(Std_TypeVersionInfo, SOKFM_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
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
VAR(module_SokFm, SOKFM_VAR) SokFm;
CONSTP2VAR(infEcuMClient, SOKFM_VAR, SOKFM_CONST) gptrinfEcuMClient_SokFm = &SokFm;
CONSTP2VAR(infDcmClient,  SOKFM_VAR, SOKFM_CONST) gptrinfDcmClient_SokFm  = &SokFm;
CONSTP2VAR(infSchMClient, SOKFM_VAR, SOKFM_CONST) gptrinfSchMClient_SokFm = &SokFm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SOKFM_CODE) module_SokFm::InitFunction(void){
   SokFm.IsInitDone = E_OK;
}

FUNC(void, SOKFM_CODE) module_SokFm::DeInitFunction(void){
   SokFm.IsInitDone = E_NOT_OK;
}

FUNC(void, SOKFM_CODE) module_SokFm::GetVersionInfo(void){
#if(STD_ON == SokFm_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, SOKFM_CODE) module_SokFm::MainFunction(void){
}

#include "SokFm_Unused.h"

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

