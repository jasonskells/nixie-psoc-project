/*******************************************************************************
* File Name: C_out.h  
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

#if !defined(CY_PINS_C_out_H) /* Pins C_out_H */
#define CY_PINS_C_out_H

#include "cytypes.h"
#include "cyfitter.h"
#include "C_out_aliases.h"


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
} C_out_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   C_out_Read(void);
void    C_out_Write(uint8 value);
uint8   C_out_ReadDataReg(void);
#if defined(C_out__PC) || (CY_PSOC4_4200L) 
    void    C_out_SetDriveMode(uint8 mode);
#endif
void    C_out_SetInterruptMode(uint16 position, uint16 mode);
uint8   C_out_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void C_out_Sleep(void); 
void C_out_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(C_out__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define C_out_DRIVE_MODE_BITS        (3)
    #define C_out_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - C_out_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the C_out_SetDriveMode() function.
         *  @{
         */
        #define C_out_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define C_out_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define C_out_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define C_out_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define C_out_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define C_out_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define C_out_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define C_out_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define C_out_MASK               C_out__MASK
#define C_out_SHIFT              C_out__SHIFT
#define C_out_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in C_out_SetInterruptMode() function.
     *  @{
     */
        #define C_out_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define C_out_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define C_out_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define C_out_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(C_out__SIO)
    #define C_out_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(C_out__PC) && (CY_PSOC4_4200L)
    #define C_out_USBIO_ENABLE               ((uint32)0x80000000u)
    #define C_out_USBIO_DISABLE              ((uint32)(~C_out_USBIO_ENABLE))
    #define C_out_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define C_out_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define C_out_USBIO_ENTER_SLEEP          ((uint32)((1u << C_out_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << C_out_USBIO_SUSPEND_DEL_SHIFT)))
    #define C_out_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << C_out_USBIO_SUSPEND_SHIFT)))
    #define C_out_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << C_out_USBIO_SUSPEND_DEL_SHIFT)))
    #define C_out_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(C_out__PC)
    /* Port Configuration */
    #define C_out_PC                 (* (reg32 *) C_out__PC)
#endif
/* Pin State */
#define C_out_PS                     (* (reg32 *) C_out__PS)
/* Data Register */
#define C_out_DR                     (* (reg32 *) C_out__DR)
/* Input Buffer Disable Override */
#define C_out_INP_DIS                (* (reg32 *) C_out__PC2)

/* Interrupt configuration Registers */
#define C_out_INTCFG                 (* (reg32 *) C_out__INTCFG)
#define C_out_INTSTAT                (* (reg32 *) C_out__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define C_out_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(C_out__SIO)
    #define C_out_SIO_REG            (* (reg32 *) C_out__SIO)
#endif /* (C_out__SIO_CFG) */

/* USBIO registers */
#if !defined(C_out__PC) && (CY_PSOC4_4200L)
    #define C_out_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define C_out_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define C_out_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define C_out_DRIVE_MODE_SHIFT       (0x00u)
#define C_out_DRIVE_MODE_MASK        (0x07u << C_out_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins C_out_H */


/* [] END OF FILE */
