################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Driver/LEDBAR/LEDBAR.c 

OBJS += \
./Src/Driver/LEDBAR/LEDBAR.o 

C_DEPS += \
./Src/Driver/LEDBAR/LEDBAR.d 


# Each subdirectory must supply rules for building sources it contributes
Src/Driver/LEDBAR/%.o Src/Driver/LEDBAR/%.su Src/Driver/LEDBAR/%.cyclo: ../Src/Driver/LEDBAR/%.c Src/Driver/LEDBAR/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0618_GPIO_Baremetal/Src/Driver/GPIO" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0618_GPIO_Baremetal/Src/Driver/LEDBAR" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-Driver-2f-LEDBAR

clean-Src-2f-Driver-2f-LEDBAR:
	-$(RM) ./Src/Driver/LEDBAR/LEDBAR.cyclo ./Src/Driver/LEDBAR/LEDBAR.d ./Src/Driver/LEDBAR/LEDBAR.o ./Src/Driver/LEDBAR/LEDBAR.su

.PHONY: clean-Src-2f-Driver-2f-LEDBAR

