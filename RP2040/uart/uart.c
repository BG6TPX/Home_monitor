/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "uart.h"

int main() {
    // 初始化标准库
    stdio_init_all();

    // 初始化 UART
    uart_init(UART_ID, BAUD_RATE);
    gpio_set_function(UART_TX_PIN, GPIO_FUNC_UART);
    gpio_set_function(UART_RX_PIN, GPIO_FUNC_UART);

    // 配置 UART 参数
    uart_set_format(UART_ID, DATA_BITS, STOP_BITS, PARITY);

    // 发送欢迎信息
    uart_puts(UART_ID, "Welcome to RP2040 Serial Communication Example!\r\n");

    while (1) {
        // 检查是否有数据可读
        if (uart_is_readable(UART_ID)) {
            // 读取一个字符
            char ch = uart_getc(UART_ID);
            // 回显接收到的字符
            uart_putc(UART_ID, ch);

            // 换行处理
            if (ch == '\r') {
                uart_putc(UART_ID, '\n');
            }
        }
    }

    return 0;
}    