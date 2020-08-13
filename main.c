/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.3
        Device            :  PIC18F14K22
        Driver Version    :  2.00
*/

#include "mcc_generated_files/mcc.h"
#include <xc.h>

/*
 Constants for a scaled, linear cardiac waveform display.
 */
const float pulse_rate = 60;
const float rep_rate_scaled = ((18000/pulse_rate)/9);
const float delay_scaled = ((1/(pulse_rate/60))*1000) - (18000/pulse_rate);

int state;
int state_change;

/*
 * Numbers to be shown on the monitor display.
 * PortC bits correspond to lettered display segments in the order: cdab(DP)egf.
 */
unsigned short display_digit(unsigned short digit) {
    switch(digit) { 
        case 0: return 0xA;
        case 1: return 0x6F;
        case 2: return 0x89;
        case 3: return 0xD;
        case 4: return 0x6C;
        case 5: return 0x1C;
        case 6: return 0x18;
        case 7: return 0x4F;
        case 8: return 0x8;
        case 9: return 0x4C;
        default: return 0x0;
    }
}

/*
 * Letters to be shown on the monitor display.
 */
unsigned short display_letter(char letter) {
    switch(letter) {
        case 'H': return 0x68;
        case 'R': return 0xCA;
        case 'S': return 0x1C;
        case 'P': return 0xC8;
        default: return 0x0;
    }        
}

/*
 * Displays one iteration of the SP02 reading.
 */
void display_sp02(void) {
    for (int i = 0; i <= 100; i++) {
        IO_RA0_SetHigh();
        IO_RA1_SetHigh();
        IO_RB4_SetHigh();
        __delay_ms(5);

        PORTC = display_digit(0);
        IO_RA0_SetHigh();
        IO_RA1_SetLow();
        IO_RB4_SetHigh();
        __delay_ms(5);

        PORTC = display_digit(2);
        IO_RA0_SetHigh();
        IO_RA1_SetHigh();
        IO_RB4_SetLow();
        __delay_ms(5);
    }
    for (int i = 0; i <= 100; i++) {
        IO_RA0_SetHigh();
        IO_RA1_SetHigh();
        IO_RB4_SetHigh();
        __delay_ms(5);

        PORTC = display_digit(9);
        IO_RA0_SetHigh();
        IO_RA1_SetLow();
        IO_RB4_SetHigh();
        __delay_ms(5);

        PORTC = display_digit(8);
        IO_RA0_SetHigh();
        IO_RA1_SetHigh();
        IO_RB4_SetLow();
        __delay_ms(5);
    }
    PORTC = 0xff;
}

void __interrupt(high_priority) button_push() {
    if (INTCON3bits.INT2IF == 1) {
        INTCON3bits.INT2IF = 0;
        state_change = 1;
    }
}

/*
 * Displays one iteration of the HR reading.
 */
void display_hr(void) {
    for (int i = 0; i <= 100; i++) {
        IO_RA0_SetHigh();
        IO_RA1_SetHigh();
        IO_RB4_SetHigh();
        __delay_ms(5);

        PORTC = display_letter('H');
        IO_RA0_SetHigh();
        IO_RA1_SetLow();
        IO_RB4_SetHigh();
        __delay_ms(5);

        PORTC = display_letter('R');
        IO_RA0_SetHigh();
        IO_RA1_SetHigh();
        IO_RB4_SetLow();
        __delay_ms(5);
    }
    for (int i = 0; i <= 100; i++) {
//        PORTC = display_digit(1);
        IO_RA0_SetHigh();
        IO_RA1_SetHigh();
        IO_RB4_SetHigh();
        __delay_ms(5);

        PORTC = display_digit(6);
        IO_RA0_SetHigh();
        IO_RA1_SetLow();
        IO_RB4_SetHigh();
        __delay_ms(5);

        PORTC = display_digit(0);
        IO_RA0_SetHigh();
        IO_RA1_SetHigh();
        IO_RB4_SetLow();
        __delay_ms(5);
    }
    PORTC = 0xff;
}

/*
 * Displays ten iterations of the corresponding cardiac waveform pulse.
 */
