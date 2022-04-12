/*******************************************************************************
* File Name: T.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_T_ALIASES_H) /* Pins T_ALIASES_H */
#define CY_PINS_T_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define T_0			(T__0__PC)
#define T_0_PS		(T__0__PS)
#define T_0_PC		(T__0__PC)
#define T_0_DR		(T__0__DR)
#define T_0_SHIFT	(T__0__SHIFT)
#define T_0_INTR	((uint16)((uint16)0x0003u << (T__0__SHIFT*2u)))

#define T_INTR_ALL	 ((uint16)(T_0_INTR))


#endif /* End Pins T_ALIASES_H */


/* [] END OF FILE */
