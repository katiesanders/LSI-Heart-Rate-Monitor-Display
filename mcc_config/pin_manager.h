/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.3
        Device            :  PIC18F14K22
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define IO_RA0_TRIS                 TRISAbits.TRISA0
#define IO_RA0_LAT                  LATAbits.LATA0
#define IO_RA0_PORT                 PORTAbits.RA0
#define IO_RA0_WPU                  WPUAbits.WPUA0
#define IO_RA0_ANS                  ANSELbits.ANS0
#define IO_RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IO_RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IO_RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IO_RA0_GetValue()           PORTAbits.RA0
#define IO_RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IO_RA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IO_RA0_SetAnalogMode()      do { ANSELbits.ANS0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()     do { ANSELbits.ANS0 = 0; } while(0)

// get/set IO_RA1 aliases
#define IO_RA1_TRIS                 TRISAbits.TRISA1
#define IO_RA1_LAT                  LATAbits.LATA1
#define IO_RA1_PORT                 PORTAbits.RA1
#define IO_RA1_WPU                  WPUAbits.WPUA1
#define IO_RA1_ANS                  ANSELbits.ANS1
#define IO_RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_RA1_GetValue()           PORTAbits.RA1
#define IO_RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_RA1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define IO_RA1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define IO_RA1_SetAnalogMode()      do { ANSELbits.ANS1 = 1; } while(0)
#define IO_RA1_SetDigitalMode()     do { ANSELbits.ANS1 = 0; } while(0)

// get/set IO_RA2 aliases
#define IO_RA2_TRIS                 TRISAbits.TRISA2
#define IO_RA2_LAT                  LATAbits.LATA2
#define IO_RA2_PORT                 PORTAbits.RA2
#define IO_RA2_WPU                  WPUAbits.WPUA2
#define IO_RA2_ANS                  ANSELbits.ANS2
#define IO_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_RA2_GetValue()           PORTAbits.RA2
#define IO_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_RA2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_RA2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_RA2_SetAnalogMode()      do { ANSELbits.ANS2 = 1; } while(0)
#define IO_RA2_SetDigitalMode()     do { ANSELbits.ANS2 = 0; } while(0)

// get/set IO_RB4 aliases
#define IO_RB4_TRIS                 TRISBbits.TRISB4
#define IO_RB4_LAT                  LATBbits.LATB4
#define IO_RB4_PORT                 PORTBbits.RB4
#define IO_RB4_WPU                  WPUBbits.WPUB4
#define IO_RB4_ANS                  ANSELHbits.ANS10
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetAnalogMode()      do { ANSELHbits.ANS10 = 1; } while(0)
#define IO_RB4_SetDigitalMode()     do { ANSELHbits.ANS10 = 0; } while(0)

// get/set IO_RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_ANS                  ANSELHbits.ANS11
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELHbits.ANS11 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELHbits.ANS11 = 0; } while(0)

// get/set seg_f aliases
#define seg_f_TRIS                 TRISCbits.TRISC0
#define seg_f_LAT                  LATCbits.LATC0
#define seg_f_PORT                 PORTCbits.RC0
#define seg_f_ANS                  ANSELbits.ANS4
#define seg_f_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define seg_f_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define seg_f_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define seg_f_GetValue()           PORTCbits.RC0
#define seg_f_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define seg_f_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define seg_f_SetAnalogMode()      do { ANSELbits.ANS4 = 1; } while(0)
#define seg_f_SetDigitalMode()     do { ANSELbits.ANS4 = 0; } while(0)

// get/set seg_g aliases
#define seg_g_TRIS                 TRISCbits.TRISC1
#define seg_g_LAT                  LATCbits.LATC1
#define seg_g_PORT                 PORTCbits.RC1
#define seg_g_ANS                  ANSELbits.ANS5
#define seg_g_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define seg_g_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define seg_g_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define seg_g_GetValue()           PORTCbits.RC1
#define seg_g_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define seg_g_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define seg_g_SetAnalogMode()      do { ANSELbits.ANS5 = 1; } while(0)
#define seg_g_SetDigitalMode()     do { ANSELbits.ANS5 = 0; } while(0)

// get/set seg_e aliases
#define seg_e_TRIS                 TRISCbits.TRISC2
#define seg_e_LAT                  LATCbits.LATC2
#define seg_e_PORT                 PORTCbits.RC2
#define seg_e_ANS                  ANSELbits.ANS6
#define seg_e_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define seg_e_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define seg_e_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define seg_e_GetValue()           PORTCbits.RC2
#define seg_e_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define seg_e_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define seg_e_SetAnalogMode()      do { ANSELbits.ANS6 = 1; } while(0)
#define seg_e_SetDigitalMode()     do { ANSELbits.ANS6 = 0; } while(0)

// get/set seg_b aliases
#define seg_b_TRIS                 TRISCbits.TRISC4
#define seg_b_LAT                  LATCbits.LATC4
#define seg_b_PORT                 PORTCbits.RC4
#define seg_b_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define seg_b_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define seg_b_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define seg_b_GetValue()           PORTCbits.RC4
#define seg_b_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define seg_b_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set seg_a aliases
#define seg_a_TRIS                 TRISCbits.TRISC5
#define seg_a_LAT                  LATCbits.LATC5
#define seg_a_PORT                 PORTCbits.RC5
#define seg_a_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define seg_a_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define seg_a_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define seg_a_GetValue()           PORTCbits.RC5
#define seg_a_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define seg_a_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

// get/set seg_d aliases
#define seg_d_TRIS                 TRISCbits.TRISC6
#define seg_d_LAT                  LATCbits.LATC6
#define seg_d_PORT                 PORTCbits.RC6
#define seg_d_ANS                  ANSELHbits.ANS8
#define seg_d_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define seg_d_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define seg_d_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define seg_d_GetValue()           PORTCbits.RC6
#define seg_d_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define seg_d_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define seg_d_SetAnalogMode()      do { ANSELHbits.ANS8 = 1; } while(0)
#define seg_d_SetDigitalMode()     do { ANSELHbits.ANS8 = 0; } while(0)

// get/set seg_c aliases
#define seg_c_TRIS                 TRISCbits.TRISC7
#define seg_c_LAT                  LATCbits.LATC7
#define seg_c_PORT                 PORTCbits.RC7
#define seg_c_ANS                  ANSELHbits.ANS9
#define seg_c_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define seg_c_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define seg_c_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define seg_c_GetValue()           PORTCbits.RC7
#define seg_c_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define seg_c_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define seg_c_SetAnalogMode()      do { ANSELHbits.ANS9 = 1; } while(0)
#define seg_c_SetDigitalMode()     do { ANSELHbits.ANS9 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/