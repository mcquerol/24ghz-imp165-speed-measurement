#include "statemachine.h"

uint8 count; // number of samples read
uint16 sample[1024]; //sample array to store adc data
STATE_t state = STATE_IDLE; //state type global variable (idle default)
uint32 OutPut; // ADC output is 32 bit
uint16 OutPut_mv; // ADC 32 bit output is cast to 16 bit
uint8 high, low; // UART can only send 8 bits at a time so 16 bit is split into low byte and high byte
uint8 ch;  // store the char sent by MATLAB through UART

int charS = 0;
int charO = 0;

/* stateMachine function
* sets global counter variable to 0
* input parameters : STATE_t state
* return : NONE
*/
void stateMachine(STATE_t state)
{
    switch(state)
        {
            case STATE_SAMPLING:
                LED_yellow_Write(1);
                sampling();
                LED_yellow_Write(0);
                break;
            case STATE_UART_TRANSFER:
                LED_green_Write(1);
                uartTransfer();
                LED_green_Write(0);
                break;
            case STATE_IDLE:
                LED_red_Write(1);
                idle(); // default state is the STATE_IDLE
                LED_red_Write(0);
                break;
        } 
}

/* idle function
* sets global counter variable to 0
* caused by STATE_IDLE
* input parameters : NONE
* return : NONE
*/
void idle()
{
    //UART_PutString("IDLE\n");
    count = 0;
    
}

/* sampling function
* copies adc value into the sample array while uart char is not 's'
* caused by STATE_IDLE
* input parameters : NONE
* return : NONE
*/
void sampling()
{
   //UART_PutString("SAMPLING\n");
   for (int count_sample=0;count_sample<1024;count_sample++)
   {
       OutPut = ADC_Read32();
       OutPut_mv = (uint16_t)OutPut;
       high = (OutPut_mv>>8) & 0xFF;
       low = OutPut_mv & 0xFF;
       sample[count_sample]=OutPut_mv;//low;
   }
    ch = UART_GetChar();
    if (charS == 1) //check for s character
   {
        state = STATE_UART_TRANSFER;
   }
    
    
}

/* uart_transfer function
* checks if 'o' is recieved by matlab and checks the number of samples accordingy
* caused by STATE_UART_TRANSFER
* input parameters : NONE
* return : NONE
*/
void uartTransfer()
{
    //UART_PutString("UART TRANSFER\n");
    for (int count_send=0;count_send<1024;count_send++)
    {
       uint8 low = (sample[count_send]) & 0xFF;
       UART_PutChar(low);
       uint8 high =((sample[count_send]>>8) & 0xFF);
       UART_PutChar(high);
    }

    count++;
    
    if(charO == 1)
    {
        if(count < 10)
        {
            state = STATE_SAMPLING;
            return;
        }
        else if(count == 10 || count > 10)
        {
            state = STATE_IDLE;
            return;
        }
    }
}




/* [] END OF FILE */
