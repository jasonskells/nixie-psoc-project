/*******************************************************************************
* File Name: J.h  
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

#if !defined(CY_PINS_J_ALIASES_H) /* Pins J_ALIASES_H */
#define CY_PINS_J_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define J_0			(J__0__PC)
#define J_0_PS		(J__0__PS)
#define J_0_PC		(J__0__PC)
#define J_0_DR		(J__0__DR)
#define J_0_SHIFT	(J__0__SHIFT)
#define J_0_INTR	((uint16)((uint16)0x0003u << (J__0__SHIFT*2u)))

#define J_INTR_ALL	 ((uint16)(J_0_INTR))


#endif /* End Pins J_ALIASES_H */


/* [] END OF FILE */
