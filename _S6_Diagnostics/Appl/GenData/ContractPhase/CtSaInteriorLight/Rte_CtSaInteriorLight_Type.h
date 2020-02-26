/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_CtSaInteriorLight_Type.h
 *        Config:  C:/CanCollege/Autosar4/S6_Diagnostics/MyECU.dpa
 *     SW-C Type:  CtSaInteriorLight
 *  Generated at:  Wed Apr 27 16:01:55 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application types header file for SW-C <CtSaInteriorLight> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSAINTERIORLIGHT_TYPE_H
# define _RTE_CTSAINTERIORLIGHT_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

# ifndef DEM_EVENT_STATUS_PASSED
#  define DEM_EVENT_STATUS_PASSED (0U)
# endif

# ifndef DEM_EVENT_STATUS_FAILED
#  define DEM_EVENT_STATUS_FAILED (1U)
# endif

# ifndef DEM_EVENT_STATUS_PREPASSED
#  define DEM_EVENT_STATUS_PREPASSED (2U)
# endif

# ifndef DEM_EVENT_STATUS_PREFAILED
#  define DEM_EVENT_STATUS_PREFAILED (3U)
# endif

# ifndef CMLIGHTSTATE_LIGHTOFF
#  define CMLIGHTSTATE_LIGHTOFF (0U)
# endif

# ifndef CMLIGHTSTATE_LIGHTON
#  define CMLIGHTSTATE_LIGHTON (1U)
# endif


# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSAINTERIORLIGHT_TYPE_H */