/*******************************************************************************
* File Name: T.h  
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

#if !defined(CY_PINS_T_H) /* Pins T_H */
#define CY_PINS_T_H

#include "cytypes.h"
#include "cyfitter.h"
#include "T_aliases.h"


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
} T_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   T_Read(void);
void    T_Write(uint8 value);
uint8   T_ReadDataReg(void);
#if defined(T__PC) || (CY_PSOC4_4200L) 
    void    T_SetDriveMode(uint8 mode);
#endif
void    T_SetInterruptMode(uint16 position, uint16 mode);
uint8   T_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void T_Sleep(void); 
void T_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(T__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define T_DRIVE_MODE_BITS        (3)
    #define T_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - T_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the T_SetDriveMode() function.
         *  @{
         */
        #define T_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define T_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define T_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define T_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define T_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define T_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define T_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define T_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define T_MASK               T__MASK
#define T_SHIFT              T__SHIFT
#define T_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in T_SetInterruptMode() function.
     *  @{
     */
        #define T_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define T_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define T_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define T_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(T__SIO)
    #define T_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(T__PC) && (CY_PSOC4_4200L)
    #define T_USBIO_ENABLE               ((uint32)0x80000000u)
    #define T_USBIO_DISABLE              ((uint32)(~T_USBIO_ENABLE))
    #define T_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define T_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define T_USBIO_ENTER_SLEEP          ((uint32)((1u << T_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << T_USBIO_SUSPEND_DEL_SHIFT)))
    #define T_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << T_USBIO_SUSPEND_SHIFT)))
    #define T_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << T_USBIO_SUSPEND_DEL_SHIFT)))
    #define T_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(T__PC)
    /* Port Configuration */
    #define T_PC                 (* (reg32 *) T__PC)
#endif
/* Pin State */
#define T_PS                     (* (reg32 *) T__PS)
/* Data Register */
#define T_DR                     (* (reg32 *) T__DR)
/* Input Buffer Disable Override */
#define T_INP_DIS                (* (reg32 *) T__PC2)

/* Interrupt configuration Registers */
#define T_INTCFG                 (* (reg32 *) T__INTCFG)
#define T_INTSTAT                (* (reg32 *) T__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define T_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(T__SIO)
    #define T_SIO_REG            (* (reg32 *) T__SIO)
#endif /* (T__SIO_CFG) */

/* USBIO registers */
#if !defined(T__PC) && (CY_PSOC4_4200L)
    #define T_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define T_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define T_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define T_DRIVE_MODE_SHIFT       (0x00u)
#define T_DRIVE_MODE_MASK        (0x07u << T_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins T_H */


/* [] END OF FILE */
