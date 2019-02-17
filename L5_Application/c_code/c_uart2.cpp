#include "c_uart2.h"
#include "uart2.hpp"

// Assuming UART2 is already initialized
// You may want to also add uart2_init() in C

bool uart2_getchar(char *byte, uint32_t timeout_ms) {
    Uart2::getInstance().getChar(byte, timeout_ms);
}
