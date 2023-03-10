// Copyright 2022 hector (@1hect0r1)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader

#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS {GP0, GP7, GP14, GP15}
#define MATRIX_COL_PINS {GP2, GP11, GP9, GP13, GP10, GP4, GP23, GP21, GP16, GP28, GP19, GP27}

#define DIODE_DIRECTION COL2ROW
