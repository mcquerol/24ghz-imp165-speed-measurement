;
; File Name: cyfitterrv.inc
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

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; Rx
Rx__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
Rx__0__MASK EQU 0x01
Rx__0__PC EQU CYREG_PRT2_PC0
Rx__0__PORT EQU 2
Rx__0__SHIFT EQU 0
Rx__AG EQU CYREG_PRT2_AG
Rx__AMUX EQU CYREG_PRT2_AMUX
Rx__BIE EQU CYREG_PRT2_BIE
Rx__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Rx__BYP EQU CYREG_PRT2_BYP
Rx__CTL EQU CYREG_PRT2_CTL
Rx__DM0 EQU CYREG_PRT2_DM0
Rx__DM1 EQU CYREG_PRT2_DM1
Rx__DM2 EQU CYREG_PRT2_DM2
Rx__DR EQU CYREG_PRT2_DR
Rx__INP_DIS EQU CYREG_PRT2_INP_DIS
Rx__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Rx__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Rx__LCD_EN EQU CYREG_PRT2_LCD_EN
Rx__MASK EQU 0x01
Rx__PORT EQU 2
Rx__PRT EQU CYREG_PRT2_PRT
Rx__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Rx__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Rx__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Rx__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Rx__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Rx__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Rx__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Rx__PS EQU CYREG_PRT2_PS
Rx__SHIFT EQU 0
Rx__SLW EQU CYREG_PRT2_SLW

; Tx
Tx__0__INTTYPE EQU CYREG_PICU2_INTTYPE1
Tx__0__MASK EQU 0x02
Tx__0__PC EQU CYREG_PRT2_PC1
Tx__0__PORT EQU 2
Tx__0__SHIFT EQU 1
Tx__AG EQU CYREG_PRT2_AG
Tx__AMUX EQU CYREG_PRT2_AMUX
Tx__BIE EQU CYREG_PRT2_BIE
Tx__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Tx__BYP EQU CYREG_PRT2_BYP
Tx__CTL EQU CYREG_PRT2_CTL
Tx__DM0 EQU CYREG_PRT2_DM0
Tx__DM1 EQU CYREG_PRT2_DM1
Tx__DM2 EQU CYREG_PRT2_DM2
Tx__DR EQU CYREG_PRT2_DR
Tx__INP_DIS EQU CYREG_PRT2_INP_DIS
Tx__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Tx__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Tx__LCD_EN EQU CYREG_PRT2_LCD_EN
Tx__MASK EQU 0x02
Tx__PORT EQU 2
Tx__PRT EQU CYREG_PRT2_PRT
Tx__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Tx__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Tx__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Tx__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Tx__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Tx__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Tx__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Tx__PS EQU CYREG_PRT2_PS
Tx__SHIFT EQU 1
Tx__SLW EQU CYREG_PRT2_SLW

