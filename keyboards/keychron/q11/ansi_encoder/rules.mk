<<<<<<< HEAD
<<<<<<< HEAD
# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

SERIAL_DRIVER = usart
||||||| parent of 416af0171c (Remove CORTEX_ENABLE_WFI_IDLE from keyboards. (#21353))
# Build Options
#   change yes to no to disable
#
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = embedded_flash
||||||| parent of 8975dc6c3b (Remove duplication of STM32L432 EEPROM defaults (#21981))
# Build Options
#   change yes to no to disable
#
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = embedded_flash
=======
>>>>>>> 8975dc6c3b (Remove duplication of STM32L432 EEPROM defaults (#21981))
SERIAL_DRIVER = usart

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
=======
# Build Options
#   change yes to no to disable
#
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = embedded_flash
SERIAL_DRIVER = usart

>>>>>>> 416af0171c (Remove CORTEX_ENABLE_WFI_IDLE from keyboards. (#21353))
