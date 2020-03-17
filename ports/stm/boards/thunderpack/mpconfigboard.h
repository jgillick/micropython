/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Lucian Copeland for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#define BOARD_THUNDERPACK_STM32F412
#define MICROPY_HW_BOARD_NAME       "THUNDERPACK"
#define MICROPY_HW_MCU_NAME         "STM32F412xGU"

#define FLASH_SIZE                  (0x100000)
#define FLASH_PAGE_SIZE             (0x4000)

#define BOARD_OSC_DIV (24)
#define BOARD_NO_VBUS_SENSE (1)

#define CP_RGB_STATUS_LED
#define CP_RGB_STATUS_R       (&pin_PA00)
#define CP_RGB_STATUS_G       (&pin_PA01)
#define CP_RGB_STATUS_B       (&pin_PA02)
#define MICROPY_HW_LED_STATUS (&pin_PA03)

#define DEFAULT_I2C_BUS_SCL (&pin_PB06)
#define DEFAULT_I2C_BUS_SDA (&pin_PB07)