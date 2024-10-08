/*
 * Phoenix-RTOS
 *
 * Board config for armv7a9-zynq7000-pilot
 *
 * Copyright 2022 Phoenix Systems
 * Author: Lukasz Kosinski
 *
 * This file is part of Phoenix-RTOS.
 *
 * %LICENSE%
 */

#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

/* DDR configuration */
#define DDRC_DRAM_PARAM_REG0 0x0004285b
#define DDRC_DRAM_PARAM_REG1 0x44e458d3
#define DDRC_DRAM_PARAM_REG2 0x7282bce5
#define DDRC_DRAM_PARAM_REG3 0x270872d0
#define DDRC_DRAM_PARAM_REG4 0x0

#define DDRC_DRAM_ADDR_MAP_COL 0xfff00000
#define DDRC_DRAM_ADDR_MAP_ROW 0x0F666666

#define DDRC_PHY_CONFIG0 0x40000001
#define DDRC_PHY_CONFIG1 0x40000001
#define DDRC_PHY_CONFIG2 0x40000001
#define DDRC_PHY_CONFIG3 0x40000001

#define DDRC_PHY_INIT_RATIO0 0x0002a81f
#define DDRC_PHY_INIT_RATIO1 0x00029822
#define DDRC_PHY_INIT_RATIO2 0x00026c10
#define DDRC_PHY_INIT_RATIO3 0x00026013

#define DDRC_PHY_RD_DQS_CFG0 0x00000035
#define DDRC_PHY_RD_DQS_CFG1 0x00000035
#define DDRC_PHY_RD_DQS_CFG2 0x00000035
#define DDRC_PHY_RD_DQS_CFG3 0x00000035

#define DDRC_PHY_WR_DQS_CFG0 0x0000009f
#define DDRC_PHY_WR_DQS_CFG1 0x000000a2
#define DDRC_PHY_WR_DQS_CFG2 0x00000090
#define DDRC_PHY_WR_DQS_CFG3 0x00000093

#define DDRC_PHY_WE_CFG0 0x000000ff
#define DDRC_PHY_WE_CFG1 0x000000fb
#define DDRC_PHY_WE_CFG2 0x000000f0
#define DDRC_PHY_WE_CFG3 0x000000ed

#define DDRC_WR_DATA_SLV0 0x000000df
#define DDRC_WR_DATA_SLV1 0x000000e2
#define DDRC_WR_DATA_SLV2 0x000000d0
#define DDRC_WR_DATA_SLV3 0x000000d3

/* UART16550 configuration */
#define UART16550_CONSOLE_USER 1
#define UART16550_BAUDRATE     57600

/* SPI configuration */
#define SPI0_SCLK -1
#define SPI0_MOSI -1
#define SPI0_MISO -1
#define SPI0_SS0  -1
#define SPI0_SS1  -1
#define SPI0_SS2  -1

#define SPI1_SCLK 12
#define SPI1_MOSI 10
#define SPI1_MISO 11
#define SPI1_SS0  -1
#define SPI1_SS1  -1
#define SPI1_SS2  -1

/* I2C configuration */
#define I2C0_SDA -1
#define I2C0_SCL -1

#define I2C1_SDA -1
#define I2C1_SCL -1

/* UART configuration */
#define UART0_RX 14
#define UART0_TX 15
#define UART1_RX 49
#define UART1_TX 48

#define UART_CONSOLE_KERNEL 1
#define UART_CONSOLE_USER   -1
#define UART_CONSOLE_PLO    1

/* QSPI configuration */
#define QSPI_CS   1
#define QSPI_IO0  2
#define QSPI_IO1  3
#define QSPI_IO2  4
#define QSPI_IO3  5
#define QSPI_CLK  6
#define QSPI_FCLK -1

/* SD card configuration */
#define SD_CARD_CLK 40
#define SD_CARD_CMD 41
#define SD_CARD_D0  42
#define SD_CARD_D1  43
#define SD_CARD_D2  44
#define SD_CARD_D3  45
#define SD_CARD_CD  46
#define SD_CARD_WP  47 /* Always pulled low on this board */

/* GPIO bank 0 configuration */
#define GPIO0_0  -1
#define GPIO0_1  -1
#define GPIO0_2  -1
#define GPIO0_3  -1
#define GPIO0_4  -1
#define GPIO0_5  -1
#define GPIO0_6  -1
#define GPIO0_7  -1
#define GPIO0_8  8 /* PWM_EN - all pwm channels enabling pin */
#define GPIO0_9  -1
#define GPIO0_10 -1
#define GPIO0_11 -1
#define GPIO0_12 -1
#define GPIO0_13 -1
#define GPIO0_14 -1
#define GPIO0_15 -1
#define GPIO0_16 -1
#define GPIO0_17 -1
#define GPIO0_18 -1
#define GPIO0_19 -1
#define GPIO0_20 -1
#define GPIO0_21 -1
#define GPIO0_22 -1
#define GPIO0_23 -1
#define GPIO0_24 -1
#define GPIO0_25 -1
#define GPIO0_26 -1
#define GPIO0_27 -1
#define GPIO0_28 -1
#define GPIO0_29 -1
#define GPIO0_30 -1
#define GPIO0_31 -1

/* GPIO bank 1 configuration */
#define GPIO1_0  -1
#define GPIO1_1  -1
#define GPIO1_2  -1
#define GPIO1_3  -1
#define GPIO1_4  -1
#define GPIO1_5  -1
#define GPIO1_6  -1
#define GPIO1_7  -1
#define GPIO1_8  -1
#define GPIO1_9  -1
#define GPIO1_10 -1
#define GPIO1_11 -1
#define GPIO1_12 -1
#define GPIO1_13 -1
#define GPIO1_14 -1
#define GPIO1_15 -1
#define GPIO1_16 -1
#define GPIO1_17 -1
#define GPIO1_18 -1
#define GPIO1_19 -1
#define GPIO1_20 -1
#define GPIO1_21 -1

/* Motors Configuration */
#define PWM_MOTOR1 "/dev/pwm1"
#define PWM_MOTOR2 "/dev/pwm2"
#define PWM_MOTOR3 "/dev/pwm3"
#define PWM_MOTOR4 "/dev/pwm0"


/* Motors and Servos configuration for Plane */
#define PWM_MAIN_MOTOR    "/dev/pwm0"
#define PWM_LEFT_AILERON  "/dev/pwm1"
#define PWM_RIGHT_AILERON "/dev/pwm2"
#define PWM_ELEVATOR      "/dev/pwm3"
#define PWM_RUDDER        "/dev/pwm4"


/* RC bus Configuration */
#define PATH_DEV_RC_BUS "/dev/ttyS0"

#define RC_RIGHT_HSTICK_CH 0
#define RC_RIGHT_VSTICK_CH 1
#define RC_LEFT_VSTICK_CH  2
#define RC_LEFT_HSTICK_CH  3
#define RC_VRA_CH          4
#define RC_VRB_CH          5
#define RC_SWA_CH          6
#define RC_SWB_CH          7
#define RC_SWC_CH          8
#define RC_SWD_CH          9
#define RC_CHANNELS_CNT    10

#endif
