/**
 * @file
 *
 * The purpose of this "C" callbacks is to provide the code to be able
 * to call pure C functions and unit-test it in C test framework
 */
#include <stdint.h>
#include <stdbool.h>
#include "c_uart2.h"



bool C_period_init(void) {
    return true;
}
bool C_period_reg_tlm(void) {
    return true;
}

void C_period_1Hz(uint32_t count) {
    (void) count;

    char byte = 0;
    if (uart2_getchar(&byte, 0)) {

    }
}

void C_period_10Hz(uint32_t count) {
    (void) count;
}

void C_period_100Hz(uint32_t count) {
    (void) count;
}

void C_period_1000Hz(uint32_t count) {
    (void) count;
}
