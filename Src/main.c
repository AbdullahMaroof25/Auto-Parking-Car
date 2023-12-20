/*******************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------
 * Module:
 *
 * File Name: main.c
 *
 * Created on:  Nov 15, 2023
 *
 * Description: Source file for the Main Function for Self Parking Project
 *
 *
 *******************************************************************************/

/*******************************************************************************
 *                      Includes                                               *
 *******************************************************************************/
#include "main.h"
/*******************************************************************************
 *                      Local Data                                             *
 *******************************************************************************/

/*******************************************************************************
 *                      Global Data                                            *
 *******************************************************************************/

/*******************************************************************************
 *                      ISR's Definitions                                      *
 *******************************************************************************/

/*******************************************************************************
 *                      Private Functions Prototypes                           *
 *******************************************************************************/
/*******************************************************************************
 *                      Private Functions Definitions                          *
 *******************************************************************************/

/*******************************************************************************
 *                      		Main Functions                                 *
 *******************************************************************************/
int main(void)
{
	Sytem_Init();

	BaseType_t xReturned;
	TaskHandle_t UltraSonic_Read_Handle = NULL;

	/* Create the task, storing the handle. */
	xReturned = xTaskCreate(
			UltraSonic_Read_Task,       /* Function that implements the task. */
			"UltraSonic_Read",          /* Text name for the task. */
			100,      /* Stack size in words, not bytes. */
			( void * ) 1,    /* Parameter passed into the task. */
			2,/* Priority at which the task is created. */
			&UltraSonic_Read_Handle );      /* Used to pass out the created task's handle. */


	/* Creation of the Motor task*/
	xTaskHandle Motor_Task_Handle  = NULL;
	xReturned = xTaskCreate((TaskFunction_t)Motor_Task,(const char * const)"Motor TASK",100,( void * ) 1,3,&Motor_Task_Handle);

	/* Creation of the Application task*/
	xTaskHandle App_Task_Handle  = NULL;
	xReturned = xTaskCreate((TaskFunction_t)App_Task,(const char * const)"App TASK",100,( void * ) 1,1,&App_Task_Handle);

	if ( xReturned == 0 )
	{

	}
	vTaskStartScheduler();

	/* Loop forever */
	for(;;)
	{

	}
}

void Sytem_Init(void)
{
	rcc_setSystemClk(HSI);

	rcc_enablePeriClk(APB2,TIM8_EN);
	rcc_enablePeriClk(APB2,TIM1_EN);
	rcc_enablePeriClk(APB1,TIM2_EN);
	rcc_enablePeriClk(APB1,TIM6_EN);

	rcc_enablePeriClk(AHB,DMA1_EN);
	rcc_enablePeriClk(AHB,DMA2_EN);

	rcc_enablePeriClk(AHB,IOPA_EN);
	rcc_enablePeriClk(AHB,IOPB_EN);
	rcc_enablePeriClk(AHB,IOPC_EN);

	TIM6_Init(7);




	Ultrasonic_init();

}


/*******************************************************************************
 *                      End of File: main.c                                        *
 *******************************************************************************/

