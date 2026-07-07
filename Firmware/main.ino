#include <BleGamepad.h>

BleGamepad bleGamepad("DIY Sim Racing Pedals", "CHAPARII", 100);

const int ACC_PIN = 34;
const int BRAKE_PIN = 35;
const int CLUTCH_PIN = 32;

void setup()
{
    Serial.begin(115200);

    analogReadResolution(12);

    bleGamepad.begin();
}

void loop()
{
    if (bleGamepad.isConnected())
    {
        int acc = analogRead(ACC_PIN);
        int brake = analogRead(BRAKE_PIN);
        int clutch = analogRead(CLUTCH_PIN);

        acc = map(acc, 0, 4095, 0, 32767);
        brake = map(brake, 0, 4095, 0, 32767);
        clutch = map(clutch, 0, 4095, 0, 32767);

        bleGamepad.setAxes(
            0,          // X
            0,          // Y
            0,          // Z
            0,          // RX
            acc,        // RY = Accelerator
            brake,      // RZ = Brake
            clutch,     // Slider
            0           // Dial
        );
    }

    delay(5);
}
