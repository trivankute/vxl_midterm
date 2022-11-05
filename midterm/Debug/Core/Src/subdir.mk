################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/10second_timer.c \
../Core/Src/LED_BLINKY_timer.c \
../Core/Src/auto_count_down_timer.c \
../Core/Src/buttons_processing.c \
../Core/Src/buttons_reading.c \
../Core/Src/display_7_segment.c \
../Core/Src/fsm_simple_buttons_run.c \
../Core/Src/global.c \
../Core/Src/main.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/timer.c 

OBJS += \
./Core/Src/10second_timer.o \
./Core/Src/LED_BLINKY_timer.o \
./Core/Src/auto_count_down_timer.o \
./Core/Src/buttons_processing.o \
./Core/Src/buttons_reading.o \
./Core/Src/display_7_segment.o \
./Core/Src/fsm_simple_buttons_run.o \
./Core/Src/global.o \
./Core/Src/main.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/timer.o 

C_DEPS += \
./Core/Src/10second_timer.d \
./Core/Src/LED_BLINKY_timer.d \
./Core/Src/auto_count_down_timer.d \
./Core/Src/buttons_processing.d \
./Core/Src/buttons_reading.d \
./Core/Src/display_7_segment.d \
./Core/Src/fsm_simple_buttons_run.d \
./Core/Src/global.d \
./Core/Src/main.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/timer.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

