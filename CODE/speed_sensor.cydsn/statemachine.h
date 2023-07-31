#ifndef STATEMACHINE_H
#define STATEMACHINE_H
    
#include "project.h"
    
/** STATE_t typedef enum
* this is an enum that defines each state of the state machine,
*/
typedef enum {
    
    STATE_IDLE,
    STATE_SAMPLING,
    STATE_UART_TRANSFER
    
} STATE_t;
    

//function declarations
void stateMachine(STATE_t state);
void idle(void);
void sampling(void);
void uartTransfer(void);

/* GLOBAL VARIABLES */

extern uint8 count; // number of samples read
extern uint16 sample[1024]; //sample array to store adc data
extern STATE_t state; //state type global variable (idle default)
extern uint32 OutPut; // ADC output is 32 bit
extern uint16 OutPut_mv; // ADC 32 bit output is cast to 16 bit
extern uint8 high, low; // UART can only send 8 bits at a time so 16 bit is split into low byte and high byte
extern uint8 ch;  // store the char sent by MATLAB through UART

/* ISR FLAGS */

static uint8 eoc; // ADC ISR flag
extern int charS; // becomes 1 when UART char recieved is 's'
extern int charO; // becomes 1 when UART char recieved is 'o'

#endif

/* [] END OF FILE */
