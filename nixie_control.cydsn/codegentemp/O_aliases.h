/*******************************************************************************
* File Name: O.h  
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

#if !defined(CY_PINS_O_ALIASES_H) /* Pins O_ALIASES_H */
#define CY_PINS_O_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define O_0			(O__0__PC)
#define O_0_PS		(O__0__PS)
#define O_0_PC		(O__0__PC)
#define O_0_DR		(O__0__DR)
#define O_0_SHIFT	(O__0__SHIFT)
#define O_0_INTR	((uint16)((uint16)0x0003u << (O__0__SHIFT*2u)))

#define O_INTR_ALL	 ((uint16)(O_0_INTR))


#endif /* End Pins O_ALIASES_H */


/* [] END OF FILE */
