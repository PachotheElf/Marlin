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

/**
 * Polish
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_PL_H
#define LANGUAGE_PL_H

#define MAPPER_NON
// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " gotowy."
#define MSG_SD_INSERTED                     "Karta wlozona"
#define MSG_SD_REMOVED                      "Karta usunieta"
#define MSG_MAIN                            "Menu glowne"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Wylacz silniki"
#define MSG_AUTO_HOME                       "Auto. poz. zerowa"
#define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "Click to Begin"
#define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#define MSG_LEVEL_BED_CANCEL                "Cancel"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#define MSG_SET_ORIGIN                      "Ustaw punkt zero"
#define MSG_PREHEAT_PLA                     "Rozgrzej PLA"
#define MSG_PREHEAT_PLA_N                   "Rozgrzej PLA "
#define MSG_PREHEAT_PLA_ALL                 "Roz. PLA Wszystko"
#define MSG_PREHEAT_PLA_BEDONLY             "Rozgrzej PLA Loze"
#define MSG_PREHEAT_PLA_SETTINGS            "Ustaw. rozg. PLA"
#define MSG_PREHEAT_ABS                     "Rozgrzej ABS"
#define MSG_PREHEAT_ABS_N                   "Rozgrzej ABS "
#define MSG_PREHEAT_ABS_ALL                 "Roz. ABS Wszystko"
#define MSG_PREHEAT_ABS_BEDONLY             "Rozgrzej ABS Loze"
#define MSG_PREHEAT_ABS_SETTINGS            "Ustaw. rozg. ABS"
#define MSG_COOLDOWN                        "Chlodzenie"
#define MSG_SWITCH_PS_ON                    "Wlacz zasilacz"
#define MSG_SWITCH_PS_OFF                   "Wylacz zasilacz"
#define MSG_EXTRUDE                         "Ekstruzja"
#define MSG_RETRACT                         "Cofanie"
#define MSG_MOVE_AXIS                       "Ruch osi"
#define MSG_MOVE_X                          "Przesun w X"
#define MSG_MOVE_Y                          "Przesun w Y"
#define MSG_MOVE_Z                          "Przesun w Z"
#define MSG_MOVE_E                          "Ekstruzja (os E)"
#define MSG_MOVE_01MM                       "Przesuwaj co .1mm"
#define MSG_MOVE_1MM                        "Przesuwaj co 1mm"
#define MSG_MOVE_10MM                       "Przesuwaj co 10mm"
#define MSG_SPEED                           "Predkosc"
#define MSG_NOZZLE                          "Dysza"
#define MSG_BED                             "Loze"
#define MSG_FAN_SPEED                       "Obroty wiatraka"
#define MSG_FLOW                            "Przeplyw"
#define MSG_CONTROL                         "Ustawienia"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Mnoznik"
#define MSG_AUTOTEMP                        "Auto. temperatura"
#define MSG_ON                              "Wl. "
#define MSG_OFF                             "Wyl."
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Przyspieszenie"
#define MSG_VXY_JERK                        "Zryw Vxy"
#define MSG_VZ_JERK                         "Zryw Vz"
#define MSG_VE_JERK                         "Zryw Ve"
#define MSG_VMAX                            "Vmax"
#define MSG_X                               "X"
#define MSG_Y                               "Y"
#define MSG_Z                               "Z"
#define MSG_E                               "E"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "Vskok min"
#define MSG_AMAX                            "Amax"
#define MSG_A_RETRACT                       "A-wycofanie"
#define MSG_XSTEPS                          "krokiX/mm"
#define MSG_YSTEPS                          "krokiY/mm"
#define MSG_ZSTEPS                          "krokiZ/mm"
#define MSG_ESTEPS                          "krokiE/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Ruch"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_CONTRAST                        "Kontrast LCD"
#define MSG_STORE_EPROM                     "Zapisz w pamieci"
#define MSG_LOAD_EPROM                      "Wczytaj z pamieci"
#define MSG_RESTORE_FAILSAFE                "Ustaw. fabryczne"
#define MSG_REFRESH                         LCD_STR_REFRESH " Odswiez"
#define MSG_WATCH                           "Ekran glowny"
#define MSG_PREPARE                         "Przygotuj"
#define MSG_TUNE                            "Strojenie"
#define MSG_PAUSE_PRINT                     "Pauza"
#define MSG_RESUME_PRINT                    "Wznowienie"
#define MSG_STOP_PRINT                      "Stop"
#define MSG_CARD_MENU                       "Menu karty SD"
#define MSG_NO_CARD                         "Brak karty"
#define MSG_DWELL                           "Uspij..."
#define MSG_USERWAIT                        "Oczekiwanie..."
#define MSG_RESUMING                        "Wznawianie druku"
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Brak ruchu"
#define MSG_KILLED                          "Ubity. "
#define MSG_STOPPED                         "Zatrzymany. "
#define MSG_CONTROL_RETRACT                 "Wycofaj mm"
#define MSG_CONTROL_RETRACT_SWAP            "Z Wycof. mm"
#define MSG_CONTROL_RETRACTF                "Wycofaj  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Skok Z mm"
#define MSG_CONTROL_RETRACT_RECOVER         "Cof. wycof. +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Z Cof. wyc. +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "Cof. wycof.  V"
#define MSG_AUTORETRACT                     "Auto. wycofanie"
#define MSG_FILAMENTCHANGE                  "Zmien filament"
#define MSG_INIT_SDCARD                     "Inicjal. karty SD"
#define MSG_CNG_SDCARD                      "Zmiana karty SD"
#define MSG_ZPROBE_OUT                      "Sonda Z za lozem"
#define MSG_YX_UNHOMED                      "Wroc w XY przed Z"
#define MSG_ZPROBE_ZOFFSET                  "Offset Z"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Blad wyl. kranc."
#define MSG_END_HOUR                        "hours"
#define MSG_END_MINUTE                      "minutes"

#define MSG_DELTA_CALIBRATE                 "Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               "Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrate Center"

#endif // LANGUAGE_PL_H
