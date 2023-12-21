#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal_I2C.h>

// Temperature sensor connection
#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

// LCD display connection
LiquidCrystal_I2C lcd(0x27, 16, 2);  // 0x27 - I2C address of the LCD

void setup() {
  Serial.begin(9600);
  sensors.begin();
  lcd.begin(16, 2);
  lcd.backlight();
}

void loop() {
  sensors.requestTemperatures();
  float temperatureC = sensors.getTempCByIndex(0);
  float temperatureF = sensors.toFahrenheit(temperatureC);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperatureC);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(temperatureF);
  lcd.print(" F");

  delay(1000);  // 1-second delay
}
