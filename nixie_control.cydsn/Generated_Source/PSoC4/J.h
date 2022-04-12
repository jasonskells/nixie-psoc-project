/*******************************************************************************
* File Name: J.h  
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

#if !defined(CY_PINS_J_H) /* Pins J_H */
#define CY_PINS_J_H

#include "cytypes.h"
#include "cyfitter.h"
#include "J_aliases.h"


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
} J_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   J_Read(void);
void    J_Write(uint8 value);
uint8   J_ReadDataReg(void);
#if defined(J__PC) || (CY_PSOC4_4200L) 
    void    J_SetDriveMode(uint8 mode);
#endif
void    J_SetInterruptMode(uint16 position, uint16 mode);
uint8   J_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void J_Sleep(void); 
void J_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(J__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define J_DRIVE_MODE_BITS        (3)
    #define J_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - J_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the J_SetDriveMode() function.
         *  @{
         */
        #define J_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define J_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define J_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define J_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define J_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define J_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define J_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define J_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define J_MASK               J__MASK
#define J_SHIFT              J__SHIFT
#define J_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in J_SetInterruptMode() function.
     *  @{
     */
        #define J_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define J_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define J_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define J_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(J__SIO)
    #define J_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(J__PC) && (CY_PSOC4_4200L)
    #define J_USBIO_ENABLE               ((uint32)0x80000000u)
    #define J_USBIO_DISABLE              ((uint32)(~J_USBIO_ENABLE))
    #define J_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define J_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define J_USBIO_ENTER_SLEEP          ((uint32)((1u << J_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << J_USBIO_SUSPEND_DEL_SHIFT)))
    #define J_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << J_USBIO_SUSPEND_SHIFT)))
    #define J_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << J_USBIO_SUSPEND_DEL_SHIFT)))
    #define J_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(J__PC)
    /* Port Configuration */
    #define J_PC                 (* (reg32 *) J__PC)
#endif
/* Pin State */
#define J_PS                     (* (reg32 *) J__PS)
/* Data Register */
#define J_DR                     (* (reg32 *) J__DR)
/* Input Buffer Disable Override */
#define J_INP_DIS                (* (reg32 *) J__PC2)

/* Interrupt configuration Registers */
#define J_INTCFG                 (* (reg32 *) J__INTCFG)
#define J_INTSTAT                (* (reg32 *) J__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define J_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(J__SIO)
    #define J_SIO_REG            (* (reg32 *) J__SIO)
#endif /* (J__SIO_CFG) */

/* USBIO registers */
#if !defined(J__PC) && (CY_PSOC4_4200L)
    #define J_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define J_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define J_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define J_DRIVE_MODE_SHIFT       (0x00u)
#define J_DRIVE_MODE_MASK        (0x07u << J_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins J_H */


/* [] END OF FILE */
