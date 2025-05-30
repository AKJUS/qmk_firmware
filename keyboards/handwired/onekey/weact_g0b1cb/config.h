// Copyright 2025 Stefan Kerkmann (@karlk90)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define ADC_PIN A0

#define BACKLIGHT_PAL_MODE 1
#define BACKLIGHT_PWM_CHANNEL 1
#define BACKLIGHT_PWM_DRIVER PWMD3

#define I2C1_SCL_PAL_MODE 6
#define I2C1_SDA_PAL_MODE 6

#define LCD_RST_PIN B12
#define LCD_DC_PIN B11
#define LCD_CS_PIN B10

#define SPI_MOSI_PAL_MODE 0
#define SPI_MISO_PAL_MODE 0
#define SPI_SCK_PAL_MODE 0

#define WS2812_PWM_CHANNEL 3
#define WS2812_PWM_DMA_CHANNEL 2
#define WS2812_PWM_DMA_STREAM STM32_DMA1_STREAM2
#define WS2812_PWM_DMAMUX_ID STM32_DMAMUX1_TIM3_UP
#define WS2812_PWM_DRIVER PWMD3
#define WS2812_PWM_PAL_MODE 1
