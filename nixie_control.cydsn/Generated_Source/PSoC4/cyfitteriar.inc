;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.4
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar_trm.inc

/* A */
A__0__DR EQU CYREG_GPIO_PRT2_DR
A__0__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
A__0__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
A__0__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
A__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
A__0__HSIOM_MASK EQU 0x0000000F
A__0__HSIOM_SHIFT EQU 0
A__0__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
A__0__INTR EQU CYREG_GPIO_PRT2_INTR
A__0__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
A__0__INTSTAT EQU CYREG_GPIO_PRT2_INTR
A__0__MASK EQU 0x01
A__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
A__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
A__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
A__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
A__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
A__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
A__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
A__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
A__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
A__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
A__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
A__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
A__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
A__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
A__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
A__0__PC EQU CYREG_GPIO_PRT2_PC
A__0__PC2 EQU CYREG_GPIO_PRT2_PC2
A__0__PORT EQU 2
A__0__PS EQU CYREG_GPIO_PRT2_PS
A__0__SHIFT EQU 0
A__DR EQU CYREG_GPIO_PRT2_DR
A__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
A__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
A__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
A__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
A__INTR EQU CYREG_GPIO_PRT2_INTR
A__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
A__INTSTAT EQU CYREG_GPIO_PRT2_INTR
A__MASK EQU 0x01
A__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
A__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
A__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
A__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
A__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
A__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
A__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
A__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
A__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
A__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
A__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
A__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
A__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
A__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
A__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
A__PC EQU CYREG_GPIO_PRT2_PC
A__PC2 EQU CYREG_GPIO_PRT2_PC2
A__PORT EQU 2
A__PS EQU CYREG_GPIO_PRT2_PS
A__SHIFT EQU 0

/* B */
B__0__DR EQU CYREG_GPIO_PRT2_DR
B__0__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
B__0__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
B__0__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
B__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
B__0__HSIOM_MASK EQU 0x000000F0
B__0__HSIOM_SHIFT EQU 4
B__0__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
B__0__INTR EQU CYREG_GPIO_PRT2_INTR
B__0__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
B__0__INTSTAT EQU CYREG_GPIO_PRT2_INTR
B__0__MASK EQU 0x02
B__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
B__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
B__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
B__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
B__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
B__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
B__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
B__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
B__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
B__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
B__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
B__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
B__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
B__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
B__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
B__0__PC EQU CYREG_GPIO_PRT2_PC
B__0__PC2 EQU CYREG_GPIO_PRT2_PC2
B__0__PORT EQU 2
B__0__PS EQU CYREG_GPIO_PRT2_PS
B__0__SHIFT EQU 1
B__DR EQU CYREG_GPIO_PRT2_DR
B__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
B__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
B__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
B__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
B__INTR EQU CYREG_GPIO_PRT2_INTR
B__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
B__INTSTAT EQU CYREG_GPIO_PRT2_INTR
B__MASK EQU 0x02
B__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
B__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
B__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
B__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
B__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
B__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
B__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
B__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
B__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
B__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
B__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
B__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
B__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
B__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
B__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
B__PC EQU CYREG_GPIO_PRT2_PC
B__PC2 EQU CYREG_GPIO_PRT2_PC2
B__PORT EQU 2
B__PS EQU CYREG_GPIO_PRT2_PS
B__SHIFT EQU 1

