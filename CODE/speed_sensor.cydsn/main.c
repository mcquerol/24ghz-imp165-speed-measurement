#include "project.h"
#include "stdlib.h"

#include "statemachine.h"

/**
* Prototype of your own ISR
**/
CY_ISR_PROTO(isr_sampling_button);
CY_ISR_PROTO(isr_adc_eoc);
CY_ISR_PROTO(isr_uart_rx);

//function declarations
void init(void);


int main(void)
{
    CyGlobalIntEnable; 
    /* Enable global interrupts. */
    isr_btn_StartEx(isr_sampling_button);
    isr_uart_StartEx(isr_uart_rx);
    
    //initialize peripherals
    init();
    for(;;)
    {   
        stateMachine(state); //call state machine indefinitely
    }
}

/* init function
* initialize all the peripherals
* called before the switch case
* input parameters : NONE
* return : NONE
*/
void init()
{   
    ADC_Start();
    DAC_Start();
    UART_Start();
}


/** Button ISR
* This interrupt service routine will be called whenever a Button
rising edge interrupt occurs
**/
CY_ISR(isr_sampling_button)
{
    Btn_startSample_ClearInterrupt();
    state = STATE_SAMPLING;

}

/** ADC ISR
* This interrupt service routine will be called at the end of each conversion
**/
CY_ISR(isr_adc_eoc)
{
    if(ADC_IsEndConversion(ADC_WAIT_FOR_RESULT))
    {
        eoc = 1;
        ADC_StopConvert();
    }
}

/* UART ISR
* checks if the incoming data is 's' or 'o'
*/
CY_ISR(isr_uart_rx)
{
    ch = UART_GetChar();
    if(ch == 's')
    {
        charS = 1;   
    }
    if(ch == 'o')
    {
        charO = 1;
    } 
}
/* [] END OF FILE */
