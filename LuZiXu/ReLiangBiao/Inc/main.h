/**
  ******************************************************************************
  * File Name          : main.hpp
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/* Includes ------------------------------------------------------------------*/
/* USER CODE BEGIN Includes */
//#include "stm32l0xx_hal.h"
/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/
#define LongKey 2000
#define dt 10

#define YALI_MISO_Pin GPIO_PIN_0
#define YALI_MISO_GPIO_Port GPIOH
#define MCU_TEST_Pin GPIO_PIN_1
#define MCU_TEST_GPIO_Port GPIOH
#define SimI2C_SDA_Pin GPIO_PIN_0
#define SimI2C_SDA_GPIO_Port GPIOC
#define Button_Pin GPIO_PIN_0
#define Button_GPIO_Port GPIOA
#define Button_EXTI_IRQn EXTI0_1_IRQn
#define SimI2C_SCL_Pin GPIO_PIN_1
#define SimI2C_SCL_GPIO_Port GPIOA
#define BT_K_Pin GPIO_PIN_4
#define BT_K_GPIO_Port GPIOA
#define BT_AD_Pin GPIO_PIN_5
#define BT_AD_GPIO_Port GPIOA
#define YALI_MOSI_Pin GPIO_PIN_5
#define YALI_MOSI_GPIO_Port GPIOC
#define PV_K_Pin GPIO_PIN_11
#define PV_K_GPIO_Port GPIOA
#define YALI_SCLK_Pin GPIO_PIN_12
#define YALI_SCLK_GPIO_Port GPIOA
#define PWM38K_Pin GPIO_PIN_15
#define PWM38K_GPIO_Port GPIOA

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */
#define Verify_Sum
#define Verify_CRC16
#define SimI2C


#define WorkMode_Main 0
#define WorkMode_F 1  //�춨
#define WorkMode_l 2	//��ʷ����
#define WorkMode_E 3	//����


#define DevicePower_ON() HAL_GPIO_WritePin(PV_K_GPIO_Port,PV_K_Pin,GPIO_PIN_SET)
#define DevicePower_OFF() HAL_GPIO_WritePin(PV_K_GPIO_Port,PV_K_Pin,GPIO_PIN_RESET)

#define TEST_ON() HAL_GPIO_WritePin(MCU_TEST_GPIO_Port,MCU_TEST_Pin,GPIO_PIN_SET)
#define TEST_OFF() HAL_GPIO_WritePin(MCU_TEST_GPIO_Port,MCU_TEST_Pin,GPIO_PIN_RESET)




/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
