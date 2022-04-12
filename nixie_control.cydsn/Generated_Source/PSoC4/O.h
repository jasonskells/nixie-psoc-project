/*******************************************************************************
* File Name: O.h  
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

#if !defined(CY_PINS_O_H) /* Pins O_H */
#define CY_PINS_O_H

#include "cytypes.h"
#include "cyfitter.h"
#include "O_aliases.h"


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
} O_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   O_Read(void);
void    O_Write(uint8 value);
uint8   O_ReadDataReg(void);
#if defined(O__PC) || (CY_PSOC4_4200L) 
    void    O_SetDriveMode(uint8 mode);
#endif
void    O_SetInterruptMode(uint16 position, uint16 mode);
uint8   O_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void O_Sleep(void); 
void O_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(O__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define O_DRIVE_MODE_BITS        (3)
    #define O_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - O_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the O_SetDriveMode() function.
         *  @{
         */
        #define O_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define O_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define O_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define O_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define O_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define O_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define O_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define O_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define O_MASK               O__MASK
#define O_SHIFT              O__SHIFT
#define O_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in O_SetInterruptMode() function.
     *  @{
     */
        #define O_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define O_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define O_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define O_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(O__SIO)
    #define O_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(O__PC) && (CY_PSOC4_4200L)
    #define O_USBIO_ENABLE               ((uint32)0x80000000u)
    #define O_USBIO_DISABLE              ((uint32)(~O_USBIO_ENABLE))
    #define O_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define O_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define O_USBIO_ENTER_SLEEP          ((uint32)((1u << O_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << O_USBIO_SUSPEND_DEL_SHIFT)))
    #define O_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << O_USBIO_SUSPEND_SHIFT)))
    #define O_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << O_USBIO_SUSPEND_DEL_SHIFT)))
    #define O_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(O__PC)
    /* Port Configuration */
    #define O_PC                 (* (reg32 *) O__PC)
#endif
/* Pin State */
#define O_PS                     (* (reg32 *) O__PS)
/* Data Register */
#define O_DR                     (* (reg32 *) O__DR)
/* Input Buffer Disable Override */
#define O_INP_DIS                (* (reg32 *) O__PC2)

/* Interrupt configuration Registers */
#define O_INTCFG                 (* (reg32 *) O__INTCFG)
#define O_INTSTAT                (* (reg32 *) O__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define O_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(O__SIO)
    #define O_SIO_REG            (* (reg32 *) O__SIO)
#endif /* (O__SIO_CFG) */

/* USBIO registers */
#if !defined(O__PC) && (CY_PSOC4_4200L)
    #define O_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define O_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define O_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define O_DRIVE_MODE_SHIFT       (0x00u)
#define O_DRIVE_MODE_MASK        (0x07u << O_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins O_H */


/* [] END OF FILE */
