# Firmware ApolloVentilator

## Requirements:
2 ventilators mode
* Pressure Regulated Volume Controlled (PCV): set pressure delivered during period of inspiration. The voume measured is shown as data on display. 
* Volume Regulated Pressure controlled (VCV): The tidal volume is set and it adapts the pressure to the lowest. Here the important data are: tidal volume, upper alarm and lower current volume. Useful parameters: tidal volume, respiratory rate. There is a limit pressure and during inspiration period.

If patient stops breathing, there is a failsafe that set to mandatory breathing when it's detected.

During inspiration:

* Inspiration pressure: The plateau pressure is adjusted to volume hard limit (32 cmH2O by default, and could increate to 70cmH2O)
* Peak pressure: 2cmH2O greater than plateau.
* VCV pressure limit (15-40cm2 with increments of 5)
* Failsafe valve that opens always at 80cmH20 (or lower)

* PEEP: 5-10 with increments of 5. The circuit must be pressured.
* IE ratio: 1:1, 1:2, 1:3
* Respiratory rate: 10-30 bpm with increments of 2.
* Tidal volume: 40ml +-10, 350 +-50, 250-600 +-50,up to 8000. 
* Weight body and volume calculated based on 6ml/kg.


## Alarms

* Gas failure
* Electricity failure
* Machine switched off
* Inspiration pressure exceeded
* Inspiration pressure not achieved
* PEEP pressure not achieved
* Tidal volume not achieved
* Tidal volume exceeded
* Resistance: peak pressure - plateau pressure > 2cmH2O
* Compliance
* Volume Leakage
