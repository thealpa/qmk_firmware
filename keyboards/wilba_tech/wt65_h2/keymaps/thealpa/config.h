/* Copyright 2024 thealpa
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#undef DEVICE_VER
#define DEVICE_VER 0x2402
/* #define SERIAL_NUMBER */
#define NUM_LAYERS 2
#define LAYER_STATE_8BIT
#define FORCE_NKRO
#define NO_ACTION_ONESHOT
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

/* #define DEBUG_MATRIX_SCAN_RATE */