/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "../../../inc/MarlinConfig.h"

#if ENABLED(TMC_DEBUG)

#include "../../gcode.h"
#include "../../../feature/tmc_util.h"
#include "../../../module/stepper_indirection.h"

/**
 * M122: Debug TMC drivers
 */
void GcodeSuite::M122() {
  /*
  if (parser.seen('S'))
    tmc_set_report_status(parser.value_bool());
  else
    tmc_report_all();
  */
  if (parser.seen('R')) {
    SERIAL_ECHOPGM("Raw registers:");
    #if ENABLED(X_IS_TMC2660)
      SERIAL_ECHOPGM("\nstepperX.sgcsconf=0x");
      SERIAL_ECHO_F(stepperX.SGCSCONF(), HEX);
      SERIAL_ECHOPGM("=");
      SERIAL_ECHO_F(stepperX.SGCSCONF());
    #endif
    #if ENABLED(Y_IS_TMC2660)
      SERIAL_ECHOPGM("\nstepperY.sgcsconf=0x");
      SERIAL_ECHO_F(stepperY.SGCSCONF(), HEX);
      SERIAL_ECHOPGM("=");
      SERIAL_ECHO_F(stepperY.SGCSCONF());
    #endif
    #if ENABLED(Z_IS_TMC2660)
      SERIAL_ECHOPGM("\nstepperZ.sgcsconf=0x");
      SERIAL_ECHO_F(stepperZ.SGCSCONF(), HEX);
      SERIAL_ECHOPGM("=");
      SERIAL_ECHO_F(stepperZ.SGCSCONF());
    #endif
    #if ENABLED(E0_IS_TMC2660)
      SERIAL_ECHOPGM("\nstepperE0.sgcsconf=0x");
      SERIAL_ECHO_F(stepperE0.SGCSCONF(), HEX);
      SERIAL_ECHOPGM("=");
      SERIAL_ECHO_F(stepperE0.SGCSCONF());
    #endif
  }
}

#endif // TMC_DEBUG
