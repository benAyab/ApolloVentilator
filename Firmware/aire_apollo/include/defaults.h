#ifndef DEFAULTS_H
#define DEFAULTS_H

#define LCD_DIR 0x27 //I2C Address Display

#define LOG_INTERVAL 10 //milliseconds

// Valores por defecto
#define DEFAULT_ESTATURA 170 // cm
#define DEFAULT_SEXO 0       // 0: varón, 1: mujer
#define DEFAULT_ML_POR_KG_DE_PESO_IDEAL 7
#define DEFAULT_MAX_VOLUMEN_TIDAL 800
#define DEFAULT_MIN_VOLUMEN_TIDAL 240
#define DEFAULT_FLUJO_TRIGGER 3
#define DEFAULT_RPM 15
#define DEFAULT_MAX_RPM 30
#define DEFAULT_MIN_RPM 10
#define DEFAULT_POR_INSPIRATORIO 33 // %
#define DEFAULT_LPM_FLUX_TRIGGER_VALUE -10
#define DEFAULT_CMH20_PICO 45
#define DEFAULT_CMH20_MESETA 32
#define DEFAULT_CMH20_PEEP 14

// ---- Encoders ----
//RPM
#define PIN_ENC_RPM_DT 12
#define PIN_ENC_RPM_CLK 13
#define PIN_ENC_RPM_SW 0
// % insuflacion
#define PIN_ENC_PCTINS_DT 10
#define PIN_ENC_PCTINS_CLK 11
#define PIN_ENC_PCTINS_SW 0
// Vol Tidal
#define PIN_ENC_TIDAL_DT 8
#define PIN_ENC_TIDAL_CLK 9
#define PIN_ENC_TIDAL_SW 0

#endif