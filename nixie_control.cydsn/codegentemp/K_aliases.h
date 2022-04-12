/*******************************************************************************
* File Name: K.h  
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

#if !defined(CY_PINS_K_ALIASES_H) /* Pins K_ALIASES_H */
#define CY_PINS_K_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define K_0			(K__0__PC)
#define K_0_PS		(K__0__PS)
#define K_0_PC		(K__0__PC)
#define K_0_DR		(K__0__DR)
#define K_0_SHIFT	(K__0__SHIFT)
#define K_0_INTR	((uint16)((uint16)0x0003u << (K__0__SHIFT*2u)))

#define K_INTR_ALL	 ((uint16)(K_0_INTR))


#endif /* End Pins K_ALIASES_H */


/* [] END OF FILE */
