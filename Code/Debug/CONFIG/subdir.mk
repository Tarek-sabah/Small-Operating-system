################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CONFIG/Dio_Lcfg.c \
../CONFIG/EXTI_Lcfg.c \
../CONFIG/LED_Lcfg.c \
../CONFIG/Port_Lcfg.c \
../CONFIG/TIEMR1_Lcfg.c 

OBJS += \
./CONFIG/Dio_Lcfg.o \
./CONFIG/EXTI_Lcfg.o \
./CONFIG/LED_Lcfg.o \
./CONFIG/Port_Lcfg.o \
./CONFIG/TIEMR1_Lcfg.o 

C_DEPS += \
./CONFIG/Dio_Lcfg.d \
./CONFIG/EXTI_Lcfg.d \
./CONFIG/LED_Lcfg.d \
./CONFIG/Port_Lcfg.d \
./CONFIG/TIEMR1_Lcfg.d 


# Each subdirectory must supply rules for building sources it contributes
CONFIG/%.o: ../CONFIG/%.c CONFIG/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\Tarek\Work\Learning\NTI\4 Months Program\AVR\AVR Projects\Small OS\Code\MCAL\TIMER1" -I"D:\Tarek\Work\Learning\NTI\4 Months Program\AVR\AVR Projects\Small OS\Code\MCAL\EXTI" -I"D:\Tarek\Work\Learning\NTI\4 Months Program\AVR\AVR Projects\Small OS\Code\HAL\LED" -I"D:\Tarek\Work\Learning\NTI\4 Months Program\AVR\AVR Projects\Small OS\Code\APP" -I"D:\Tarek\Work\Learning\NTI\4 Months Program\AVR\AVR Projects\Small OS\Code\CONFIG" -I"D:\Tarek\Work\Learning\NTI\4 Months Program\AVR\AVR Projects\Small OS\Code\HAL" -I"D:\Tarek\Work\Learning\NTI\4 Months Program\AVR\AVR Projects\Small OS\Code\LIB" -I"D:\Tarek\Work\Learning\NTI\4 Months Program\AVR\AVR Projects\Small OS\Code\MCAL" -I"D:\Tarek\Work\Learning\NTI\4 Months Program\AVR\AVR Projects\Small OS\Code\MCAL\DIO" -I"D:\Tarek\Work\Learning\NTI\4 Months Program\AVR\AVR Projects\Small OS\Code\MCAL\GID" -I"D:\Tarek\Work\Learning\NTI\4 Months Program\AVR\AVR Projects\Small OS\Code\MCAL\PORT" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