void linear_pulse(void) {
    for(int i = 0; i < 10; i++) {
        //leftmost digit
        PORTC = 0xEF;
        IO_RA0_SetLow();
        IO_RA1_SetHigh();
        IO_RB4_SetHigh();
        __delay_ms(rep_rate_scaled);

        //middle digit
        PORTC = 0xFE;
        IO_RA0_SetHigh();
        IO_RA1_SetLow();
        IO_RB4_SetHigh();
        __delay_ms(rep_rate_scaled);
        PORTC = 0xEF;
        __delay_ms(rep_rate_scaled);

        //rightmost digit
        PORTC = 0xFE;
        IO_RA0_SetHigh();
        IO_RA1_SetHigh();
        IO_RB4_SetLow();
        __delay_ms(rep_rate_scaled);
        PORTC = 0xEF;
        __delay_ms(rep_rate_scaled);
        PORTC = 0xFE;
        __delay_ms(rep_rate_scaled);

        //middle digit
        PORTC = 0xEF;
        IO_RA0_SetHigh();
        IO_RA1_SetLow();
        IO_RB4_SetHigh();
        __delay_ms(rep_rate_scaled);
        PORTC = 0xFE;
        __delay_ms(rep_rate_scaled);

        //leftmost digit
        PORTC = 0xEF;
        IO_RA0_SetLow();
        IO_RA1_SetHigh();
        IO_RB4_SetHigh();
        __delay_ms(rep_rate_scaled);

        PORTC = 0xFF;
        __delay_ms(delay_scaled);
    }
}

void main(void) {
    // General Setup
    SYSTEM_Initialize(); // Initialize the device
    ANSELbits.ANS2 = 0; //Digital input buffer of RC2 (button) is enabled 
    TRISC = 0x00; //Set PORTC as output
    PORTC = 0xff; //Turn PORTC off 
    TRISAbits.TRISA0 = 0; //Set pins RA0, RA1, RB4 as output
    TRISAbits.TRISA1 = 0;
    TRISBbits.TRISB4 = 0;
    TRISAbits.TRISA2 = 1; // Set pin RA2 as input for button press
    state = 0; // Currently displaying nothing
    state_change = false; // flag
    
    // Interrupt Setup
    RCONbits.IPEN = 0; // Interrupt priority feature disabled (mid-range compatibility mode)
    INTCON2bits.INTEDG2 = 0; // INT2 is triggered on the falling edge
    INTCON3bits.INT2IE = 1; // Enable external interrupt on INT2
    INTCON3bits.INT2IF = 0; // Set flag to zero (external interrupt did not occur)
    INTCONbits.GIE = 1; // Enable global interrupts
    
    // Timer Setup 
    INTCONbits.PEIE = 1; // Enable peripheral interrupts
    T0CONbits.T08BIT = 1; // Configured as 8-bit timer
    

    // Main Program -- Polling Solution
//    int cycle;
//    while(1) {
//        cycle = 0;
//        if (PORTAbits.RA2 == 0) {
//            cycle++;
//            __delay_ms(300);
//            for(int i = 0; i < 800; i++) {
//                if(PORTAbits.RA2 == 0) {
//                    cycle++;
//                    __delay_ms(200);
//                }
//                __delay_ms(1);
//            }
//            if (cycle == 1) {
//               display_hr(); 
//            } else if (cycle == 2) {
//                display_sp02();
//            } else if (cycle == 3) {
//                linear_pulse();
//            }
//        } 
//    } 
//}

    // Main Program -- Interrupt Solution
    // PROBLEM--HOW TO HANDLE IF BUTTON PRESS OCCURS WHILE DISPLAY HAPPENS?
    while(1) {
        if (state_change) {
            state++;
            // while the timer is running..increment the state
            state_change = 0;
        } else {
            switch(state) {
                case 0: break; // Do nothing
                case 1: 
                    display_hr();
                    break;
                case 2: 
                    display_sp02();
                    break;
                case 3: 
                    linear_pulse();
                    break;
                default: break;
            }
            state = 0;
        }
    }
}
/**
 End of File
*/