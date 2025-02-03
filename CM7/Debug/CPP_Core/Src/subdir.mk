################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../CPP_Core/Src/AccGyroSensor.cpp \
../CPP_Core/Src/BlinkingLed.cpp \
../CPP_Core/Src/IKS01A3Motion.cpp \
../CPP_Core/Src/NonBlockingSystemTickDelay.cpp \
../CPP_Core/Src/OLEDSSD1306.cpp \
../CPP_Core/Src/STM32H7Led.cpp 

OBJS += \
./CPP_Core/Src/AccGyroSensor.o \
./CPP_Core/Src/BlinkingLed.o \
./CPP_Core/Src/IKS01A3Motion.o \
./CPP_Core/Src/NonBlockingSystemTickDelay.o \
./CPP_Core/Src/OLEDSSD1306.o \
./CPP_Core/Src/STM32H7Led.o 

CPP_DEPS += \
./CPP_Core/Src/AccGyroSensor.d \
./CPP_Core/Src/BlinkingLed.d \
./CPP_Core/Src/IKS01A3Motion.d \
./CPP_Core/Src/NonBlockingSystemTickDelay.d \
./CPP_Core/Src/OLEDSSD1306.d \
./CPP_Core/Src/STM32H7Led.d 


# Each subdirectory must supply rules for building sources it contributes
CPP_Core/Src/%.o CPP_Core/Src/%.su CPP_Core/Src/%.cyclo: ../CPP_Core/Src/%.cpp CPP_Core/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++20 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -c -I../Core/Inc -I../CPP_Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -I../X-CUBE-MEMS1/Target -I../../Drivers/BSP/Components/lsm6dso -I../../Drivers/BSP/Components/lis2dw12 -I../../Drivers/BSP/Components/lis2mdl -I../../Drivers/BSP/Components/hts221 -I../../Drivers/BSP/Components/lps22hh -I../../Drivers/BSP/Components/stts751 -I../../Drivers/BSP/IKS01A3 -I../../Drivers/BSP/Components/Common -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-CPP_Core-2f-Src

clean-CPP_Core-2f-Src:
	-$(RM) ./CPP_Core/Src/AccGyroSensor.cyclo ./CPP_Core/Src/AccGyroSensor.d ./CPP_Core/Src/AccGyroSensor.o ./CPP_Core/Src/AccGyroSensor.su ./CPP_Core/Src/BlinkingLed.cyclo ./CPP_Core/Src/BlinkingLed.d ./CPP_Core/Src/BlinkingLed.o ./CPP_Core/Src/BlinkingLed.su ./CPP_Core/Src/IKS01A3Motion.cyclo ./CPP_Core/Src/IKS01A3Motion.d ./CPP_Core/Src/IKS01A3Motion.o ./CPP_Core/Src/IKS01A3Motion.su ./CPP_Core/Src/NonBlockingSystemTickDelay.cyclo ./CPP_Core/Src/NonBlockingSystemTickDelay.d ./CPP_Core/Src/NonBlockingSystemTickDelay.o ./CPP_Core/Src/NonBlockingSystemTickDelay.su ./CPP_Core/Src/OLEDSSD1306.cyclo ./CPP_Core/Src/OLEDSSD1306.d ./CPP_Core/Src/OLEDSSD1306.o ./CPP_Core/Src/OLEDSSD1306.su ./CPP_Core/Src/STM32H7Led.cyclo ./CPP_Core/Src/STM32H7Led.d ./CPP_Core/Src/STM32H7Led.o ./CPP_Core/Src/STM32H7Led.su

.PHONY: clean-CPP_Core-2f-Src

