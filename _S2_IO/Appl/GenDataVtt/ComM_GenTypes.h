/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: ComM
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: ComM_GenTypes.h
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/



#if !defined(COMM_GENTYPES_H)
#define COMM_GENTYPES_H

/* -----------------------------------------------------------------------------
    &&&~ GENERATED COMM DATA TYPES
 ----------------------------------------------------------------------------- */
/* types generated by Rte */
#include "Rte_ComM_Type.h"

typedef struct ComM_InhibitionTypeTag
{
  ComM_InhibitionStatusType ComM_ECUGroupClassification;
  uint16 ComM_InhibitCnt;
  ComM_InhibitionStatusType ComM_InhibitionStatus[1UL];
} ComM_InhibitionType;

#endif /* COMM_GENTYPES_H */

