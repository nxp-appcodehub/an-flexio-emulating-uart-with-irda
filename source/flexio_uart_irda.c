/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "fsl_flexio_uart.h"
#include "peripherals.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define BOARD_FLEXIO_BASE      FLEXIO
#define FLEXIO_UART_TX_PIN     5U
#define FLEXIO_UART_RX_PIN     4U
#define FLEXIO_CLOCK_FREQUENCY 48000000U

#define FLEXIO_UART_IRDA//FLEXIO_UART//
#define RECEIVER//TRANSMITTER//

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
FLEXIO_UART_Type uartDev;
uint8_t txbuff[]   = "Flexio uart polling example\r\nBoard will send back received characters\r\n";
uint8_t rxbuff[20] = {0};
/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief Main function
 */
int main(void)
{
    uint8_t ch;
    flexio_uart_config_t config;
    status_t result = kStatus_Success;

    BOARD_InitBootClocks();

#ifdef FLEXIO_UART

	/* Initialize components */
    FlexIO_UART_InitPins();
    FlexIO_UART_Init();

    uartDev.flexioBase      = BOARD_FLEXIO_BASE;
    uartDev.TxPinIndex      = FLEXIO_UART_TX_PIN;
    uartDev.RxPinIndex      = FLEXIO_UART_RX_PIN;
    uartDev.shifterIndex[0] = 0U;
    uartDev.shifterIndex[1] = 1U;
    uartDev.timerIndex[0]   = 0U;
    uartDev.timerIndex[1]   = 1U;

#endif
#ifdef FLEXIO_UART_IRDA

    /* Initialize components */
    FlexIO_UART_IRDA_InitPins();
	FlexIO_UART_IRDA_Init();

    uartDev.flexioBase      = BOARD_FLEXIO_BASE;
    uartDev.TxPinIndex      = FLEXIO_UART_TX_PIN;
    uartDev.RxPinIndex      = FLEXIO_UART_RX_PIN;
    uartDev.shifterIndex[0] = 0U;
    uartDev.shifterIndex[1] = 1U;
    uartDev.timerIndex[0]   = 0U;
    uartDev.timerIndex[1]   = 1U;

#endif
#ifdef  TRANSMITTER
    ch = 0x30;
    while (1)
    {
    	ch++;
        FLEXIO_UART_WriteBlocking(&uartDev, &ch, 1);
        if(ch == 0x5A)
        {
            ch = 0x30;
        }
        SDK_DelayAtLeastUs(10000, 4800000);
    }
#endif

#ifdef  RECEIVER
    FLEXIO_UART_WriteBlocking(&uartDev, txbuff, sizeof(txbuff) - 1);
    while (1)
    {
    	FLEXIO_UART_ReadBlocking(&uartDev, &ch, 1);
        FLEXIO_UART_WriteBlocking(&uartDev, &ch, 1);
    }
#endif

}
