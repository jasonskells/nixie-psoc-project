/*******************************************************************************
* File Name: Q.h  
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

#if !defined(CY_PINS_Q_H) /* Pins Q_H */
#define CY_PINS_Q_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Q_aliases.h"


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
} Q_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   Q_Read(void);
void    Q_Write(uint8 value);
uint8   Q_ReadDataReg(void);
#if defined(Q__PC) || (CY_PSOC4_4200L) 
    void    Q_SetDriveMode(uint8 mode);
#endif
void    Q_SetInterruptMode(uint16 position, uint16 mode);
uint8   Q_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void Q_Sleep(void); 
void Q_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(Q__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define Q_DRIVE_MODE_BITS        (3)
    #define Q_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Q_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the Q_SetDriveMode() function.
         *  @{
         */
        #define Q_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define Q_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define Q_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define Q_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define Q_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define Q_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define Q_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define Q_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define Q_MASK               Q__MASK
#define Q_SHIFT              Q__SHIFT
#define Q_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Q_SetInterruptMode() function.
     *  @{
     */
        #define Q_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define Q_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define Q_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define Q_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(Q__SIO)
    #define Q_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(Q__PC) && (CY_PSOC4_4200L)
    #define Q_USBIO_ENABLE               ((uint32)0x80000000u)
    #define Q_USBIO_DISABLE              ((uint32)(~Q_USBIO_ENABLE))
    #define Q_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define Q_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define Q_USBIO_ENTER_SLEEP          ((uint32)((1u << Q_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << Q_USBIO_SUSPEND_DEL_SHIFT)))
    #define Q_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << Q_USBIO_SUSPEND_SHIFT)))
    #define Q_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << Q_USBIO_SUSPEND_DEL_SHIFT)))
    #define Q_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(Q__PC)
    /* Port Configuration */
    #define Q_PC                 (* (reg32 *) Q__PC)
#endif
/* Pin State */
#define Q_PS                     (* (reg32 *) Q__PS)
/* Data Register */
#define Q_DR                     (* (reg32 *) Q__DR)
/* Input Buffer Disable Override */
#define Q_INP_DIS                (* (reg32 *) Q__PC2)

/* Interrupt configuration Registers */
#define Q_INTCFG                 (* (reg32 *) Q__INTCFG)
#define Q_INTSTAT                (* (reg32 *) Q__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define Q_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(Q__SIO)
    #define Q_SIO_REG            (* (reg32 *) Q__SIO)
#endif /* (Q__SIO_CFG) */

/* USBIO registers */
#if !defined(Q__PC) && (CY_PSOC4_4200L)
    #define Q_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define Q_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define Q_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define Q_DRIVE_MODE_SHIFT       (0x00u)
#define Q_DRIVE_MODE_MASK        (0x07u << Q_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins Q_H */


/* [] END OF FILE */
