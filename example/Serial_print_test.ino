#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <MAX44009.h>

#define SEALEVELPRESSURE_HPA (1013.25)

Adafruit_BME280 bme; //  I2C Define BME280
MAX44009 sensor;    //   I2C Define MAX44009

unsigned long delayTime=3000;

void setup() {
  Serial.begin(9600);
  Serial.println(F("BME280 test"));
  bool status;
  status = bme.begin(0x76);  
  if (!status) {
    Serial.println("Could not find a valid BME280 sensor, check wiring!");
    while (1);
  }


void loop() { 
 // Output data to serial monitor
  Serial.print("Ambient Light luminance :");
  Serial.print(sensor.get_lux());
  Serial.println(" lux");

  Serial.print("Temperature = ");
  Serial.print(bme.readTemperature());
  Serial.println(" *C");

  // Convert temperature to Fahrenheit
  /*Serial.print("Temperature = ");
  Serial.print(1.8 * bme.readTemperature() + 32);
  Serial.println(" *F");*/
  
  Serial.print("Pressure = ");
  Serial.print(bme.readPressure() / 100.0F);
  Serial.println(" hPa");

  Serial.print("Approx. Altitude = ");
  Serial.print(bme.readAltitude(SEALEVELPRESSURE_HPA));
  Serial.println(" m");

  Serial.print("Humidity = ");
  Serial.print(bme.readHumidity());
  Serial.println(" %");
  Serial.println();
  delay(delayTime);
}
