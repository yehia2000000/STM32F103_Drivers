/*******************************************************************************/
/*******************************************************************************/
/***********************   GRADUATION PROJECT : (FOTA)   ***********************/
/***********************   Layer :MCAL                   ***********************/
/***********************   SWC (DRIVER):RCC 			 ***********************/
/***********************   DATA : 15-11-2021 			 ***********************/
/*******************************************************************************/
/*******************************************************************************/
#ifndef PORT_REGISTER_H_
#define PORT_REGISTER_H_

#define PORTA						(*((volatile u32 *)0x4001080c))
#define PORTB						(*((volatile u32 *)0x40010c0c))
#define PORTC						(*((volatile u32 *)0x4001100c))

#define DDRA_CRL					(*((volatile u32 *)0x40010800))
#define DDRA_CRH					(*((volatile u32 *)0x40010804))

#define DDRB_CRL				    (*((volatile u32 *)0x40010c00))
#define DDRB_CRH				    (*((volatile u32 *)0x40010c04))

#define DDRC_CRH				    (*((volatile u32 *)0x40011004))



#endif 
