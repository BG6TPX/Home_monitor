#include <stdio.h>
#include "pico/stdlib.h"


#define BAUD_RATE 115200
#define DATA_BITS 8
#define STOP_BITS 1
#define PARITY UART_PARITY_NONE

// ���� UART ʵ��
#define UART_ID uart0
#define UART_TX_PIN 0
#define UART_RX_PIN 1
