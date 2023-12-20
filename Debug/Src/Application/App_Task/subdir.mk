################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Application/App_Task/App_Task.c 

OBJS += \
./Src/Application/App_Task/App_Task.o 

C_DEPS += \
./Src/Application/App_Task/App_Task.d 


# Each subdirectory must supply rules for building sources it contributes
Src/Application/App_Task/App_Task.o: ../Src/Application/App_Task/App_Task.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F3 -DDEBUG -DSTM32F303RETx -DNUCLEO_F303RE -c -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/LIB" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/MCAL/rcc/inc" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/MCAL/Tim6" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/MCAL/DMA" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/MCAL/ICU/Inc" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/MCAL/PWM/Inc" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/MCAL/dio/inc" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/HAL/UltraSonic/Inc" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/HAL/LED" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/HAL/Motor/inc" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/Application/motor" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/Services/FreeRTOS/Source/include" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/Services/FreeRTOS" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/Services/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/Application/UltraSonic_Task" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/Application/motor" -I"E:/WS/NTI_4M/Final_Project/Self Parking/Src/Application/App_Task" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/Application/App_Task/App_Task.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

