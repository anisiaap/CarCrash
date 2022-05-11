
# Car Crash Detection and Black Box Recording

The aim of this project is to detect **car crashes** using an Arduino Mega board and different sensors, and to react accordingly to the event that happened: to send the car's coordinates to the authorities, or, in our case, to a specific person via GSM. 


# Technologies used

In order to create the project, there was used the **Arduino IDE** along with the **Visual Studio Code** editor. Any kind of file editor is suitable.

## Compiling the project
For compiling the project properly using the Arduino IDE, first we need to **copy** all the folders we have created for the project(except the main) into the Arduino **Libraries** predefined folder. After that, we need to include, from the IDE, all the folders we just copied as libraries for the Arduino. 

``Open Arduino Sketch---->Include Library--->Add .Zip Library--->Select each folder from the "Libraries" individually.``

After that, all we need is to select the board: **"Arduino Mega or Arduino Mega 2560"**,  and the port to which we connected the Arduino.
> **Note:** Don't forget to download from the Arduino IDE the MPU6050_light.h library and the Wire.h library.
# Documentation

All the files and folders including the project architecture are presented in [CarCrashDetection](https://github.com/anisiaap/CarCrash/tree/main/CarCrashDetection "CarCrashDetection"). The file needed to be compile in the Arduino is in [main](https://github.com/anisiaap/CarCrash/tree/main/main "main"), and the folders including the code itself are in [libraries](https://github.com/anisiaap/CarCrash/tree/main/libraries "libraries").


# Status

Currently the project is still ongoing. Changes are daily uploaded. For the moment, I am working on transsmiting the signal from the GPS, when a crash happened,  to a SIM card.
