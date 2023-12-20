/******************************************************************************
 * Module:
 *
 * File Name: Motor_Task.h
 *
 * Created on: Dec 5, 2023
 *
 * Description: Header File for the Motor Task
 *
 *******************************************************************************/
#ifndef APPLICATION_MOTOR_MOTOR_TASK_H_
#define APPLICATION_MOTOR_MOTOR_TASK_H_
/*******************************************************************************
 *                      Includes                                               *
 *******************************************************************************/
#include "motor.h"


/*******************************************************************************
 *                      Global Constant Macros                                 *
 *******************************************************************************/

/*******************************************************************************
 *                      Global Constant Macros                                 *
 *******************************************************************************/

/*******************************************************************************
 *                      Global Function Macros                                 *
 *******************************************************************************/


/*******************************************************************************
 *                      Global Data Types and Structures                       *
 *******************************************************************************/
typedef enum {
	Motor_init_mode,
	Motor_GoForward_mode,
	Motor_GoBackward_mode,
	Motor_GoRight_mode,
	Motor_GoLeft_mode,
	Motor_GoBackRight_mode,
	Motor_GoBackLeft_mode,
	Motor_stop_mode
}Motor_mode_t;

/*******************************************************************************
 *                      Global Data Prototypes                                 *
 *******************************************************************************/
extern Motor_mode_t Motor_mode;
extern u8 PWM_SPEED;
/*******************************************************************************
 *                      Global Function Prototypes                             *
 *******************************************************************************/
void Motor_Task(void * pvparam);



/*******************************************************************************
 *                      End of File: Motor_Task.h                                      *
 *******************************************************************************/
#endif /* APPLICATION_MOTOR_MOTOR_TASK_H_ */