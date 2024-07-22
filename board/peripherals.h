/*
 * Copyright 2024 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_common.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for FlexIO_UART_Init functional group */
/* FLEXIO_CTRL: DOZEN=1, DBGE=1, FASTACC=0, FLEXEN=1 */
#define FLEXIO_UART_INIT_CTRL_INIT 0xC0000001U
/* FLEXIO_SHIFTSIEN: SSIE=0 */
#define FLEXIO_UART_INIT_SHIFTSIEN_INIT 0x0U
/* FLEXIO_SHIFTEIEN: SEIE=0 */
#define FLEXIO_UART_INIT_SHIFTEIEN_INIT 0x0U
/* FLEXIO_TIMIEN: TEIE=0 */
#define FLEXIO_UART_INIT_TIMIEN_INIT 0x0U
/* FLEXIO_SHIFTSDEN: SSDE=0 */
#define FLEXIO_UART_INIT_SHIFTSDEN_INIT 0x0U
/* FLEXIO_SHIFTCTL0: TIMSEL=0, TIMPOL=0, PINCFG=3, PINSEL=5, PINPOL=0, SMOD=2 */
#define FLEXIO_UART_INIT_SHIFTCTL0_INIT 0x30502U
/* FLEXIO_SHIFTCTL1: TIMSEL=1, TIMPOL=1, PINSEL=4, PINPOL=0, SMOD=1 */
#define FLEXIO_UART_INIT_SHIFTCTL1_INIT 0x1800401U
/* FLEXIO_SHIFTCFG0: INSRC=0, SSTOP=3, SSTART=2 */
#define FLEXIO_UART_INIT_SHIFTCFG0_INIT 0x32U
/* FLEXIO_SHIFTCFG1: INSRC=0, SSTOP=3, SSTART=2 */
#define FLEXIO_UART_INIT_SHIFTCFG1_INIT 0x32U
/* FLEXIO_TIMCTL0: TRGSEL=1, TRGPOL=1, TRGSRC=1, PINCFG=0, PINSEL=5, PINPOL=0, TIMOD=1 */
#define FLEXIO_UART_INIT_TIMCTL0_INIT 0x1C00501U
/* FLEXIO_TIMCTL1: TRGSEL=8, TRGPOL=1, TRGSRC=1, PINCFG=0, PINSEL=0, PINPOL=0, TIMOD=1 */
#define FLEXIO_UART_INIT_TIMCTL1_INIT 0x8C00001U
/* FLEXIO_TIMCFG0: TIMOUT=0, TIMDEC=0, TIMRST=0, TIMDIS=2, TIMENA=2, TSTOP=2, TSTART=1 */
#define FLEXIO_UART_INIT_TIMCFG0_INIT 0x2222U
/* FLEXIO_TIMCFG1: TIMOUT=2, TIMDEC=0, TIMRST=6, TIMDIS=2, TIMENA=6, TSTOP=2, TSTART=1 */
#define FLEXIO_UART_INIT_TIMCFG1_INIT 0x2062622U
/* FLEXIO_TIMCMP0: CMP=3874 */
#define FLEXIO_UART_INIT_TIMCMP0_INIT 0xF22U
/* FLEXIO_TIMCMP1: CMP=3874 */
#define FLEXIO_UART_INIT_TIMCMP1_INIT 0xF22U

