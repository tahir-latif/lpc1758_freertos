/**
 * @file
 *
 * The purpose of this "C" callbacks is to provide the code to be able
 * to call pure C functions and unit-test it in C test framework
 */
#ifndef C_PRD_CALLBACKS_H__
#define C_PRD_CALLBACKS_H__
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

bool C_period_init(void);
bool C_period_reg_tlm(void);
void C_period_1Hz(uint32_t count);
void C_period_10Hz(uint32_t count);
void C_period_100Hz(uint32_t count);
void C_period_1000Hz(uint32_t count);

#ifdef __cplusplus
}
#endif
#endif
