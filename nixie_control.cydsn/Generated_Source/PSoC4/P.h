/*******************************************************************************
* File Name: P.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_P_H) /* Pins P_H */
#define CY_PINS_P_H

#include "cytypes.h"
#include "cyfitter.h"
#include "P_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} P_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   P_Read(void);
void    P_Write(uint8 value);
uint8   P_ReadDataReg(void);
#if defined(P__PC) || (CY_PSOC4_4200L) 
    void    P_SetDriveMode(uint8 mode);
#endif
void    P_SetInterruptMode(uint16 position, uint16 mode);
uint8   P_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void P_Sleep(void); 
void P_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(P__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define P_DRIVE_MODE_BITS        (3)
    #define P_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - P_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the P_SetDriveMode() function.
         *  @{
         */
        #define P_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define P_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define P_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define P_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define P_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define P_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define P_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define P_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define P_MASK               P__MASK
#define P_SHIFT              P__SHIFT
#define P_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in P_SetInterruptMode() function.
     *  @{
     */
        #define P_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define P_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define P_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define P_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(P__SIO)
    #define P_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(P__PC) && (CY_PSOC4_4200L)
    #define P_USBIO_ENABLE               ((uint32)0x80000000u)
    #define P_USBIO_DISABLE              ((uint32)(~P_USBIO_ENABLE))
    #define P_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define P_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define P_USBIO_ENTER_SLEEP          ((uint32)((1u << P_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << P_USBIO_SUSPEND_DEL_SHIFT)))
    #define P_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << P_USBIO_SUSPEND_SHIFT)))
    #define P_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << P_USBIO_SUSPEND_DEL_SHIFT)))
    #define P_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(P__PC)
    /* Port Configuration */
    #define P_PC                 (* (reg32 *) P__PC)
#endif
/* Pin State */
#define P_PS                     (* (reg32 *) P__PS)
/* Data Register */
#define P_DR                     (* (reg32 *) P__DR)
/* Input Buffer Disable Override */
#define P_INP_DIS                (* (reg32 *) P__PC2)

/* Interrupt configuration Registers */
#define P_INTCFG                 (* (reg32 *) P__INTCFG)
#define P_INTSTAT                (* (reg32 *) P__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define P_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(P__SIO)
    #define P_SIO_REG            (* (reg32 *) P__SIO)
#endif /* (P__SIO_CFG) */

/* USBIO registers */
#if !defined(P__PC) && (CY_PSOC4_4200L)
    #define P_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define P_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define P_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define P_DRIVE_MODE_SHIFT       (0x00u)
#define P_DRIVE_MODE_MASK        (0x07u << P_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins P_H */


/* [] END OF FILE */