/* Definitions for FlexIO_UART_IRDA_Init functional group */
/* FLEXIO_CTRL: DOZEN=1, DBGE=1, FASTACC=0, FLEXEN=1 */
#define FLEXIO_UART_IRDA_INIT_CTRL_INIT 0xC0000001U
/* FLEXIO_SHIFTSIEN: SSIE=0 */
#define FLEXIO_UART_IRDA_INIT_SHIFTSIEN_INIT 0x0U
/* FLEXIO_SHIFTEIEN: SEIE=0 */
#define FLEXIO_UART_IRDA_INIT_SHIFTEIEN_INIT 0x0U
/* FLEXIO_TIMIEN: TEIE=0 */
#define FLEXIO_UART_IRDA_INIT_TIMIEN_INIT 0x0U
/* FLEXIO_SHIFTSDEN: SSDE=0 */
#define FLEXIO_UART_IRDA_INIT_SHIFTSDEN_INIT 0x0U
/* FLEXIO_SHIFTCTL0: TIMSEL=0, TIMPOL=0, PINCFG=3, PINSEL=5, PINPOL=0, SMOD=2 */
#define FLEXIO_UART_IRDA_INIT_SHIFTCTL0_INIT 0x30502U
/* FLEXIO_SHIFTCTL1: TIMSEL=1, TIMPOL=1, PINSEL=4, PINPOL=0, SMOD=1 */
#define FLEXIO_UART_IRDA_INIT_SHIFTCTL1_INIT 0x1800401U
/* FLEXIO_SHIFTCFG0: INSRC=0, SSTOP=3, SSTART=2 */
#define FLEXIO_UART_IRDA_INIT_SHIFTCFG0_INIT 0x32U
/* FLEXIO_SHIFTCFG1: INSRC=0, SSTOP=3, SSTART=2 */
#define FLEXIO_UART_IRDA_INIT_SHIFTCFG1_INIT 0x32U
/* FLEXIO_TIMCTL0: TRGSEL=1, TRGPOL=1, TRGSRC=1, PINCFG=0, PINSEL=5, PINPOL=0, TIMOD=1 */
#define FLEXIO_UART_IRDA_INIT_TIMCTL0_INIT 0x1C00501U
/* FLEXIO_TIMCTL1: TRGSEL=8, TRGPOL=1, TRGSRC=1, PINCFG=0, PINSEL=0, PINPOL=0, TIMOD=1 */
#define FLEXIO_UART_IRDA_INIT_TIMCTL1_INIT 0x8C00001U
/* FLEXIO_TIMCTL2: TRGSEL=10, TRGPOL=1, TRGSRC=1, PINCFG=3, PINSEL=1, PINPOL=0, TIMOD=2 */
#define FLEXIO_UART_IRDA_INIT_TIMCTL2_INIT 0xAC30102U
/* FLEXIO_TIMCTL3: TRGSEL=6, TRGPOL=0, TRGSRC=1, PINCFG=3, PINSEL=4, PINPOL=1, TIMOD=3 */
#define FLEXIO_UART_IRDA_INIT_TIMCTL3_INIT 0x6430483U
/* FLEXIO_TIMCFG0: TIMOUT=0, TIMDEC=0, TIMRST=0, TIMDIS=2, TIMENA=2, TSTOP=2, TSTART=1 */
#define FLEXIO_UART_IRDA_INIT_TIMCFG0_INIT 0x2222U
/* FLEXIO_TIMCFG1: TIMOUT=2, TIMDEC=0, TIMRST=6, TIMDIS=2, TIMENA=6, TSTOP=2, TSTART=1 */
#define FLEXIO_UART_IRDA_INIT_TIMCFG1_INIT 0x2062622U
/* FLEXIO_TIMCFG2: TIMOUT=0, TIMDEC=0, TIMRST=0, TIMDIS=6, TIMENA=6, TSTOP=0, TSTART=0 */
#define FLEXIO_UART_IRDA_INIT_TIMCFG2_INIT 0x6600U
/* FLEXIO_TIMCFG3: TIMOUT=2, TIMDEC=0, TIMRST=6, TIMDIS=2, TIMENA=6, TSTOP=0, TSTART=0 */
#define FLEXIO_UART_IRDA_INIT_TIMCFG3_INIT 0x2062600U
/* FLEXIO_TIMCMP0: CMP=3874 */
#define FLEXIO_UART_IRDA_INIT_TIMCMP0_INIT 0xF22U
/* FLEXIO_TIMCMP1: CMP=3874 */
#define FLEXIO_UART_IRDA_INIT_TIMCMP1_INIT 0xF22U
/* FLEXIO_TIMCMP2: CMP=14348 */
#define FLEXIO_UART_IRDA_INIT_TIMCMP2_INIT 0x380CU
/* FLEXIO_TIMCMP3: CMP=69 */
#define FLEXIO_UART_IRDA_INIT_TIMCMP3_INIT 0x45U

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/

void FlexIO_UART_Init(void);

void FlexIO_UART_IRDA_Init(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
