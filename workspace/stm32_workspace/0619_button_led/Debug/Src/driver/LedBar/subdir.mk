################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/driver/LedBar/LedBar.c 

OBJS += \
./Src/driver/LedBar/LedBar.o 

C_DEPS += \
./Src/driver/LedBar/LedBar.d 


# Each subdirectory must supply rules for building sources it contributes
Src/driver/LedBar/%.o Src/driver/LedBar/%.su Src/driver/LedBar/%.cyclo: ../Src/driver/LedBar/%.c Src/driver/LedBar/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_F411RE -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_button_led/Src/driver/GPIO" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_button_led/Src/driver/LedBar" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_button_led/Src/driver/SystemClock" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_button_led/Src/ap" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_button_led/Src/driver/Button" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_button_led/Src/driver/FND" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-driver-2f-LedBar

clean-Src-2f-driver-2f-LedBar:
	-$(RM) ./Src/driver/LedBar/LedBar.cyclo ./Src/driver/LedBar/LedBar.d ./Src/driver/LedBar/LedBar.o ./Src/driver/LedBar/LedBar.su

.PHONY: clean-Src-2f-driver-2f-LedBar