; ADC
ADC_DEC__COHER EQU CYREG_DEC_COHER
ADC_DEC__CR EQU CYREG_DEC_CR
ADC_DEC__DR1 EQU CYREG_DEC_DR1
ADC_DEC__DR2 EQU CYREG_DEC_DR2
ADC_DEC__DR2H EQU CYREG_DEC_DR2H
ADC_DEC__GCOR EQU CYREG_DEC_GCOR
ADC_DEC__GCORH EQU CYREG_DEC_GCORH
ADC_DEC__GVAL EQU CYREG_DEC_GVAL
ADC_DEC__OCOR EQU CYREG_DEC_OCOR
ADC_DEC__OCORH EQU CYREG_DEC_OCORH
ADC_DEC__OCORM EQU CYREG_DEC_OCORM
ADC_DEC__OUTSAMP EQU CYREG_DEC_OUTSAMP
ADC_DEC__OUTSAMPH EQU CYREG_DEC_OUTSAMPH
ADC_DEC__OUTSAMPM EQU CYREG_DEC_OUTSAMPM
ADC_DEC__OUTSAMPS EQU CYREG_DEC_OUTSAMPS
ADC_DEC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG10
ADC_DEC__PM_ACT_MSK EQU 0x01
ADC_DEC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG10
ADC_DEC__PM_STBY_MSK EQU 0x01
ADC_DEC__SHIFT1 EQU CYREG_DEC_SHIFT1
ADC_DEC__SHIFT2 EQU CYREG_DEC_SHIFT2
ADC_DEC__SR EQU CYREG_DEC_SR
ADC_DEC__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DEC_M1
ADC_DEC__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DEC_M2
ADC_DEC__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DEC_M3
ADC_DEC__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DEC_M4
ADC_DEC__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DEC_M5
ADC_DEC__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DEC_M6
ADC_DEC__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DEC_M7
ADC_DEC__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DEC_M8
ADC_DSM__BUF0 EQU CYREG_DSM0_BUF0
ADC_DSM__BUF1 EQU CYREG_DSM0_BUF1
ADC_DSM__BUF2 EQU CYREG_DSM0_BUF2
ADC_DSM__BUF3 EQU CYREG_DSM0_BUF3
ADC_DSM__CLK EQU CYREG_DSM0_CLK
ADC_DSM__CR0 EQU CYREG_DSM0_CR0
ADC_DSM__CR1 EQU CYREG_DSM0_CR1
ADC_DSM__CR10 EQU CYREG_DSM0_CR10
ADC_DSM__CR11 EQU CYREG_DSM0_CR11
ADC_DSM__CR12 EQU CYREG_DSM0_CR12
ADC_DSM__CR13 EQU CYREG_DSM0_CR13
ADC_DSM__CR14 EQU CYREG_DSM0_CR14
ADC_DSM__CR15 EQU CYREG_DSM0_CR15
ADC_DSM__CR16 EQU CYREG_DSM0_CR16
ADC_DSM__CR17 EQU CYREG_DSM0_CR17
ADC_DSM__CR2 EQU CYREG_DSM0_CR2
ADC_DSM__CR3 EQU CYREG_DSM0_CR3
ADC_DSM__CR4 EQU CYREG_DSM0_CR4
ADC_DSM__CR5 EQU CYREG_DSM0_CR5
ADC_DSM__CR6 EQU CYREG_DSM0_CR6
ADC_DSM__CR7 EQU CYREG_DSM0_CR7
ADC_DSM__CR8 EQU CYREG_DSM0_CR8
ADC_DSM__CR9 EQU CYREG_DSM0_CR9
ADC_DSM__DEM0 EQU CYREG_DSM0_DEM0
ADC_DSM__DEM1 EQU CYREG_DSM0_DEM1
ADC_DSM__MISC EQU CYREG_DSM0_MISC
ADC_DSM__OUT0 EQU CYREG_DSM0_OUT0
ADC_DSM__OUT1 EQU CYREG_DSM0_OUT1
ADC_DSM__REF0 EQU CYREG_DSM0_REF0
ADC_DSM__REF1 EQU CYREG_DSM0_REF1
ADC_DSM__REF2 EQU CYREG_DSM0_REF2
ADC_DSM__REF3 EQU CYREG_DSM0_REF3
ADC_DSM__RSVD1 EQU CYREG_DSM0_RSVD1
ADC_DSM__SW0 EQU CYREG_DSM0_SW0
ADC_DSM__SW2 EQU CYREG_DSM0_SW2
ADC_DSM__SW3 EQU CYREG_DSM0_SW3
ADC_DSM__SW4 EQU CYREG_DSM0_SW4
ADC_DSM__SW6 EQU CYREG_DSM0_SW6
ADC_DSM__TR0 EQU CYREG_NPUMP_DSM_TR0
ADC_DSM__TST0 EQU CYREG_DSM0_TST0
ADC_DSM__TST1 EQU CYREG_DSM0_TST1
ADC_Ext_CP_Clk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
ADC_Ext_CP_Clk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
ADC_Ext_CP_Clk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
ADC_Ext_CP_Clk__CFG2_SRC_SEL_MASK EQU 0x07
ADC_Ext_CP_Clk__INDEX EQU 0x00
ADC_Ext_CP_Clk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
ADC_Ext_CP_Clk__PM_ACT_MSK EQU 0x01
ADC_Ext_CP_Clk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
ADC_Ext_CP_Clk__PM_STBY_MSK EQU 0x01
ADC_in__0__INTTYPE EQU CYREG_PICU15_INTTYPE5
ADC_in__0__MASK EQU 0x20
ADC_in__0__PC EQU CYREG_IO_PC_PRT15_PC5
ADC_in__0__PORT EQU 15
ADC_in__0__SHIFT EQU 5
ADC_in__AG EQU CYREG_PRT15_AG
ADC_in__AMUX EQU CYREG_PRT15_AMUX
ADC_in__BIE EQU CYREG_PRT15_BIE
ADC_in__BIT_MASK EQU CYREG_PRT15_BIT_MASK
ADC_in__BYP EQU CYREG_PRT15_BYP
ADC_in__CTL EQU CYREG_PRT15_CTL
ADC_in__DM0 EQU CYREG_PRT15_DM0
ADC_in__DM1 EQU CYREG_PRT15_DM1
ADC_in__DM2 EQU CYREG_PRT15_DM2
ADC_in__DR EQU CYREG_PRT15_DR
ADC_in__INP_DIS EQU CYREG_PRT15_INP_DIS
ADC_in__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
ADC_in__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
ADC_in__LCD_EN EQU CYREG_PRT15_LCD_EN
ADC_in__MASK EQU 0x20
ADC_in__PORT EQU 15
ADC_in__PRT EQU CYREG_PRT15_PRT
ADC_in__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
ADC_in__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
ADC_in__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
ADC_in__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
ADC_in__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
ADC_in__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
ADC_in__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
ADC_in__PS EQU CYREG_PRT15_PS
ADC_in__SHIFT EQU 5
ADC_in__SLW EQU CYREG_PRT15_SLW
ADC_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ADC_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ADC_IRQ__INTC_MASK EQU 0x20000000
ADC_IRQ__INTC_NUMBER EQU 29
ADC_IRQ__INTC_PRIOR_NUM EQU 7
ADC_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_29
ADC_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ADC_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
ADC_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
ADC_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
ADC_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
ADC_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
ADC_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
ADC_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
ADC_theACLK__INDEX EQU 0x00
ADC_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
ADC_theACLK__PM_ACT_MSK EQU 0x01
ADC_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
ADC_theACLK__PM_STBY_MSK EQU 0x01