/* C */
C__0__DR EQU CYREG_GPIO_PRT2_DR
C__0__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
C__0__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
C__0__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
C__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
C__0__HSIOM_MASK EQU 0x00000F00
C__0__HSIOM_SHIFT EQU 8
C__0__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
C__0__INTR EQU CYREG_GPIO_PRT2_INTR
C__0__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
C__0__INTSTAT EQU CYREG_GPIO_PRT2_INTR
C__0__MASK EQU 0x04
C__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
C__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
C__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
C__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
C__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
C__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
C__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
C__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
C__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
C__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
C__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
C__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
C__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
C__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
C__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
C__0__PC EQU CYREG_GPIO_PRT2_PC
C__0__PC2 EQU CYREG_GPIO_PRT2_PC2
C__0__PORT EQU 2
C__0__PS EQU CYREG_GPIO_PRT2_PS
C__0__SHIFT EQU 2
C__DR EQU CYREG_GPIO_PRT2_DR
C__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
C__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
C__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
C__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
C__INTR EQU CYREG_GPIO_PRT2_INTR
C__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
C__INTSTAT EQU CYREG_GPIO_PRT2_INTR
C__MASK EQU 0x04
C__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
C__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
C__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
C__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
C__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
C__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
C__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
C__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
C__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
C__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
C__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
C__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
C__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
C__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
C__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
C__PC EQU CYREG_GPIO_PRT2_PC
C__PC2 EQU CYREG_GPIO_PRT2_PC2
C__PORT EQU 2
C__PS EQU CYREG_GPIO_PRT2_PS
C__SHIFT EQU 2

/* D */
D__0__DR EQU CYREG_GPIO_PRT2_DR
D__0__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
D__0__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
D__0__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
D__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
D__0__HSIOM_MASK EQU 0x0000F000
D__0__HSIOM_SHIFT EQU 12
D__0__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
D__0__INTR EQU CYREG_GPIO_PRT2_INTR
D__0__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
D__0__INTSTAT EQU CYREG_GPIO_PRT2_INTR
D__0__MASK EQU 0x08
D__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
D__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
D__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
D__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
D__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
D__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
D__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
D__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
D__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
D__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
D__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
D__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
D__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
D__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
D__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
D__0__PC EQU CYREG_GPIO_PRT2_PC
D__0__PC2 EQU CYREG_GPIO_PRT2_PC2
D__0__PORT EQU 2
D__0__PS EQU CYREG_GPIO_PRT2_PS
D__0__SHIFT EQU 3
D__DR EQU CYREG_GPIO_PRT2_DR
D__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
D__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
D__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
D__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
D__INTR EQU CYREG_GPIO_PRT2_INTR
D__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
D__INTSTAT EQU CYREG_GPIO_PRT2_INTR
D__MASK EQU 0x08
D__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
D__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
D__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
D__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
D__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
D__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
D__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
D__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
D__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
D__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
D__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
D__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
D__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
D__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
D__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
D__PC EQU CYREG_GPIO_PRT2_PC
D__PC2 EQU CYREG_GPIO_PRT2_PC2
D__PORT EQU 2
D__PS EQU CYREG_GPIO_PRT2_PS
D__SHIFT EQU 3

/* E */
E__0__DR EQU CYREG_GPIO_PRT2_DR
E__0__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
E__0__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
E__0__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
E__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
E__0__HSIOM_MASK EQU 0x000F0000
E__0__HSIOM_SHIFT EQU 16
E__0__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
E__0__INTR EQU CYREG_GPIO_PRT2_INTR
E__0__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
E__0__INTSTAT EQU CYREG_GPIO_PRT2_INTR
E__0__MASK EQU 0x10
E__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
E__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
E__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
E__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
E__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
E__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
E__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
E__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
E__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
E__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
E__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
E__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
E__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
E__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
E__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
E__0__PC EQU CYREG_GPIO_PRT2_PC
E__0__PC2 EQU CYREG_GPIO_PRT2_PC2
E__0__PORT EQU 2
E__0__PS EQU CYREG_GPIO_PRT2_PS
E__0__SHIFT EQU 4
E__DR EQU CYREG_GPIO_PRT2_DR
E__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
E__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
E__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
E__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
E__INTR EQU CYREG_GPIO_PRT2_INTR
E__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
E__INTSTAT EQU CYREG_GPIO_PRT2_INTR
E__MASK EQU 0x10
E__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
E__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
E__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
E__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
E__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
E__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
E__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
E__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
E__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
E__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
E__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
E__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
E__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
E__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
E__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
E__PC EQU CYREG_GPIO_PRT2_PC
E__PC2 EQU CYREG_GPIO_PRT2_PC2
E__PORT EQU 2
E__PS EQU CYREG_GPIO_PRT2_PS
E__SHIFT EQU 4

