#ifndef APOLLO_PRESSURE_SENSOR_H
#define APOLLO_PRESSURE_SENSOR_H


// This class MUST be derived
//MUST implement readPascal() for your sensor!!!
class ApolloPressureSensor
{
    public:
        ApolloPressureSensor() {};
        virtual ~ApolloPressureSensor() {};
        virtual bool begin() {return true;}              // to be able to report error if the sensor is not detected
        virtual float readPascal() = 0; //Implementar en la herencia!!!!!!
        float readMilibar();
        float readMMHg();
        float readCMH2O();
        void update() {;}

    protected:

};


#endif
