#ifndef APOLLO_BME_H
#define APOLLO_BME_H

#include "ApolloPressureSensor.h"
#include <Adafruit_BME280.h>

/**
 * @brief BME280 I2C sensor
 *
 */
class mksBME280 : public ApolloPressureSensor
{
public:
    mksBME280(uint8_t addr = 0x76);
    ~mksBME280();

    bool begin();
    float readPascal();

private:
    uint8_t _addr;
    Adafruit_BME280 _bme; // I2C
    float zero;
};

#endif
