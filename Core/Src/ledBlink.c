//****************************** ledBlink **************************************
// Copyright (c) 2025 Trenser Technology Solutions
// All Rights Reserved
//******************************************************************************
// File    : LEDBlink.c
// Summary : Blink LED with delay 1s.
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

//**********************************.ledBlink.**********************************
// Purpose : Blink led with delay 1s.
// Inputs  : none
// Outputs : none
// Return  : true
// Notes   : None
//******************************************************************************
bool ledBlink()
{
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, LED_ON);
    HAL_Delay(DELAY);

    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, LED_OFF);
    HAL_Delay(DELAY);

    return true;
}

// EOF
