/* mbed Microcontroller Library
 * Copyright (c) 2006-2015 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"

#include "mbed-hal/PinDefs.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef YOTTA_CFG_HARDWARE_PINS
typedef enum {
    // Not connected
    NC = (int)0xFFFFFFFF,
#include "mbed-hal/chip_pins.array"
#include "mbed-hal/pins.array"
} PinName;
#else
#include "PinNames.h"
#endif

#ifdef __cplusplus
}
#endif

#endif // MBED_PINNAMES_H