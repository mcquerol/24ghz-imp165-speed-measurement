/*******************************************************************************
* File Name: DAC.h  
* Version 2.10
*
* Description:
*  This file contains the function prototypes and constants used in
*  the 8-bit Waveform DAC (WaveDAC8) Component.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_WaveDAC8_DAC_H) 
#define CY_WaveDAC8_DAC_H

#include "cytypes.h"
#include "cyfitter.h"
#include <DAC_Wave1_DMA_dma.h>
#include <DAC_Wave2_DMA_dma.h>
#include <DAC_VDAC8.h>


/***************************************
*  Initial Parameter Constants
***************************************/

#define DAC_WAVE1_TYPE     (0u)     /* Waveform for wave1 */
#define DAC_WAVE2_TYPE     (2u)     /* Waveform for wave2 */
#define DAC_SINE_WAVE      (0u)
#define DAC_SQUARE_WAVE    (1u)
#define DAC_TRIANGLE_WAVE  (2u)
#define DAC_SAWTOOTH_WAVE  (3u)
#define DAC_ARB_DRAW_WAVE  (10u) /* Arbitrary (draw) */
#define DAC_ARB_FILE_WAVE  (11u) /* Arbitrary (from file) */

#define DAC_WAVE1_LENGTH   (1000u)   /* Length for wave1 */
#define DAC_WAVE2_LENGTH   (100u)   /* Length for wave2 */
	
#define DAC_DEFAULT_RANGE    (1u) /* Default DAC range */
#define DAC_DAC_RANGE_1V     (0u)
#define DAC_DAC_RANGE_1V_BUF (16u)
#define DAC_DAC_RANGE_4V     (1u)
#define DAC_DAC_RANGE_4V_BUF (17u)
#define DAC_VOLT_MODE        (0u)
#define DAC_CURRENT_MODE     (1u)
#define DAC_DAC_MODE         (((DAC_DEFAULT_RANGE == DAC_DAC_RANGE_1V) || \
									  (DAC_DEFAULT_RANGE == DAC_DAC_RANGE_4V) || \
							  		  (DAC_DEFAULT_RANGE == DAC_DAC_RANGE_1V_BUF) || \
									  (DAC_DEFAULT_RANGE == DAC_DAC_RANGE_4V_BUF)) ? \
									   DAC_VOLT_MODE : DAC_CURRENT_MODE)

#define DAC_DACMODE DAC_DAC_MODE /* legacy definition for backward compatibility */

#define DAC_DIRECT_MODE (0u)
#define DAC_BUFFER_MODE (1u)
#define DAC_OUT_MODE    (((DAC_DEFAULT_RANGE == DAC_DAC_RANGE_1V_BUF) || \
								 (DAC_DEFAULT_RANGE == DAC_DAC_RANGE_4V_BUF)) ? \
								  DAC_BUFFER_MODE : DAC_DIRECT_MODE)

#if(DAC_OUT_MODE == DAC_BUFFER_MODE)
    #include <DAC_BuffAmp.h>
#endif /* DAC_OUT_MODE == DAC_BUFFER_MODE */

#define DAC_CLOCK_INT      (1u)
#define DAC_CLOCK_EXT      (0u)
#define DAC_CLOCK_SRC      (1u)

#if(DAC_CLOCK_SRC == DAC_CLOCK_INT)  
	#include <DAC_DacClk.h>
	#if defined(DAC_DacClk_PHASE)
		#define DAC_CLK_PHASE_0nS (1u)
	#endif /* defined(DAC_DacClk_PHASE) */
#endif /* DAC_CLOCK_SRC == DAC_CLOCK_INT */

#if (CY_PSOC3)
	#define DAC_HI16FLASHPTR   (0xFFu)
#endif /* CY_PSOC3 */

#define DAC_Wave1_DMA_BYTES_PER_BURST      (1u)
#define DAC_Wave1_DMA_REQUEST_PER_BURST    (1u)
#define DAC_Wave2_DMA_BYTES_PER_BURST      (1u)
#define DAC_Wave2_DMA_REQUEST_PER_BURST    (1u)


/***************************************
*   Data Struct Definition
***************************************/

/* Low power Mode API Support */
typedef struct
{
	uint8   enableState;
}DAC_BACKUP_STRUCT;


/***************************************
*        Function Prototypes 
***************************************/

void DAC_Start(void)             ;
void DAC_StartEx(const uint8 * wavePtr1, uint16 sampleSize1, const uint8 * wavePtr2, uint16 sampleSize2)
                                        ;
void DAC_Init(void)              ;
void DAC_Enable(void)            ;
void DAC_Stop(void)              ;

void DAC_Wave1Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;
void DAC_Wave2Setup(const uint8 * wavePtr, uint16 sampleSize)
                                        ;

void DAC_Sleep(void)             ;
void DAC_Wakeup(void)            ;

#define DAC_SetSpeed       DAC_VDAC8_SetSpeed
#define DAC_SetRange       DAC_VDAC8_SetRange
#define DAC_SetValue       DAC_VDAC8_SetValue
#define DAC_DacTrim        DAC_VDAC8_DacTrim
#define DAC_SaveConfig     DAC_VDAC8_SaveConfig
#define DAC_RestoreConfig  DAC_VDAC8_RestoreConfig


/***************************************
*    Variable with external linkage 
***************************************/

extern uint8 DAC_initVar;

extern const uint8 CYCODE DAC_wave1[DAC_WAVE1_LENGTH];
extern const uint8 CYCODE DAC_wave2[DAC_WAVE2_LENGTH];


/***************************************
*            API Constants
***************************************/

/* SetRange constants */
#if(DAC_DAC_MODE == DAC_VOLT_MODE)
    #define DAC_RANGE_1V       (0x00u)
    #define DAC_RANGE_4V       (0x04u)
#else /* current mode */
    #define DAC_RANGE_32uA     (0x00u)
    #define DAC_RANGE_255uA    (0x04u)
    #define DAC_RANGE_2mA      (0x08u)
    #define DAC_RANGE_2048uA   DAC_RANGE_2mA
#endif /* DAC_DAC_MODE == DAC_VOLT_MODE */

/* Power setting for SetSpeed API */
#define DAC_LOWSPEED       (0x00u)
#define DAC_HIGHSPEED      (0x02u)


/***************************************
*              Registers        
***************************************/

#define DAC_DAC8__D DAC_VDAC8_viDAC8__D


/***************************************
*         Register Constants       
***************************************/

/* CR0 vDac Control Register 0 definitions */

/* Bit Field  DAC_HS_MODE */
#define DAC_HS_MASK        (0x02u)
#define DAC_HS_LOWPOWER    (0x00u)
#define DAC_HS_HIGHSPEED   (0x02u)

/* Bit Field  DAC_MODE */
#define DAC_MODE_MASK      (0x10u)
#define DAC_MODE_V         (0x00u)
#define DAC_MODE_I         (0x10u)

/* Bit Field  DAC_RANGE */
#define DAC_RANGE_MASK     (0x0Cu)
#define DAC_RANGE_0        (0x00u)
#define DAC_RANGE_1        (0x04u)
#define DAC_RANGE_2        (0x08u)
#define DAC_RANGE_3        (0x0Cu)
#define DAC_IDIR_MASK      (0x04u)

#define DAC_DAC_RANGE      ((uint8)(1u << 2u) & DAC_RANGE_MASK)
#define DAC_DAC_POL        ((uint8)(1u >> 1u) & DAC_IDIR_MASK)


#endif /* CY_WaveDAC8_DAC_H  */

/* [] END OF FILE */