/* F */
F__0__DR EQU CYREG_GPIO_PRT2_DR
F__0__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
F__0__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
F__0__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
F__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
F__0__HSIOM_MASK EQU 0x00F00000
F__0__HSIOM_SHIFT EQU 20
F__0__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
F__0__INTR EQU CYREG_GPIO_PRT2_INTR
F__0__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
F__0__INTSTAT EQU CYREG_GPIO_PRT2_INTR
F__0__MASK EQU 0x20
F__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
F__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
F__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
F__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
F__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
F__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
F__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
F__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
F__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
F__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
F__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
F__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
F__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
F__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
F__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
F__0__PC EQU CYREG_GPIO_PRT2_PC
F__0__PC2 EQU CYREG_GPIO_PRT2_PC2
F__0__PORT EQU 2
F__0__PS EQU CYREG_GPIO_PRT2_PS
F__0__SHIFT EQU 5
F__DR EQU CYREG_GPIO_PRT2_DR
F__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
F__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
F__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
F__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
F__INTR EQU CYREG_GPIO_PRT2_INTR
F__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
F__INTSTAT EQU CYREG_GPIO_PRT2_INTR
F__MASK EQU 0x20
F__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
F__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
F__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
F__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
F__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
F__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
F__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
F__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
F__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
F__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
F__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
F__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
F__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
F__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
F__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
F__PC EQU CYREG_GPIO_PRT2_PC
F__PC2 EQU CYREG_GPIO_PRT2_PC2
F__PORT EQU 2
F__PS EQU CYREG_GPIO_PRT2_PS
F__SHIFT EQU 5

/* G */
G__0__DR EQU CYREG_GPIO_PRT9_DR
G__0__DR_CLR EQU CYREG_GPIO_PRT9_DR_CLR
G__0__DR_INV EQU CYREG_GPIO_PRT9_DR_INV
G__0__DR_SET EQU CYREG_GPIO_PRT9_DR_SET
G__0__HSIOM EQU CYREG_HSIOM_PORT_SEL9
G__0__HSIOM_MASK EQU 0x00000F00
G__0__HSIOM_SHIFT EQU 8
G__0__INTCFG EQU CYREG_GPIO_PRT9_INTR_CFG
G__0__INTR EQU CYREG_GPIO_PRT9_INTR
G__0__INTR_CFG EQU CYREG_GPIO_PRT9_INTR_CFG
G__0__INTSTAT EQU CYREG_GPIO_PRT9_INTR
G__0__MASK EQU 0x04
G__0__PC EQU CYREG_GPIO_PRT9_PC
G__0__PC2 EQU CYREG_GPIO_PRT9_PC2
G__0__PORT EQU 9
G__0__PS EQU CYREG_GPIO_PRT9_PS
G__0__SHIFT EQU 2
G__DR EQU CYREG_GPIO_PRT9_DR
G__DR_CLR EQU CYREG_GPIO_PRT9_DR_CLR
G__DR_INV EQU CYREG_GPIO_PRT9_DR_INV
G__DR_SET EQU CYREG_GPIO_PRT9_DR_SET
G__INTCFG EQU CYREG_GPIO_PRT9_INTR_CFG
G__INTR EQU CYREG_GPIO_PRT9_INTR
G__INTR_CFG EQU CYREG_GPIO_PRT9_INTR_CFG
G__INTSTAT EQU CYREG_GPIO_PRT9_INTR
G__MASK EQU 0x04
G__PC EQU CYREG_GPIO_PRT9_PC
G__PC2 EQU CYREG_GPIO_PRT9_PC2
G__PORT EQU 9
G__PS EQU CYREG_GPIO_PRT9_PS
G__SHIFT EQU 2

