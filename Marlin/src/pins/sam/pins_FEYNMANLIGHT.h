/****************************************************************************************
* FeynmanRambo pin assignment (pins_FEYNMANRAMBO.h)
*
****************************************************************************************/
#if MOTHERBOARD == BOARD_FEYNMANLIGHT
#ifndef __SAMG55J19__
 #error Oops!  Make sure you have 'Feynman' selected from the 'Tools -> Boards' menu.
#endif
#define KNOWN_BOARD 1

//Marlin4due support
#define HAVE_TMC2130_DRIVERS 1
#define TMC2130_USES_HW_SPI
//#define TMC2130_USES_SW_ENABLE

#define X_MIN_PIN -1
#define Y_MIN_PIN -1
#undef X_MS1_PIN
#undef X_MS2_PIN
#undef Y_MS1_PIN
#undef Y_MS2_PIN
#undef Z_MS1_PIN
#undef Z_MS2_PIN
#undef E0_MS1_PIN
#undef E0_MS2_PIN
#undef E1_MS1_PIN
#undef E1_MS2_PIN

#define CAB_LED_PIN         28
#define SERVO0_PIN        	 1 //PA1 SERVO_OUT (Pump Servo J24)

#define X_STEP_PIN         34 //PB2  S0_STEP
#define X_DIR_PIN          46 //PB14 S0_DIR
#define X_ENABLE_PIN        5 //PA5 STEP_EN
#define X_MIN_PIN          25 //PA25 ENDSTOP0 (Z1 Endstop J12)
#define X_MAX_PIN          26 //PA26 ENDSTOP3 (G38.3 Endstop J17)
#define X_TMC2130_CS       45 //PB13 S0_nCS
#define X_CS_PIN           45 //PB13 S0_nCS

#define Y_STEP_PIN        43 //PB11 S2_STEP
#define Y_DIR_PIN         42 //PB10 S2_DIR
#define Y_ENABLE_PIN       5 //PA5 STEP_EN
#define Y_MIN_PIN         33 //PB1  ENDSTOP2 (X Endstop J15)
#define Y_TMC2130_CS      30 //PA30 S2_nCS
#define Y_CS_PIN          30 //PA30 S2_nCS

#define Z_STEP_PIN          -1
#define Z_DIR_PIN           -1
#define Z_ENABLE_PIN        -1
#define Z_MIN_PIN           -1
#define Z_MAX_PIN           -1
#define Z_TMC2130_CS        -1
#define Z_CS_PIN            -1

#define E0_STEP_PIN        -1 
#define E0_DIR_PIN         -1 
#define E0_ENABLE_PIN      -1
#define E0_TMC2130_CS      -1 
#define E0_CS_PIN          -1 

#define X2_STEP_PIN        29 //PA29 S1_STEP
#define X2_DIR_PIN         24 //PA24 S1_DIR
#define X2_ENABLE_PIN       5 //PA5 STEP_EN
#define X2_MIN_PIN         27 //PA27 ENDSTOP1 (Z2 Endstop J13)
#define X2_TMC2130_CS      47 //PA30 S2_nCS
#define X2_CS_PIN          47 //PB15 S1_nCS



#define SDPOWER_PIN        -1


//#define SDSS             -1

#define LED_PIN            -1
#define PS_ON_PIN          -1
#define Z_PROBE_PIN      26 //PA26 ENDSTOP3 (G38.3 Endstop J17)
//#define CONTROLLERFAN_PIN  -1 //Marlin1
//#define CONTROLLER_FAN_PIN -1 //Marlin2.0

#define FAN_PIN             23 //PA15 S_FAN_12V //"You cannot set E0_AUTO_FAN_PIN equal to FAN_PIN."
#define FAN2_PIN            -1

#define HEATER_0_PIN        40 //PB8 FCOM4_TX (Dummy Assignment)
#define HEATER_1_PIN        -1
#define HEATER_2_PIN        -1
#define HEATER_BED_PIN      38 //PB6 SWDIO, Used as a dummy pin to prevent compile error if BED thermistor is used. It will not actually output unless reconfigured in CCFG_SYSIO.



#define TEMP_0_PIN          20 //PA20 AIR_THERM (Internal Air Temp J16)
#define TEMP_1_PIN          -1 // 32* PB0 ARRAY_THERN (PI4 Temp J14)
#define TEMP_BED_PIN        19 //PA19 RES_B_THERM (LED Array Temp Internal/J18)
#define TEMP_2_PIN          -1 // 18* PA18 RESIN_THERM (Resin Vat Temp J11)
#define TEMP_CHAMBER_PIN    32 //PB0 ARRAY_THERN (PI4 Temp J14)
#define TEMP_PROBE_PIN		18 //PA18 RESIN_THERM (Resin Vat Temp J11)


#ifdef Z_PROBE_SLED
  #define SLED_PIN         -1
#endif

#ifdef ULTRA_LCD
  #define KILL_PIN           -1 //Button is connected directly to NRST Hardware Reset Pin on SAM3X
  #ifdef NEWPANEL
    #define BEEPER          -1 //arduino pin which triggers an piezzo beeper
    #define LCD_PINS_RS     -1
    #define LCD_PINS_ENABLE -1
    #define LCD_PINS_D4     -1
    #define LCD_PINS_D5     -1
    #define LCD_PINS_D6     -1
    #define LCD_PINS_D7     -1

    #define SDCARDDETECT    -1
    #define SDSS            -1

    //buttons are directly attached using AUX-2
    #define BTN_EN1         -1
    #define BTN_EN2         -1
    #define BTN_ENC         -1

    #define BLEN_C 2
    #define BLEN_B 1
    #define BLEN_A 0

    //encoder rotation values
    #define encrot0 0
    #define encrot1 2
    #define encrot2 3
    #define encrot3 1
  #endif  //NEWPANEL
#else
  #define SDSS            87 //only defined to prevent compile errors
#endif //ULTRA_LCD

//#ifndef SDSUPPORT
  // these pins are defined in the SD library if building with SD support
  //#define SCK_PIN          76
  //#define MISO_PIN         74
  //#define MOSI_PIN         75
//#endif

#endif /* TIGERSHARK */

