/*******************************************************************************/
/*******************************************************************************/
/***********************   GRADUATION PROJECT : (FOTA)   ***********************/
/***********************   Layer :MCAL                   ***********************/
/***********************   SWC (DRIVER):NVIC 			 ***********************/
/***********************   DATA : 2-4-2022 			 ***********************/
/*******************************************************************************/


#ifndef NVIC_REGISTER_H_
#define NVIC_REGISTER_H_
/**
 * @def Register of NVIC core peripheral
 * 		EXTRA_BYTE : this is the gap between registers
 */
typedef struct
{
	volatile u32 ISER[3];
	volatile u32 EXTRA_BYTE[17];
	volatile u32 ICER[3];
	volatile u32 EXTRA_BYTE1[2];
	volatile u32 ISPR[3];
	volatile u32 EXTRA_BYTE2[17];
	volatile u32 ICPR[3];
	volatile u32 EXTRA_BYTE3[2];
	volatile u32 IABR[3];
	volatile u32 EXTRA_BYTE4[17];
	volatile u8  IPR[59];


}NVIC_S;
/**
 * @def Offset of the NVIC core peripheral
 */
#define NVIC 	((volatile NVIC_S*) 0xE000E100)
/**
 * @def this register that control Type of interrupt Grouping
 */
#define  SCB_AIRCR *((volatile u32 *)  0xE000E008 +0x0C)





#endif
