#ifndef DMM_FUNC_H__
#define DMM_FUNC_H__

#include <xc.h>
#include <stdint.h>
#include "i2c-lib.h"

#define I2C_INA_ADDR  0x40
#define NVM_ADDR      0x1FA1
#define NVM_NUM_OF_BYTE_DATA 4

void dmm_init();
void i2c_reg_write(uint8_t regAddr, uint8_t dat0, uint8_t dat1);
uint16_t i2c_reg_read(uint8_t regAddr);
int16_t get_shunt_voltage(uint8_t regAddr);
void set_autorange_threshould();

float get_voltage();
float get_current();

uint8_t selftest();
void cal_offset();
void set_parameters();
void blink_led(uint8_t cnt);


#endif