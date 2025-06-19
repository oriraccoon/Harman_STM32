################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Driver/SystemClock/SystemClock.c 

OBJS += \
./Src/Driver/SystemClock/SystemClock.o 

C_DEPS += \
./Src/Driver/SystemClock/SystemClock.d 


# Each subdirectory must supply rules for building sources it contributes
Src/Driver/SystemClock/%.o Src/Driver/SystemClock/%.su Src/Driver/SystemClock/%.cyclo: ../Src/Driver/SystemClock/%.c Src/Driver/SystemClock/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_BareMetal2/Src/Driver/SystemClock" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_BareMetal2/Src/Driver/GPIO" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_BareMetal2/Src/Driver/LEDBAR" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_BareMetal2/Src/Driver/BTN" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_BareMetal2/Src/ap" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-Driver-2f-SystemClock

clean-Src-2f-Driver-2f-SystemClock:
	-$(RM) ./Src/Driver/SystemClock/SystemClock.cyclo ./Src/Driver/SystemClock/SystemClock.d ./Src/Driver/SystemClock/SystemClock.o ./Src/Driver/SystemClock/SystemClock.su

.PHONY: clean-Src-2f-Driver-2f-SystemClock

