################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Driver/GPIO/GPIO.c 

OBJS += \
./Src/Driver/GPIO/GPIO.o 

C_DEPS += \
./Src/Driver/GPIO/GPIO.d 


# Each subdirectory must supply rules for building sources it contributes
Src/Driver/GPIO/%.o Src/Driver/GPIO/%.su Src/Driver/GPIO/%.cyclo: ../Src/Driver/GPIO/%.c Src/Driver/GPIO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0618_GPIO_Baremetal/Src/Driver/GPIO" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0618_GPIO_Baremetal/Src/Driver/LEDBAR" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-Driver-2f-GPIO

clean-Src-2f-Driver-2f-GPIO:
	-$(RM) ./Src/Driver/GPIO/GPIO.cyclo ./Src/Driver/GPIO/GPIO.d ./Src/Driver/GPIO/GPIO.o ./Src/Driver/GPIO/GPIO.su

.PHONY: clean-Src-2f-Driver-2f-GPIO

