#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_INTERFACE.h"
#include "TIMER_TEST_interface.h"
#include "EXTI_interface.h"
#include "GIE_interface.h"
#include "CLCD_interface.h"
#include <util/delay.h>
#include <avr/interrupt.h>


/**************************** SW ICU*********************/
//static u16 PeriodTicks=0;
//static u16 OnTicks=0;
//ISR(INT0_vect)
//{
//static u8 Local_u8Counter=0;
//Local_u8Counter++;
//if(Local_u8Counter==1)
//{/*first Rising edge*/
//	TIMER1_voidSetTimerValue(0);
//}
//else if(Local_u8Counter==2)
//{
//	PeriodTicks=Timer1_u16GetTimerValue();
//EXTI_u8SenseControl(INT0,FALLING_EDGE);
//}
//else if(Local_u8Counter==3)
//{
//	OnTicks=Timer1_u16GetTimerValue();
//	OnTicks=OnTicks-PeriodTicks;
//
///*disable the interrupt*/
//	EXTI_u8IntDisable(INT0);
//
//}
//
//}
//
//int main()
//{/*PWM*/
//	DIO_u8SetPinDir(DIO_PORTB,DIO_PIN3,DIO_PIN_OUT);
//	/*EXT0*/
//	DIO_u8SetPinDir(DIO_PORTD,DIO_PIN2,DIO_PIN_IN);
///*LCD*/
//	DIO_u8SetPortDir(DIO_PORTC,DIO_PORT_OUT);
//	DIO_u8SetPinDir(DIO_PORTA,DIO_PIN0,DIO_PIN_OUT);
//	DIO_u8SetPinDir(DIO_PORTA,DIO_PIN1,DIO_PIN_OUT);
//	DIO_u8SetPinDir(DIO_PORTA,DIO_PIN2,DIO_PIN_OUT);
//
//
//EXTI_u8SenseControl(INT0,RISING_EDGE);
//EXTI_u8IntEnable(INT0);
//CLCD_voidInit();
//TIMER1_voidNormalInit();
//TIMER0_voidCtcValue(64);
//TIMER0_voidPWMFastInit();
//GIE_voidEnable();
//
//while(1)
//{
//	/*Wait until measured*/
//	while((PeriodTicks==0)&&(OnTicks==0));
//CLCD_voidGoToXY(0,0);
//CLCD_voidSendString("PeriodTicks :");
//CLCD_voidWriteNumber(PeriodTicks);
//CLCD_voidGoToXY(1,0);
//CLCD_voidSendString("OnTick :");
//CLCD_voidWriteNumber(OnTicks);
//}
//
//}

/*****************************HW ICU**************************/
//static u16 PeriodTicks=0;
//	static u16 Ontime=0;
//	static u16 Reading_1,Reading_2,Reading_3;
//ISR(TIMER1_CAPT_vect)
//{
//
//	static u16 Counter=0;
//	Counter++;
//	if(Counter==1)
//	{
//
//		Reading_1=ICU_u16ReadICU();
//	}
//	else if(Counter==2)
//	{
//		Reading_2=ICU_u16ReadICU();
//		PeriodTicks=Reading_2-Reading_1;
//		ICU_voidTriggerEdge(FALL);
//	}else if (Counter==3)
//	{
//		Reading_3 = ICU_u16ReadICU();
//		Ontime=Reading_3 - Reading_2;
//ICU_voidDisableIntrupt();
//	}
//
//
//}
//
//
//int main()
//{/*PWM*/
//	DIO_u8SetPinDir(DIO_PORTB,DIO_PIN3,DIO_PIN_OUT);
//	/*ICU*/
//	DIO_u8SetPinDir(DIO_PORTD,DIO_PIN6,DIO_PIN_IN);
///*LCD*/
//	DIO_u8SetPortDir(DIO_PORTC,DIO_PORT_OUT);
//	DIO_u8SetPinDir(DIO_PORTA,DIO_PIN0,DIO_PIN_OUT);
//	DIO_u8SetPinDir(DIO_PORTA,DIO_PIN1,DIO_PIN_OUT);
//	DIO_u8SetPinDir(DIO_PORTA,DIO_PIN2,DIO_PIN_OUT);
//
//CLCD_voidInit();
//ICU_voidInit();
//
//TIMER1_voidNormalInit();
//
//TIMER0_voidCtcValue(64);
//TIMER0_voidPWMFastInit();
//
//GIE_voidEnable();
//
//while(1)
//{
//	/*Wait until measured*/
//	while((PeriodTicks==0)&&(Ontime==0));
//CLCD_voidGoToXY(0,0);
//CLCD_voidSendString("PeriodTicks :");
//CLCD_voidWriteNumber(PeriodTicks);
//CLCD_voidGoToXY(1,0);
//CLCD_voidSendString("OnTick :");
//CLCD_voidWriteNumber(Ontime);
//}
//}