; DAC
DAC_DacClk__CFG0 EQU CYREG_CLKDIST_DCFG2_CFG0
DAC_DacClk__CFG1 EQU CYREG_CLKDIST_DCFG2_CFG1
DAC_DacClk__CFG2 EQU CYREG_CLKDIST_DCFG2_CFG2
DAC_DacClk__CFG2_SRC_SEL_MASK EQU 0x07
DAC_DacClk__INDEX EQU 0x02
DAC_DacClk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
DAC_DacClk__PM_ACT_MSK EQU 0x04
DAC_DacClk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
DAC_DacClk__PM_STBY_MSK EQU 0x04
DAC_out__0__INTTYPE EQU CYREG_PICU15_INTTYPE4
DAC_out__0__MASK EQU 0x10
DAC_out__0__PC EQU CYREG_IO_PC_PRT15_PC4
DAC_out__0__PORT EQU 15
DAC_out__0__SHIFT EQU 4
DAC_out__AG EQU CYREG_PRT15_AG
DAC_out__AMUX EQU CYREG_PRT15_AMUX
DAC_out__BIE EQU CYREG_PRT15_BIE
DAC_out__BIT_MASK EQU CYREG_PRT15_BIT_MASK
DAC_out__BYP EQU CYREG_PRT15_BYP
DAC_out__CTL EQU CYREG_PRT15_CTL
DAC_out__DM0 EQU CYREG_PRT15_DM0
DAC_out__DM1 EQU CYREG_PRT15_DM1
DAC_out__DM2 EQU CYREG_PRT15_DM2
DAC_out__DR EQU CYREG_PRT15_DR
DAC_out__INP_DIS EQU CYREG_PRT15_INP_DIS
DAC_out__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
DAC_out__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
DAC_out__LCD_EN EQU CYREG_PRT15_LCD_EN
DAC_out__MASK EQU 0x10
DAC_out__PORT EQU 15
DAC_out__PRT EQU CYREG_PRT15_PRT
DAC_out__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
DAC_out__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
DAC_out__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
DAC_out__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
DAC_out__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
DAC_out__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
DAC_out__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
DAC_out__PS EQU CYREG_PRT15_PS
DAC_out__SHIFT EQU 4
DAC_out__SLW EQU CYREG_PRT15_SLW
DAC_VDAC8_viDAC8__CR0 EQU CYREG_DAC0_CR0
DAC_VDAC8_viDAC8__CR1 EQU CYREG_DAC0_CR1
DAC_VDAC8_viDAC8__D EQU CYREG_DAC0_D
DAC_VDAC8_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
DAC_VDAC8_viDAC8__PM_ACT_MSK EQU 0x01
DAC_VDAC8_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
DAC_VDAC8_viDAC8__PM_STBY_MSK EQU 0x01
DAC_VDAC8_viDAC8__STROBE EQU CYREG_DAC0_STROBE
DAC_VDAC8_viDAC8__SW0 EQU CYREG_DAC0_SW0
DAC_VDAC8_viDAC8__SW2 EQU CYREG_DAC0_SW2
DAC_VDAC8_viDAC8__SW3 EQU CYREG_DAC0_SW3
DAC_VDAC8_viDAC8__SW4 EQU CYREG_DAC0_SW4
DAC_VDAC8_viDAC8__TR EQU CYREG_DAC0_TR
DAC_VDAC8_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M1
DAC_VDAC8_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M2
DAC_VDAC8_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M3
DAC_VDAC8_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M4
DAC_VDAC8_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M5
DAC_VDAC8_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M6
DAC_VDAC8_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M7
DAC_VDAC8_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M8
DAC_VDAC8_viDAC8__TST EQU CYREG_DAC0_TST
DAC_Wave1_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
DAC_Wave1_DMA__DRQ_NUMBER EQU 0
DAC_Wave1_DMA__NUMBEROF_TDS EQU 0
DAC_Wave1_DMA__PRIORITY EQU 2
DAC_Wave1_DMA__TERMIN_EN EQU 0
DAC_Wave1_DMA__TERMIN_SEL EQU 0
DAC_Wave1_DMA__TERMOUT0_EN EQU 0
DAC_Wave1_DMA__TERMOUT0_SEL EQU 0
DAC_Wave1_DMA__TERMOUT1_EN EQU 0
DAC_Wave1_DMA__TERMOUT1_SEL EQU 0
DAC_Wave2_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
DAC_Wave2_DMA__DRQ_NUMBER EQU 1
DAC_Wave2_DMA__NUMBEROF_TDS EQU 0
DAC_Wave2_DMA__PRIORITY EQU 2
DAC_Wave2_DMA__TERMIN_EN EQU 0
DAC_Wave2_DMA__TERMIN_SEL EQU 0
DAC_Wave2_DMA__TERMOUT0_EN EQU 0
DAC_Wave2_DMA__TERMOUT0_SEL EQU 0
DAC_Wave2_DMA__TERMOUT1_EN EQU 0
DAC_Wave2_DMA__TERMOUT1_SEL EQU 0

