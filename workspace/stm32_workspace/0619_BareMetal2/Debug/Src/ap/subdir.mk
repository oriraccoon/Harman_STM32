################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/ap/ap_main.c 

OBJS += \
./Src/ap/ap_main.o 

C_DEPS += \
./Src/ap/ap_main.d 


# Each subdirectory must supply rules for building sources it contributes
Src/ap/%.o Src/ap/%.su Src/ap/%.cyclo: ../Src/ap/%.c Src/ap/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_BareMetal2/Src/Driver/SystemClock" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_BareMetal2/Src/Driver/GPIO" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_BareMetal2/Src/Driver/LEDBAR" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_BareMetal2/Src/Driver/BTN" -I"C:/Users/kccistc/Documents/GitHub/Harman_STM32/workspace/stm32_workspace/0619_BareMetal2/Src/ap" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-ap

clean-Src-2f-ap:
	-$(RM) ./Src/ap/ap_main.cyclo ./Src/ap/ap_main.d ./Src/ap/ap_main.o ./Src/ap/ap_main.su

.PHONY: clean-Src-2f-ap