/* H */
H__0__DR EQU CYREG_GPIO_PRT9_DR
H__0__DR_CLR EQU CYREG_GPIO_PRT9_DR_CLR
H__0__DR_INV EQU CYREG_GPIO_PRT9_DR_INV
H__0__DR_SET EQU CYREG_GPIO_PRT9_DR_SET
H__0__HSIOM EQU CYREG_HSIOM_PORT_SEL9
H__0__HSIOM_MASK EQU 0x0000F000
H__0__HSIOM_SHIFT EQU 12
H__0__INTCFG EQU CYREG_GPIO_PRT9_INTR_CFG
H__0__INTR EQU CYREG_GPIO_PRT9_INTR
H__0__INTR_CFG EQU CYREG_GPIO_PRT9_INTR_CFG
H__0__INTSTAT EQU CYREG_GPIO_PRT9_INTR
H__0__MASK EQU 0x08
H__0__PC EQU CYREG_GPIO_PRT9_PC
H__0__PC2 EQU CYREG_GPIO_PRT9_PC2
H__0__PORT EQU 9
H__0__PS EQU CYREG_GPIO_PRT9_PS
H__0__SHIFT EQU 3
H__DR EQU CYREG_GPIO_PRT9_DR
H__DR_CLR EQU CYREG_GPIO_PRT9_DR_CLR
H__DR_INV EQU CYREG_GPIO_PRT9_DR_INV
H__DR_SET EQU CYREG_GPIO_PRT9_DR_SET
H__INTCFG EQU CYREG_GPIO_PRT9_INTR_CFG
H__INTR EQU CYREG_GPIO_PRT9_INTR
H__INTR_CFG EQU CYREG_GPIO_PRT9_INTR_CFG
H__INTSTAT EQU CYREG_GPIO_PRT9_INTR
H__MASK EQU 0x08
H__PC EQU CYREG_GPIO_PRT9_PC
H__PC2 EQU CYREG_GPIO_PRT9_PC2
H__PORT EQU 9
H__PS EQU CYREG_GPIO_PRT9_PS
H__SHIFT EQU 3

/* Miscellaneous */
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 26
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x101311A0
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 26
CYDEV_CHIP_MEMBER_4AA EQU 25
CYDEV_CHIP_MEMBER_4AB EQU 30
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4AD EQU 15
CYDEV_CHIP_MEMBER_4AE EQU 16
CYDEV_CHIP_MEMBER_4D EQU 20
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 27
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 24
CYDEV_CHIP_MEMBER_4I EQU 32
CYDEV_CHIP_MEMBER_4J EQU 21
CYDEV_CHIP_MEMBER_4K EQU 22
CYDEV_CHIP_MEMBER_4L EQU 31
CYDEV_CHIP_MEMBER_4M EQU 29
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 28
CYDEV_CHIP_MEMBER_4Q EQU 17
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 23
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 18
CYDEV_CHIP_MEMBER_4Z EQU 19
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 33
CYDEV_CHIP_MEMBER_FM3 EQU 37
CYDEV_CHIP_MEMBER_FM4 EQU 38
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 34
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 35
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 36
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4L
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AD_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AE_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4L_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_UNCOMPRESSED
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 8
CYDEV_DFT_SELECT_CLK1 EQU 9
CYDEV_DMA_CHANNELS_AVAILABLE EQU 32
CYDEV_HEAP_SIZE EQU 0x0100
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_INTR_NUMBER_DMA EQU 14
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VBUS_MV EQU 5000
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_VDDIO_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 0
CYIPBLOCK_m0s8can_VERSION EQU 1
CYIPBLOCK_m0s8cpussv2_VERSION EQU 1
CYIPBLOCK_m0s8csd_VERSION EQU 1
CYIPBLOCK_m0s8ioss_VERSION EQU 1
CYIPBLOCK_m0s8lcd_VERSION EQU 2
CYIPBLOCK_m0s8lpcomp_VERSION EQU 2
CYIPBLOCK_m0s8peri_VERSION EQU 1
CYIPBLOCK_m0s8scb_VERSION EQU 2
CYIPBLOCK_m0s8srssv2_VERSION EQU 2
CYIPBLOCK_m0s8tcpwm_VERSION EQU 2
CYIPBLOCK_m0s8udb_VERSION EQU 1
CYIPBLOCK_m0s8usbdss_VERSION EQU 2
CYIPBLOCK_m0s8wco_VERSION EQU 1
CYIPBLOCK_s8pass4al_VERSION EQU 1
DMA_CHANNELS_USED__MASK EQU 0
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */