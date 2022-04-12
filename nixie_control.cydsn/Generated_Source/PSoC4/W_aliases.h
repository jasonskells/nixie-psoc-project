/*******************************************************************************
* File Name: W.h  
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

#if !defined(CY_PINS_W_ALIASES_H) /* Pins W_ALIASES_H */
#define CY_PINS_W_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define W_0			(W__0__PC)
#define W_0_PS		(W__0__PS)
#define W_0_PC		(W__0__PC)
#define W_0_DR		(W__0__DR)
#define W_0_SHIFT	(W__0__SHIFT)
#define W_0_INTR	((uint16)((uint16)0x0003u << (W__0__SHIFT*2u)))

#define W_INTR_ALL	 ((uint16)(W_0_INTR))


#endif /* End Pins W_ALIASES_H */


/* [] END OF FILE */
