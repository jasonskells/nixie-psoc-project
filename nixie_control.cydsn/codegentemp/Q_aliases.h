/*******************************************************************************
* File Name: Q.h  
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

#if !defined(CY_PINS_Q_ALIASES_H) /* Pins Q_ALIASES_H */
#define CY_PINS_Q_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Q_0			(Q__0__PC)
#define Q_0_PS		(Q__0__PS)
#define Q_0_PC		(Q__0__PC)
#define Q_0_DR		(Q__0__DR)
#define Q_0_SHIFT	(Q__0__SHIFT)
#define Q_0_INTR	((uint16)((uint16)0x0003u << (Q__0__SHIFT*2u)))

#define Q_INTR_ALL	 ((uint16)(Q_0_INTR))


#endif /* End Pins Q_ALIASES_H */


/* [] END OF FILE */
