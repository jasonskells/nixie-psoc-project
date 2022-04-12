/*******************************************************************************
* File Name: K.h  
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

#if !defined(CY_PINS_K_H) /* Pins K_H */
#define CY_PINS_K_H

#include "cytypes.h"
#include "cyfitter.h"
#include "K_aliases.h"


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
} K_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   K_Read(void);
void    K_Write(uint8 value);
uint8   K_ReadDataReg(void);
#if defined(K__PC) || (CY_PSOC4_4200L) 
    void    K_SetDriveMode(uint8 mode);
#endif
void    K_SetInterruptMode(uint16 position, uint16 mode);
uint8   K_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void K_Sleep(void); 
void K_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(K__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define K_DRIVE_MODE_BITS        (3)
    #define K_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - K_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the K_SetDriveMode() function.
         *  @{
         */
        #define K_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define K_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define K_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define K_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define K_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define K_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define K_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define K_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define K_MASK               K__MASK
#define K_SHIFT              K__SHIFT
#define K_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in K_SetInterruptMode() function.
     *  @{
     */
        #define K_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define K_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define K_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define K_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(K__SIO)
    #define K_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(K__PC) && (CY_PSOC4_4200L)
    #define K_USBIO_ENABLE               ((uint32)0x80000000u)
    #define K_USBIO_DISABLE              ((uint32)(~K_USBIO_ENABLE))
    #define K_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define K_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define K_USBIO_ENTER_SLEEP          ((uint32)((1u << K_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << K_USBIO_SUSPEND_DEL_SHIFT)))
    #define K_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << K_USBIO_SUSPEND_SHIFT)))
    #define K_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << K_USBIO_SUSPEND_DEL_SHIFT)))
    #define K_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(K__PC)
    /* Port Configuration */
    #define K_PC                 (* (reg32 *) K__PC)
#endif
/* Pin State */
#define K_PS                     (* (reg32 *) K__PS)
/* Data Register */
#define K_DR                     (* (reg32 *) K__DR)
/* Input Buffer Disable Override */
#define K_INP_DIS                (* (reg32 *) K__PC2)

/* Interrupt configuration Registers */
#define K_INTCFG                 (* (reg32 *) K__INTCFG)
#define K_INTSTAT                (* (reg32 *) K__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define K_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(K__SIO)
    #define K_SIO_REG            (* (reg32 *) K__SIO)
#endif /* (K__SIO_CFG) */

/* USBIO registers */
#if !defined(K__PC) && (CY_PSOC4_4200L)
    #define K_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define K_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define K_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define K_DRIVE_MODE_SHIFT       (0x00u)
#define K_DRIVE_MODE_MASK        (0x07u << K_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins K_H */


/* [] END OF FILE */
