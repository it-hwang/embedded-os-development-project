#include "stdint.h"
#include "Uart.h"

volatile PL011t_* Uart = (PL011t_*)UART_BASE_ADDRESS0;
