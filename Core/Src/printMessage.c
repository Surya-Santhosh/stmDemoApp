//**************************** printMessage ************************************
// Copyright (c) 2025 Trenser Technology Solutions
// All Rights Reserved
//******************************************************************************
// File    : printMessage.c
// Summary : Print a message using UART.
// Note    : None
// Author  : Surya Santhosh
// Day     : 01/AUG/2025
//******************************************************************************

//******************************* Include Files ********************************
#include "main.h"

//******************************* Local Types **********************************

//***************************** Local Constants ********************************

//***************************** Local Variables ********************************

//****************************** Local Functions *******************************

//******************************.printMessage.**********************************
// Purpose : Print a message using UART.
// Inputs  : none
// Outputs : none
// Return  : blResult
// Notes   : None
//******************************************************************************
bool printMessage(UART_HandleTypeDef *huart1)
{
	bool blResult = false;

	if (HAL_OK == HAL_UART_Transmit(huart1, (uint8 *)"Hello\n", DATA_SIZE, 
	    TIME_OUT))
	{
		blResult = true;
	}

    return blResult;
}

// EOF