; UART
UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB10_11_CTL
UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB10_11_CTL
UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB10_11_MSK
UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB10_11_MSK
UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB10_11_MSK
UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
UART_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B0_UDB10_CTL
UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB10_ST_CTL
UART_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B0_UDB10_CTL
UART_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B0_UDB10_ST_CTL
UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
UART_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B0_UDB10_MSK
UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB10_11_ST
UART_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B0_UDB10_MSK
UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB10_MSK_ACTL
UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB10_ST_CTL
UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB10_ST_CTL
UART_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B0_UDB10_ST
UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB13_14_A0
UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB13_14_A1
UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB13_14_D0
UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB13_14_D1
UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB13_14_ACTL
UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB13_14_F0
UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB13_14_F1
UART_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB13_A0_A1
UART_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B0_UDB13_A0
UART_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B0_UDB13_A1
UART_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB13_D0_D1
UART_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B0_UDB13_D0
UART_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B0_UDB13_D1
UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB13_ACTL
UART_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB13_F0_F1
UART_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B0_UDB13_F0
UART_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B0_UDB13_F1
UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB14_15_ACTL
UART_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B0_UDB14_15_ST
UART_BUART_sRX_RxSts__3__MASK EQU 0x08
UART_BUART_sRX_RxSts__3__POS EQU 3
UART_BUART_sRX_RxSts__4__MASK EQU 0x10
UART_BUART_sRX_RxSts__4__POS EQU 4
UART_BUART_sRX_RxSts__5__MASK EQU 0x20
UART_BUART_sRX_RxSts__5__POS EQU 5
UART_BUART_sRX_RxSts__MASK EQU 0x38
UART_BUART_sRX_RxSts__MASK_REG EQU CYREG_B0_UDB14_MSK
UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB14_ACTL
UART_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B0_UDB14_ST
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B0_UDB14_15_A0
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B0_UDB14_15_A1
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B0_UDB14_15_D0
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B0_UDB14_15_D1
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB14_15_ACTL
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B0_UDB14_15_F0
UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B0_UDB14_15_F1
UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B0_UDB14_A0_A1
UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B0_UDB14_A0
UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B0_UDB14_A1
UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B0_UDB14_D0_D1
UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B0_UDB14_D0
UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B0_UDB14_D1
UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B0_UDB14_ACTL
UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B0_UDB14_F0_F1
UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B0_UDB14_F0
UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B0_UDB14_F1
UART_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB15_A0_A1
UART_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B0_UDB15_A0
UART_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B0_UDB15_A1
UART_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB15_D0_D1
UART_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B0_UDB15_D0
UART_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B0_UDB15_D1
UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB15_ACTL
UART_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB15_F0_F1
UART_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B0_UDB15_F0
UART_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B0_UDB15_F1
UART_BUART_sTX_TxSts__0__MASK EQU 0x01
UART_BUART_sTX_TxSts__0__POS EQU 0
UART_BUART_sTX_TxSts__1__MASK EQU 0x02
UART_BUART_sTX_TxSts__1__POS EQU 1
UART_BUART_sTX_TxSts__2__MASK EQU 0x04
UART_BUART_sTX_TxSts__2__POS EQU 2
UART_BUART_sTX_TxSts__3__MASK EQU 0x08
UART_BUART_sTX_TxSts__3__POS EQU 3
UART_BUART_sTX_TxSts__MASK EQU 0x0F
UART_BUART_sTX_TxSts__MASK_REG EQU CYREG_B0_UDB15_MSK
UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB15_ACTL
UART_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B0_UDB15_ST
UART_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
UART_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
UART_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
UART_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_IntClock__INDEX EQU 0x01
UART_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_IntClock__PM_ACT_MSK EQU 0x02
UART_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_IntClock__PM_STBY_MSK EQU 0x02

