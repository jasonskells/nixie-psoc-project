/*******************************************************************************
* File Name: S.h  
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

#if !defined(CY_PINS_S_H) /* Pins S_H */
#define CY_PINS_S_H

#include "cytypes.h"
#include "cyfitter.h"
#include "S_aliases.h"


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
} S_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   S_Read(void);
void    S_Write(uint8 value);
uint8   S_ReadDataReg(void);
#if defined(S__PC) || (CY_PSOC4_4200L) 
    void    S_SetDriveMode(uint8 mode);
#endif
void    S_SetInterruptMode(uint16 position, uint16 mode);
uint8   S_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void S_Sleep(void); 
void S_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(S__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define S_DRIVE_MODE_BITS        (3)
    #define S_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - S_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the S_SetDriveMode() function.
         *  @{
         */
        #define S_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define S_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define S_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define S_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define S_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define S_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define S_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define S_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define S_MASK               S__MASK
#define S_SHIFT              S__SHIFT
#define S_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in S_SetInterruptMode() function.
     *  @{
     */
        #define S_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define S_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define S_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define S_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(S__SIO)
    #define S_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(S__PC) && (CY_PSOC4_4200L)
    #define S_USBIO_ENABLE               ((uint32)0x80000000u)
    #define S_USBIO_DISABLE              ((uint32)(~S_USBIO_ENABLE))
    #define S_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define S_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define S_USBIO_ENTER_SLEEP          ((uint32)((1u << S_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << S_USBIO_SUSPEND_DEL_SHIFT)))
    #define S_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << S_USBIO_SUSPEND_SHIFT)))
    #define S_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << S_USBIO_SUSPEND_DEL_SHIFT)))
    #define S_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(S__PC)
    /* Port Configuration */
    #define S_PC                 (* (reg32 *) S__PC)
#endif
/* Pin State */
#define S_PS                     (* (reg32 *) S__PS)
/* Data Register */
#define S_DR                     (* (reg32 *) S__DR)
/* Input Buffer Disable Override */
#define S_INP_DIS                (* (reg32 *) S__PC2)

/* Interrupt configuration Registers */
#define S_INTCFG                 (* (reg32 *) S__INTCFG)
#define S_INTSTAT                (* (reg32 *) S__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define S_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(S__SIO)
    #define S_SIO_REG            (* (reg32 *) S__SIO)
#endif /* (S__SIO_CFG) */

/* USBIO registers */
#if !defined(S__PC) && (CY_PSOC4_4200L)
    #define S_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define S_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define S_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define S_DRIVE_MODE_SHIFT       (0x00u)
#define S_DRIVE_MODE_MASK        (0x07u << S_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins S_H */


/* [] END OF FILE */
