/*
 * MCU_init_helper.h
 *
 *  Created on: Dec 7, 2020
 *      Author: Aliaksandr_Kapura
 */

#ifndef INC_MCU_INIT_HELPER_H_
#define INC_MCU_INIT_HELPER_H_

/* Includes ------------------------------------------------------------------*/

/* Function prototypes ---------------------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_I2C1_Init(void);
static void MX_I2S3_Init(void);
static void MX_SPI1_Init(void);
static void MX_SPI2_Init(void);
static void MX_USART2_UART_Init(void);
static void MX_USART3_UART_Init(void);

/*------------------------------------------------------------------------------*/

extern	I2C_HandleTypeDef hi2c1;
extern	I2S_HandleTypeDef hi2s3;
extern	SPI_HandleTypeDef hspi1;
extern	SPI_HandleTypeDef hspi2;
extern	UART_HandleTypeDef huart2;
extern	UART_HandleTypeDef huart3;

/*------------------------------------------------------------------------------*/

#endif /* INC_MCU_INIT_HELPER_H_ */
