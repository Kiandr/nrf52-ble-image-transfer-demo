#ifndef __CPPLIB_BOARD_PCA10040_H
#define __CPPLIB_BOARD_PCA10040_H

#define CPPLIB_POLARITY_ACTIVE_LOW        true
#define CPPLIB_POLARITY_ACTIVE_HIGH       false

#define CPPLIB_BOARD_PERIPHERAL_NUM       38
#define CPPLIB_BOARD_GPIO_NUM             32

#define CPPLIB_BOARD_BUTTON1              13
#define CPPLIB_BOARD_BUTTON2              14
#define CPPLIB_BOARD_BUTTON3              15
#define CPPLIB_BOARD_BUTTON4              16
#define CPPLIB_BOARD_BUTTON1_CFG          CPPLIB_BOARD_BUTTON1, CPPLIB_POLARITY_ACTIVE_LOW
#define CPPLIB_BOARD_BUTTON2_CFG          CPPLIB_BOARD_BUTTON2, CPPLIB_POLARITY_ACTIVE_LOW
#define CPPLIB_BOARD_BUTTON3_CFG          CPPLIB_BOARD_BUTTON3, CPPLIB_POLARITY_ACTIVE_LOW
#define CPPLIB_BOARD_BUTTON4_CFG          CPPLIB_BOARD_BUTTON4, CPPLIB_POLARITY_ACTIVE_LOW
#define CPPLIB_BOARD_LED1                 17
#define CPPLIB_BOARD_LED2                 18
#define CPPLIB_BOARD_LED3                 19
#define CPPLIB_BOARD_LED4                 20
#define CPPLIB_BOARD_LED1_CFG             CPPLIB_BOARD_LED1, CPPLIB_POLARITY_ACTIVE_LOW
#define CPPLIB_BOARD_LED2_CFG             CPPLIB_BOARD_LED2, CPPLIB_POLARITY_ACTIVE_LOW
#define CPPLIB_BOARD_LED3_CFG             CPPLIB_BOARD_LED3, CPPLIB_POLARITY_ACTIVE_LOW
#define CPPLIB_BOARD_LED4_CFG             CPPLIB_BOARD_LED4, CPPLIB_POLARITY_ACTIVE_LOW

#define CPPLIB_BOARD_UART_INTERFACE_NUM   1
#define CPPLIB_BOARD_UART_INTERFACE_LIST  {NRF_UARTE0}
#define CPPLIB_BOARD_UART_INTERFACE_IRQn  {UARTE0_UART0_IRQn}
#define CPPLIB_BOARD_UART_PIN_TX          6
#define CPPLIB_BOARD_UART_PIN_RX          8
#define CPPLIB_BOARD_UART_PIN_CTS         7
#define CPPLIB_BOARD_UART_PIN_RTS         5

#define CPPLIB_BOARD_SPIM_INTERFACE_NUM   3
#define CPPLIB_BOARD_SPIM_INTERFACE_LIST  {NRF_SPIM0, NRF_SPIM1, NRF_SPIM2}
#define CPPLIB_BOARD_SPIM_INTERFACE_IRQn  {SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQn, SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQn, SPIM2_SPIS2_SPI2_IRQn};
enum                                      {CPPLIB_INT_INDEX_SPIM0 = 0, CPPLIB_INT_INDEX_SPIM1, CPPLIB_INT_INDEX_SPIM2};
#define CPPLIB_BOARD_SPIM_PIN_SCK         26
#define CPPLIB_BOARD_SPIM_PIN_MOSI        27
#define CPPLIB_BOARD_SPIM_PIN_MISO        28
#define CPPLIB_BOARD_SPIM_PIN_CSN         29

#define CPPLIB_BOARD_SPIS_INTERFACE_NUM   3
#define CPPLIB_BOARD_SPIS_INTERFACE_LIST  {NRF_SPIS2, NRF_SPIS0, NRF_SPIS1}
#define CPPLIB_BOARD_SPIS_INTERFACE_IRQn  {SPIM2_SPIS2_SPI2_IRQn, SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQn, SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQn};
#define CPPLIB_BOARD_SPIS_PIN_SCK         2
#define CPPLIB_BOARD_SPIS_PIN_MOSI        3
#define CPPLIB_BOARD_SPIS_PIN_MISO        4
#define CPPLIB_BOARD_SPIS_PIN_CSN         30
#define CPPLIB_BOARD_SPIS_RX_BUF_SIZE     128     // 255 is the maximum

#define CPPLIB_BOARD_TWIM_INTERFACE_NUM   2
#define CPPLIB_BOARD_TWIM_INTERFACE_LIST  {NRF_TWIM1, NRF_TWIM0}
#define CPPLIB_BOARD_TWIM_INTERFACE_IRQn  {SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQn, SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQn};
enum                                      {CPPLIB_INT_INDEX_TWIM1 = 0, CPPLIB_INT_INDEX_TWIM0};
#define CPPLIB_BOARD_TWIM_PIN_SDA         2
#define CPPLIB_BOARD_TWIM_PIN_SCL         3

#define CPPLIB_BOARD_PWM_INTERFACE_NUM    3
#define CPPLIB_BOARD_PWM_INTERFACE_LIST   {NRF_PWM0, NRF_PWM1, NRF_PWM2}
#define CPPLIB_BOARD_PWM_INTERFACE_IRQn   {PWM0_IRQn, PWM1_IRQn, PWM2_IRQn}

#define CPPLIB_BOARD_PPI_CONFIGURABLE_MASK        0x0000FFFF

#endif