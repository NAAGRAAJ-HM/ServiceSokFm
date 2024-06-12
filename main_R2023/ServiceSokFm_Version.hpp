#pragma once
/******************************************************************************/
/* File   : ServiceSokFm_Version.hpp                                          */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICESOKFM_AR_RELEASE_VERSION_MAJOR                                  4
#define SERVICESOKFM_AR_RELEASE_VERSION_MINOR                                  3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICESOKFM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICESOKFM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICESOKFM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICESOKFM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

