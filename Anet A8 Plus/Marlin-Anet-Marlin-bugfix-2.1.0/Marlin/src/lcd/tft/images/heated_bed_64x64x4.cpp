/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

extern const uint8_t bed_64x64x4[2048] = {



  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x87, 0xae, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xea, 0x78, 0x88, 0x88,
  0x88, 0x88, 0x87, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x67, 0x88, 0x88,
  0x88, 0x88, 0x87, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x46, 0x88, 0x88,
  0x88, 0x88, 0x87, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x46, 0x88, 0x88,
  0x88, 0x88, 0x87, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x56, 0x88, 0x88,
  0x88, 0x88, 0x87, 0x89, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0x56, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x75, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x56, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x57, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88
};

extern const uint8_t bed_heated_64x64x4[2048] = {
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X77,0X78,0X88,0X88,0X88,0X77,
0X77,0X88,0X88,0X88,0X77,0X77,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X77,0X9B,0X97,0X88,0X88,0X87,0X8B,
0XA8,0X78,0X88,0X87,0X8B,0XB8,0X78,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X79,0XFF,0XF9,0X78,0X88,0X78,0XDF,
0XFB,0X78,0X88,0X77,0XCF,0XFC,0X87,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X7A,0XFF,0XFD,0X77,0X88,0X79,0XFF,
0XFF,0X87,0X88,0X78,0XDF,0XFF,0X97,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X79,0XFF,0XFF,0X86,0X88,0X78,0XDF,
0XFF,0XB6,0X88,0X77,0XCF,0XFF,0XC6,0X78,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X87,0XBF,0XFF,0XB6,0X78,0X87,0X9F,
0XFF,0XD6,0X78,0X87,0X8E,0XFF,0XF7,0X68,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X87,0X7D,0XFF,0XE6,0X68,0X87,0X7D,
0XFF,0XE7,0X68,0X88,0X7A,0XFF,0XF9,0X57,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X7D,0XFF,0XE5,0X67,0X87,0X7B,
0XFF,0XF7,0X57,0X88,0X79,0XFF,0XFA,0X57,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X87,0X8D,0XFF,0XE6,0X57,0X87,0X8C,
0XFF,0XF7,0X57,0X88,0X7A,0XFF,0XFA,0X56,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X87,0X9F,0XFF,0XD5,0X57,0X87,0X8E,
0XFF,0XE6,0X57,0X88,0X7C,0XFF,0XF8,0X56,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X77,0XCF,0XFF,0XA5,0X57,0X87,0XAF,
0XFF,0XD5,0X57,0X87,0X9F,0XFF,0XE6,0X56,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X79,0XFF,0XFF,0X75,0X57,0X78,0XEF,
0XFF,0XA5,0X57,0X87,0XCF,0XFF,0XB5,0X56,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X87,0X7C,0XFF,0XFB,0X55,0X67,0X7B,0XFF,
0XFE,0X65,0X57,0X79,0XFF,0XFF,0X85,0X57,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X87,0X9F,0XFF,0XF7,0X55,0X67,0X8E,0XFF,
0XF8,0X55,0X67,0X7D,0XFF,0XFB,0X55,0X67,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X87,0XCF,0XFF,0XB5,0X55,0X77,0X9F,0XFF,
0XD6,0X55,0X77,0X8F,0XFF,0XE7,0X55,0X68,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X77,0XDF,0XFF,0X75,0X56,0X87,0XBF,0XFF,
0XA5,0X56,0X77,0XAF,0XFF,0XB5,0X55,0X78,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X78,0XEF,0XFD,0X65,0X67,0X77,0XCF,0XFF,
0X85,0X57,0X87,0XBF,0XFF,0X95,0X56,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X78,0XEF,0XFD,0X55,0X68,0X77,0XCF,0XFF,
0X75,0X68,0X87,0XBF,0XFF,0X95,0X67,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X78,0XDF,0XFF,0X65,0X78,0X77,0XBF,0XFF,
0X95,0X68,0X87,0XAF,0XFF,0XB5,0X68,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X87,0XCF,0XFF,0XB5,0X78,0X87,0XAF,0XFF,
0XD6,0X68,0X87,0X9F,0XFF,0XE7,0X68,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X87,0X9F,0XFF,0XF8,0X68,0X87,0X8E,0XFF,
0XF9,0X68,0X87,0X7C,0XFF,0XFC,0X67,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X7B,0XFF,0XFA,0X58,0X88,0X7B,0XFF,
0XFC,0X57,0X88,0X78,0XFF,0XFE,0X67,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X77,0XDF,0XD7,0X57,0X88,0X87,0XBF,
0XF8,0X56,0X88,0X87,0XAF,0XFA,0X56,0X78,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X87,0X69,0X75,0X56,0X88,0X87,0X68,
0X85,0X56,0X78,0X87,0X68,0X85,0X55,0X78,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X65,0X55,0X57,0X88,0X88,0X75,
0X55,0X56,0X88,0X88,0X75,0X55,0X56,0X78,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X76,0X55,0X67,0X77,0X77,0X76,
0X55,0X67,0X77,0X77,0X76,0X55,0X57,0X77,0X77,0X77,0X77,0X77,0X77,0X88,0X88,0X88,
0X88,0X88,0X87,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X77,0X88,0X88,0X88,0X88,
0X87,0X88,0X88,0X88,0X88,0X87,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X87,0XAE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,
0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEE,0XEA,0X78,0X88,0X88,
0X88,0X88,0X87,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFA,0X67,0X88,0X88,
0X88,0X88,0X87,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF9,0X46,0X88,0X88,
0X88,0X88,0X87,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF9,0X46,0X88,0X88,
0X88,0X88,0X87,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF9,0X46,0X88,0X88,
0X88,0X88,0X87,0X89,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X86,0X56,0X88,0X88,
0X88,0X88,0X88,0X75,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,
0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X56,0X88,0X88,
0X88,0X88,0X88,0X87,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,
0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X55,0X57,0X88,0X88,
0X88,0X88,0X88,0X87,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,
0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X77,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,0X88,
};






#endif // HAS_GRAPHICAL_TFT
