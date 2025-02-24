/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */


  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	  HAL_GPIO_WritePin(EXTRA_INPUT_2_GPIO_Port, EXTRA_INPUT_2_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(OSC1_IN_GPIO_Port, OSC1_IN_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(OSC2_IN_GPIO_Port, OSC2_IN_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(OSC2_OUT_GPIO_Port, OSC2_OUT_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(vBATT_GPIO_Port, vBATT_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(PUMP_FB_GPIO_Port, PUMP_FB_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(FANS_FB_GPIO_Port, FANS_FB_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(BUZR_FB_GPIO_Port, BUZR_FB_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(BSPD_OK_GPIO_Port, BSPD_OK_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(MC_PWR_FB_GPIO_Port, MC_PWR_FB_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(HCP_H_CURR_SENS_GPIO_Port, HCP_H_CURR_SENS_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(HCP_L_CURR_SENS_GPIO_Port, HCP_L_CURR_SENS_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(EXTRA_INPUT1_GPIO_Port, EXTRA_INPUT1_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(MC_PWR_CTRL_GPIO_Port, MC_PWR_CTRL_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(PUMP_CTRL_GPIO_Port, PUMP_CTRL_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(FANS_CTRL_GPIO_Port, FANS_CTRL_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(IMD_OK_GPIO_Port, IMD_OK_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(AMS_OK_GPIO_Port, AMS_OK_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(AIR__FB_GPIO_Port, AIR__FB_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(AIR__FBB15_GPIO_Port, AIR__FBB15_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(AMS_CLR_ERR_GPIO_Port, AMS_CLR_ERR_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(AIR__CTRL_GPIO_Port, AIR__CTRL_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(AIR__CTRLD10_GPIO_Port, AIR__CTRLD10_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(SHCT_TAP_GPIO_Port, SHCT_TAP_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(PRECHRG_CTRL_GPIO_Port, PRECHRG_CTRL_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(BUZR_CTRL_GPIO_Port, BUZR_CTRL_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(UC_SWIDO_GPIO_Port, UC_SWIDO_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(UC_SWLCK_GPIO_Port, UC_SWLCK_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(uC_PWR_MON_SDA_GPIO_Port, uC_PWR_MON_SDA_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(CAN_Rx_GPIO_Port, CAN_Rx_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(CAN_Tx_GPIO_Port, CAN_Tx_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(BRAKE_PRESS_GPIO_Port, BRAKE_PRESS_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(SERIAL_Tx_GPIO_Port, SERIAL_Tx_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(SERIAL_RX_GPIO_Port, SERIAL_RX_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(UC_SWO_GPIO_Port, UC_SWO_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(CAN_SENS_Rx_GPIO_Port, CAN_SENS_Rx_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(CAN_SENS_Tx_GPIO_Port, CAN_SENS_Tx_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(IMD_RESIST_GPIO_Port, IMD_RESIST_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(LED_B2_GPIO_Port, LED_B2_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(LED_G2_GPIO_Port, LED_G2_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(LED_R2_GPIO_Port, LED_R2_Pin, GPIO_PIN_SET);

	  HAL_Delay(500);

	  HAL_GPIO_WritePin(EXTRA_INPUT_2_GPIO_Port, EXTRA_INPUT_2_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(OSC1_IN_GPIO_Port, OSC1_IN_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(OSC2_IN_GPIO_Port, OSC2_IN_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(OSC2_OUT_GPIO_Port, OSC2_OUT_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(vBATT_GPIO_Port, vBATT_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(PUMP_FB_GPIO_Port, PUMP_FB_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(FANS_FB_GPIO_Port, FANS_FB_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(BUZR_FB_GPIO_Port, BUZR_FB_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(BSPD_OK_GPIO_Port, BSPD_OK_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(MC_PWR_FB_GPIO_Port, MC_PWR_FB_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(HCP_H_CURR_SENS_GPIO_Port, HCP_H_CURR_SENS_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(HCP_L_CURR_SENS_GPIO_Port, HCP_L_CURR_SENS_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(EXTRA_INPUT1_GPIO_Port, EXTRA_INPUT1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(MC_PWR_CTRL_GPIO_Port, MC_PWR_CTRL_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(PUMP_CTRL_GPIO_Port, PUMP_CTRL_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(FANS_CTRL_GPIO_Port, FANS_CTRL_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(IMD_OK_GPIO_Port, IMD_OK_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(AMS_OK_GPIO_Port, AMS_OK_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(AIR__FB_GPIO_Port, AIR__FB_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(AIR__FBB15_GPIO_Port, AIR__FBB15_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(AMS_CLR_ERR_GPIO_Port, AMS_CLR_ERR_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(AIR__CTRL_GPIO_Port, AIR__CTRL_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(AIR__CTRLD10_GPIO_Port, AIR__CTRLD10_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(SHCT_TAP_GPIO_Port, SHCT_TAP_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(PRECHRG_CTRL_GPIO_Port, PRECHRG_CTRL_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(LED_B1_GPIO_Port, LED_B1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(LED_G1_GPIO_Port, LED_G1_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(BUZR_CTRL_GPIO_Port, BUZR_CTRL_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(UC_SWIDO_GPIO_Port, UC_SWIDO_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(UC_SWLCK_GPIO_Port, UC_SWLCK_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(uC_PWR_MON_SDA_GPIO_Port, uC_PWR_MON_SDA_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(CAN_Rx_GPIO_Port, CAN_Rx_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(CAN_Tx_GPIO_Port, CAN_Tx_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(BRAKE_PRESS_GPIO_Port, BRAKE_PRESS_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(SERIAL_Tx_GPIO_Port, SERIAL_Tx_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(SERIAL_RX_GPIO_Port, SERIAL_RX_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(UC_SWO_GPIO_Port, UC_SWO_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(CAN_SENS_Rx_GPIO_Port, CAN_SENS_Rx_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(CAN_SENS_Tx_GPIO_Port, CAN_SENS_Tx_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(IMD_RESIST_GPIO_Port, IMD_RESIST_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(LED_B2_GPIO_Port, LED_B2_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(LED_G2_GPIO_Port, LED_G2_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(LED_R2_GPIO_Port, LED_R2_Pin, GPIO_PIN_RESET);

  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, MC_PWR_CTRL_Pin|PUMP_CTRL_Pin|FANS_CTRL_Pin|LED_R2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10|CAN_SENS_Tx_Pin|LED_B2_Pin|LED_G2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, AMS_CLR_ERR_Pin|AIR__CTRL_Pin|AIR__CTRLD10_Pin|PRECHRG_CTRL_Pin
                          |LED_B1_Pin|LED_G1_Pin|CAN_Tx_Pin|SERIAL_Tx_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(BUZR_CTRL_GPIO_Port, BUZR_CTRL_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : EXTRA_INPUT_2_Pin */
  GPIO_InitStruct.Pin = EXTRA_INPUT_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(EXTRA_INPUT_2_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : vBATT_Pin PUMP_FB_Pin HCP_H_CURR_SENS_Pin HCP_L_CURR_SENS_Pin
                           uC_PWR_MON_SDA_Pin */
  GPIO_InitStruct.Pin = vBATT_Pin|PUMP_FB_Pin|HCP_H_CURR_SENS_Pin|HCP_L_CURR_SENS_Pin
                          |uC_PWR_MON_SDA_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : FANS_FB_Pin BUZR_FB_Pin BSPD_OK_Pin MC_PWR_FB_Pin */
  GPIO_InitStruct.Pin = FANS_FB_Pin|BUZR_FB_Pin|BSPD_OK_Pin|MC_PWR_FB_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : EXTRA_INPUT1_Pin IMD_OK_Pin AMS_OK_Pin AIR__FB_Pin
                           AIR__FBB15_Pin CAN_SENS_Rx_Pin IMD_RESIST_Pin */
  GPIO_InitStruct.Pin = EXTRA_INPUT1_Pin|IMD_OK_Pin|AMS_OK_Pin|AIR__FB_Pin
                          |AIR__FBB15_Pin|CAN_SENS_Rx_Pin|IMD_RESIST_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : MC_PWR_CTRL_Pin PUMP_CTRL_Pin FANS_CTRL_Pin LED_R2_Pin */
  GPIO_InitStruct.Pin = MC_PWR_CTRL_Pin|PUMP_CTRL_Pin|FANS_CTRL_Pin|LED_R2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PB10 CAN_SENS_Tx_Pin LED_B2_Pin LED_G2_Pin */
  GPIO_InitStruct.Pin = GPIO_PIN_10|CAN_SENS_Tx_Pin|LED_B2_Pin|LED_G2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : AMS_CLR_ERR_Pin AIR__CTRL_Pin AIR__CTRLD10_Pin PRECHRG_CTRL_Pin
                           LED_B1_Pin LED_G1_Pin CAN_Tx_Pin SERIAL_Tx_Pin */
  GPIO_InitStruct.Pin = AMS_CLR_ERR_Pin|AIR__CTRL_Pin|AIR__CTRLD10_Pin|PRECHRG_CTRL_Pin
                          |LED_B1_Pin|LED_G1_Pin|CAN_Tx_Pin|SERIAL_Tx_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : SHCT_TAP_Pin CAN_Rx_Pin BRAKE_PRESS_Pin SERIAL_RX_Pin */
  GPIO_InitStruct.Pin = SHCT_TAP_Pin|CAN_Rx_Pin|BRAKE_PRESS_Pin|SERIAL_RX_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pin : BUZR_CTRL_Pin */
  GPIO_InitStruct.Pin = BUZR_CTRL_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(BUZR_CTRL_GPIO_Port, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
