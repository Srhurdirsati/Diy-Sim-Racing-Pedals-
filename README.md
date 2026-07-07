
# Diy-Sim-Racing-Pedals

I decided to make a DIY sim racing pedal setup For py desk as I already made a steering wheel and a pedal setup was lacking so In this one I'll be making one .

## BOM 

### Bill of Materials (BOM)

| Name | Purpose | Quantity | Total Cost (USD) | Link | Distributor |
| :--- | :--- | :---: | :---: | :--- | :--- |
| Springs | Tension | 4 | \$5.50 | [Amazon Link](https://amzn.in/d/0eIVMHWZ) | Amazon |
| L joints | For Connecting Vertical and horizontal support | 1 | \$2.00 | [Amazon Link](https://amzn.in/d/05FpWmgl) | Amazon |
| Jumper Wire With Breadboard | Connections | 1 | \$3.00 | [Amazon Link](https://amzn.in/d/0d2eNkw3) | Amazon |
| ESP 32 | Microcontroller | 1 | \$7.00 | [Amazon Link](https://amzn.in/d/0fZDF7oJ) | Amazon |
| 2nd Filament | 3D Printing | 1 | \$7.00 | [Amazon Link](https://amzn.in/d/05LWoKht) | Amazon |
| Filament For 3D Printer | 3D Printing | 1 | \$7.00 | [Amazon Link](https://amzn.in/d/0eveRcwI) | Amazon |
| Potentiometers | Controlling acc brake and clutch | 3 | \$8.00 | [Amazon Link](https://amzn.in/d/0eveRcwI) | Amazon |

**Total Estimated Project Cost:** $47


## Images 

<img width="1877" height="980" alt="Screenshot 2026-06-20 011311" src="https://github.com/user-attachments/assets/533cbfff-e6e7-4156-9657-2233e81b6b90" />

<img width="1858" height="975" alt="Screenshot 2026-06-20 011243" src="https://github.com/user-attachments/assets/cf78d818-ae19-4dc8-a299-20fb00b86cfa" />


<img width="1520" height="968" alt="Untitled" src="https://github.com/user-attachments/assets/1c2b568d-61eb-43de-a5ee-28b385e0b9a7" />

<img width="1282" height="781" alt="Screenshot 2026-06-20 010156" src="https://github.com/user-attachments/assets/d8c48704-4964-4f24-b0af-b5686bab4346" />

SPRING THICKNESS- BRAKE > CLUTCH >= ACCELERATOR

## Connections

There are 3 potentiometers which are needed to be connected to Esp-32 via jumper cables and then the es32 shall be placed anywhere at the bottom of the structure in order to fix it and then just upload the code in esp32 and you are readyy to go XD !

## Wiring Diagram 

# ESP32 DIY Sim Racing Pedals Wiring

## Connections

```
                 +----------------------+
                 |       ESP32          |
                 |                      |
3.3V ------------+------------------+------------------+
                 |                  |                  |
                 |                  |                  |
              [Pot 1]           [Pot 2]           [Pot 3]
          Accelerator            Brake             Clutch
                 |                  |                  |
Signal ----------+                  |                  |
     |                              |                  |
GPIO34 ------------------------------                  |
                                                        |
Signal -------------------------------------- GPIO35 ---+
                                                        |
Signal -------------------------------------- GPIO32 ---+

GND -------------+------------------+------------------+
                 |                  |                  |
               Pot1               Pot2               Pot3
                GND                GND                GND
```

## Pin Mapping

| Pedal | ESP32 Pin |
|--------|-----------|
| Accelerator | GPIO34 |
| Brake | GPIO35 |
| Clutch | GPIO32 |
| VCC | 3.3V |
| GND | GND |

## Potentiometer Wiring

Each potentiometer has three pins.

```
Left Pin   → GND
Middle Pin → ESP32 ADC Pin (Signal)
Right Pin  → 3.3V
```

> If the pedal works in reverse, simply swap the **GND** and **3.3V** wires on that potentiometer.

## ADC Pins Used

| GPIO | ADC Channel |
|------|-------------|
| GPIO34 | ADC1_CH6 |
| GPIO35 | ADC1_CH7 |
| GPIO32 | ADC1_CH4 |


## Features 

1 - Just plug and play after the code if finished uploading .

2 - Ultra Precise since 1k Potentiometers used

3 - Since ESP32-S3 is used , It is directly identified as USB controller 

4 - Need less than 10 minutes setting this up .


## ENJOYY XD ! 
