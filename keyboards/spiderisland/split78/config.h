/*
Copyright 2020 unrelenting.technology

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0xF4E4
#define DEVICE_VER   0x0001
#define MANUFACTURER SpiderIsland
#define PRODUCT      Split 78-key

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 14

#define BACKLIGHT_PIN D4
#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_BREATHING

#define DEBOUNCE 50

#define I2C_START_RETRY_COUNT 1