; LED_red
LED_red__0__INTTYPE EQU CYREG_PICU2_INTTYPE6
LED_red__0__MASK EQU 0x40
LED_red__0__PC EQU CYREG_PRT2_PC6
LED_red__0__PORT EQU 2
LED_red__0__SHIFT EQU 6
LED_red__AG EQU CYREG_PRT2_AG
LED_red__AMUX EQU CYREG_PRT2_AMUX
LED_red__BIE EQU CYREG_PRT2_BIE
LED_red__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LED_red__BYP EQU CYREG_PRT2_BYP
LED_red__CTL EQU CYREG_PRT2_CTL
LED_red__DM0 EQU CYREG_PRT2_DM0
LED_red__DM1 EQU CYREG_PRT2_DM1
LED_red__DM2 EQU CYREG_PRT2_DM2
LED_red__DR EQU CYREG_PRT2_DR
LED_red__INP_DIS EQU CYREG_PRT2_INP_DIS
LED_red__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LED_red__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LED_red__LCD_EN EQU CYREG_PRT2_LCD_EN
LED_red__MASK EQU 0x40
LED_red__PORT EQU 2
LED_red__PRT EQU CYREG_PRT2_PRT
LED_red__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LED_red__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LED_red__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LED_red__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LED_red__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LED_red__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LED_red__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LED_red__PS EQU CYREG_PRT2_PS
LED_red__SHIFT EQU 6
LED_red__SLW EQU CYREG_PRT2_SLW

; isr_adc
isr_adc__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_adc__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_adc__INTC_MASK EQU 0x01
isr_adc__INTC_NUMBER EQU 0
isr_adc__INTC_PRIOR_NUM EQU 7
isr_adc__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
isr_adc__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_adc__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; isr_btn
isr_btn__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_btn__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_btn__INTC_MASK EQU 0x02
isr_btn__INTC_NUMBER EQU 1
isr_btn__INTC_PRIOR_NUM EQU 7
isr_btn__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
isr_btn__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_btn__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; isr_uart
isr_uart__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_uart__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_uart__INTC_MASK EQU 0x04
isr_uart__INTC_NUMBER EQU 2
isr_uart__INTC_PRIOR_NUM EQU 7
isr_uart__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
isr_uart__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_uart__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

