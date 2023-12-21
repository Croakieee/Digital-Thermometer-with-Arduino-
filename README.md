Components:

    Arduino (e.g., Arduino Uno)
    Temperature Sensor (e.g., DS18B20)
    LCD Display (e.g., 16x2 characters)
    Resistors (if required for the temperature sensor)

Connection of Components:

    Connect the temperature sensor to Arduino:
        Connect the VCC of the sensor to 5V on Arduino
        Connect the GND of the sensor to GND on Arduino
        Connect the DATA of the sensor to a digital pin on Arduino (e.g., 2)

    Connect the LCD display to Arduino:
        Connect the VCC of the LCD to 5V on Arduino
        Connect the GND of the LCD to GND on Arduino
        Connect the SDA of the LCD to a digital pin on Arduino (e.g., A4)
        Connect the SCL of the LCD to a digital pin on Arduino (e.g., A5)

    Connect resistors to the temperature sensor (if required):
        Connect a 4.7k resistor between VCC and DATA of the temperature sensor
        How it works:

    The temperature sensor reads the temperature in degrees Celsius.
    The obtained data is displayed on the LCD screen in degrees Celsius and Fahrenheit.

Ideas for Improvement:

    Recording Temperature History:
        Use an SD card to record temperature data.
        Create a file to which new measurements will be added.

    Creating Graphs:
        Connect an additional module, such as a graphical LCD display.
        Implement graphical representation of temperature data.

    Connecting to the Internet for Remote Monitoring:
        Use a Wi-Fi module to connect Arduino to the Internet.
        Send temperature data to a web server or cloud storage.
