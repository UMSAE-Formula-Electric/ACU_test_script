################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_data.c \
../Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_example_f32.c \
../Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/math_helper.c 

OBJS += \
./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_data.o \
./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_example_f32.o \
./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/math_helper.o 

C_DEPS += \
./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_data.d \
./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_example_f32.d \
./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/math_helper.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/%.o Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/%.su Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/%.cyclo: ../Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/%.c Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-CMSIS-2f-DSP-2f-Examples-2f-ARM-2f-arm_linear_interp_example

clean-Drivers-2f-CMSIS-2f-DSP-2f-Examples-2f-ARM-2f-arm_linear_interp_example:
	-$(RM) ./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_data.cyclo ./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_data.d ./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_data.o ./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_data.su ./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_example_f32.cyclo ./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_example_f32.d ./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_example_f32.o ./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/arm_linear_interp_example_f32.su ./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/math_helper.cyclo ./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/math_helper.d ./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/math_helper.o ./Drivers/CMSIS/DSP/Examples/ARM/arm_linear_interp_example/math_helper.su

.PHONY: clean-Drivers-2f-CMSIS-2f-DSP-2f-Examples-2f-ARM-2f-arm_linear_interp_example

