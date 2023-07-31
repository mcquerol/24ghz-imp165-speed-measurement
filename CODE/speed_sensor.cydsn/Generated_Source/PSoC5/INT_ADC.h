/*******************************************************************************
* File Name: INT_ADC.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_INT_ADC_H)
#define CY_ISR_INT_ADC_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void INT_ADC_Start(void);
void INT_ADC_StartEx(cyisraddress address);
void INT_ADC_Stop(void);

CY_ISR_PROTO(INT_ADC_Interrupt);

void INT_ADC_SetVector(cyisraddress address);
cyisraddress INT_ADC_GetVector(void);

void INT_ADC_SetPriority(uint8 priority);
uint8 INT_ADC_GetPriority(void);

void INT_ADC_Enable(void);
uint8 INT_ADC_GetState(void);
void INT_ADC_Disable(void);

void INT_ADC_SetPending(void);
void INT_ADC_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the INT_ADC ISR. */
#define INT_ADC_INTC_VECTOR            ((reg32 *) INT_ADC__INTC_VECT)

/* Address of the INT_ADC ISR priority. */
#define INT_ADC_INTC_PRIOR             ((reg8 *) INT_ADC__INTC_PRIOR_REG)

/* Priority of the INT_ADC interrupt. */
#define INT_ADC_INTC_PRIOR_NUMBER      INT_ADC__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable INT_ADC interrupt. */
#define INT_ADC_INTC_SET_EN            ((reg32 *) INT_ADC__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the INT_ADC interrupt. */
#define INT_ADC_INTC_CLR_EN            ((reg32 *) INT_ADC__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the INT_ADC interrupt state to pending. */
#define INT_ADC_INTC_SET_PD            ((reg32 *) INT_ADC__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the INT_ADC interrupt. */
#define INT_ADC_INTC_CLR_PD            ((reg32 *) INT_ADC__INTC_CLR_PD_REG)


#endif /* CY_ISR_INT_ADC_H */


/* [] END OF FILE */
