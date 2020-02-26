/**********************************************************************************************************************
 *  DO NOT EDIT!!! This file is automatically generated.
 *  -------------------------------------------------------------------------------------------------------------------
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2013-2015 by Vector Informatik GmbH. All rights reserved.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Vtt_Hook.c
 *  ECU-Instance:  MyECU
 *  Generated at:  2016-11-08  16:58:00
 *
 *     Generator:  VTT 1.1.19.0
 *
 *   Description:  RTE VFB tracing implementation file
 *********************************************************************************************************************/
 
/*******************************************************************************
 * Includes
 *******************************************************************************/
#include "Vtt_Hook.h"
#include "Rte_Hook.h"
#if defined ( _MSC_VER )
  #pragma warning( disable: 4005)
#endif
#define RTE_CORE

#pragma bss_seg()
#pragma data_seg()

#if defined ( _MSC_VER )
  #pragma warning( default: 4005)
#endif

/*******************************************************************************
 * Definitions
 *******************************************************************************/

/*******************************************************************************
 * Typedefs
 *******************************************************************************/
typedef void ( *fnUpdate)(void);

typedef struct
{
    boolean  needsUpdate;
    fnUpdate pfnUpdate;
} UpdateItem;


/*******************************************************************************
 * Helper functions
 *******************************************************************************/
void Rte_VttMemCpy(void* target, const void* source, uint32 size)
{
  uint32 i;
  for (i=0; i<size; i++)
  {
    ((uint8*)target)[i] = ((uint8*)source)[i];
  }
}

/*******************************************************************************
 * Rte_Task_Dispatch
 *
 * Basic tasks consume CPU ticks at each task dispatch
 *******************************************************************************/

FUNC(void, RTE_APPL_CODE) Rte_Task_Dispatch(TaskType task)
{
  switch ( task)
  {
  case Init_Task:
    CANoeAPI_ConsumeTicks(100);
    break;
  default:
    break;
  }
}

/*******************************************************************************
 * Rte_Task_WaitEventRet
 *
 * Extended tasks consume CPU ticks at each return from WaitEvent
 *******************************************************************************/
FUNC(void, RTE_APPL_CODE) Rte_Task_WaitEventRet(TaskType task, EventMaskType ev)
{
  switch ( task)
  {
  case SchM_Task:
    CANoeAPI_ConsumeTicks(100);
    break;
  case My_Task:
    CANoeAPI_ConsumeTicks(100);
    break;
  case IO_Task:
    CANoeAPI_ConsumeTicks(100);
    break;
  default:
    break;
  }
}

/*******************************************************************************
 * Rte Interfaces & Ports
 *
 * Definition of Rte interface structures and declaration of Rte port variables
 *******************************************************************************/
#if defined ( _MSC_VER )
  #pragma warning( disable: 4305)
#endif


void Rte_Apply_Port_InitValues(void)
{
#if defined ( RTE_PORTS_AVAILABLE )
  int i;

  for ( i = 0; i < sizeof( rtePortHandles) / sizeof( rtePortHandles[0]); ++i)
  {
    CANoeAPI_SysVar_ApplyInitValue( rtePortHandles[i]);
  }
#endif
}

void Rte_Define_And_Declare_Port_Variables(void)
{
#if defined ( RTE_PORTS_AVAILABLE )
  int i;

  for ( i = 0; i < sizeof( rtePort_Interfaces) / sizeof( rtePort_Interfaces[0]); ++i)
  {
    CANoeAPI_SysVar_DefineStruct( "Rte::PortDefinitions",
                                  rtePort_Interfaces[i].name,
                                  rtePort_Interfaces[i].members,
                                  rtePort_Interfaces[i].membercount);
  }

  Set_rtePorts_InitValues();

  for ( i = 0; i < sizeof( rtePorts) / sizeof( rtePorts[0]); ++i)
  {
    rtePortHandles[i] = CANoeAPI_SysVar_DeclareStruct( rtePorts[i].nameSpace,
                                                       rtePorts[i].name,
                                                       rtePorts[i].definition,
                                                       rtePorts[i].initValues,
                                                       rtePorts[i].count);
  }
#endif
}

#if defined ( _MSC_VER )
  #pragma warning( default: 4305)
#endif

/***********************************************************************************************************************
*  VttHook_OnStateChange
**********************************************************************************************************************/
/*! \brief     State Machine of VTT MCU Controller.
*  \param[in]  action
*  \param[in]  oldState
*  \param[in]  newState
*  \return     no return 
*  \context    Function is called by VTT State Machine.
*  \note       
**********************************************************************************************************************/
FUNC(void, VTTCNTRL_CODE) VttHook_OnStateChange(uint8 action, uint8 oldState, uint8 newState)
{
  switch(action)
  {
  case CANOEAPI_ECUACTION_NOACTION:
    break;
  case CANOEAPI_ECUACTION_LOAD:
    Rte_Define_And_Declare_Port_Variables();
    break;
  case CANOEAPI_ECUACTION_UNLOAD:
    break;
  case CANOEAPI_ECUACTION_INITMEASUREMENT:
    Rte_Apply_Port_InitValues();
    break;
  case CANOEAPI_ECUACTION_STARTMEASUREMENT:
  case CANOEAPI_ECUACTION_STOPMEASUREMENT:
  case CANOEAPI_ECUACTION_SWITCHON:
  case CANOEAPI_ECUACTION_SWITCHOFF:
  case CANOEAPI_ECUACTION_GOTOSLEEP:
  case CANOEAPI_ECUACTION_WAKEUP:
  case CANOEAPI_ECUACTION_RESET:
  default:
    break;
  }
}