; LED_green
LED_green__0__INTTYPE EQU CYREG_PICU2_INTTYPE4
LED_green__0__MASK EQU 0x10
LED_green__0__PC EQU CYREG_PRT2_PC4
LED_green__0__PORT EQU 2
LED_green__0__SHIFT EQU 4
LED_green__AG EQU CYREG_PRT2_AG
LED_green__AMUX EQU CYREG_PRT2_AMUX
LED_green__BIE EQU CYREG_PRT2_BIE
LED_green__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LED_green__BYP EQU CYREG_PRT2_BYP
LED_green__CTL EQU CYREG_PRT2_CTL
LED_green__DM0 EQU CYREG_PRT2_DM0
LED_green__DM1 EQU CYREG_PRT2_DM1
LED_green__DM2 EQU CYREG_PRT2_DM2
LED_green__DR EQU CYREG_PRT2_DR
LED_green__INP_DIS EQU CYREG_PRT2_INP_DIS
LED_green__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LED_green__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LED_green__LCD_EN EQU CYREG_PRT2_LCD_EN
LED_green__MASK EQU 0x10
LED_green__PORT EQU 2
LED_green__PRT EQU CYREG_PRT2_PRT
LED_green__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LED_green__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LED_green__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LED_green__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LED_green__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LED_green__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LED_green__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LED_green__PS EQU CYREG_PRT2_PS
LED_green__SHIFT EQU 4
LED_green__SLW EQU CYREG_PRT2_SLW

; LED_yellow
LED_yellow__0__INTTYPE EQU CYREG_PICU2_INTTYPE5
LED_yellow__0__MASK EQU 0x20
LED_yellow__0__PC EQU CYREG_PRT2_PC5
LED_yellow__0__PORT EQU 2
LED_yellow__0__SHIFT EQU 5
LED_yellow__AG EQU CYREG_PRT2_AG
LED_yellow__AMUX EQU CYREG_PRT2_AMUX
LED_yellow__BIE EQU CYREG_PRT2_BIE
LED_yellow__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LED_yellow__BYP EQU CYREG_PRT2_BYP
LED_yellow__CTL EQU CYREG_PRT2_CTL
LED_yellow__DM0 EQU CYREG_PRT2_DM0
LED_yellow__DM1 EQU CYREG_PRT2_DM1
LED_yellow__DM2 EQU CYREG_PRT2_DM2
LED_yellow__DR EQU CYREG_PRT2_DR
LED_yellow__INP_DIS EQU CYREG_PRT2_INP_DIS
LED_yellow__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LED_yellow__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LED_yellow__LCD_EN EQU CYREG_PRT2_LCD_EN
LED_yellow__MASK EQU 0x20
LED_yellow__PORT EQU 2
LED_yellow__PRT EQU CYREG_PRT2_PRT
LED_yellow__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LED_yellow__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LED_yellow__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LED_yellow__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LED_yellow__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LED_yellow__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LED_yellow__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LED_yellow__PS EQU CYREG_PRT2_PS
LED_yellow__SHIFT EQU 5
LED_yellow__SLW EQU CYREG_PRT2_SLW

; Btn_startSample
Btn_startSample__0__INTTYPE EQU CYREG_PICU2_INTTYPE7
Btn_startSample__0__MASK EQU 0x80
Btn_startSample__0__PC EQU CYREG_PRT2_PC7
Btn_startSample__0__PORT EQU 2
Btn_startSample__0__SHIFT EQU 7
Btn_startSample__AG EQU CYREG_PRT2_AG
Btn_startSample__AMUX EQU CYREG_PRT2_AMUX
Btn_startSample__BIE EQU CYREG_PRT2_BIE
Btn_startSample__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Btn_startSample__BYP EQU CYREG_PRT2_BYP
Btn_startSample__CTL EQU CYREG_PRT2_CTL
Btn_startSample__DM0 EQU CYREG_PRT2_DM0
Btn_startSample__DM1 EQU CYREG_PRT2_DM1
Btn_startSample__DM2 EQU CYREG_PRT2_DM2
Btn_startSample__DR EQU CYREG_PRT2_DR
Btn_startSample__INP_DIS EQU CYREG_PRT2_INP_DIS
Btn_startSample__INTSTAT EQU CYREG_PICU2_INTSTAT
Btn_startSample__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Btn_startSample__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Btn_startSample__LCD_EN EQU CYREG_PRT2_LCD_EN
Btn_startSample__MASK EQU 0x80
Btn_startSample__PORT EQU 2
Btn_startSample__PRT EQU CYREG_PRT2_PRT
Btn_startSample__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Btn_startSample__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Btn_startSample__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Btn_startSample__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Btn_startSample__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Btn_startSample__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Btn_startSample__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Btn_startSample__PS EQU CYREG_PRT2_PS
Btn_startSample__SHIFT EQU 7
Btn_startSample__SLW EQU CYREG_PRT2_SLW
Btn_startSample__SNAP EQU CYREG_PICU2_SNAP

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
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
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E160069
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
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
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
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000006
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000003
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END