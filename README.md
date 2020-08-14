# LSI-Heart-Rate-Monitor-Display
Embedded C project that displays the heart rate, Sp02, and cardiac pulse/waveform of a medical patient on a seven segment display. This was created using a PIC18F14K22 MCU and a PICkit3 programmer. 

<img src="https://github.com/katiesanders99/LSI-Heart-Rate-Monitor-Display/blob/master/LSI_HR_Monitor.jpg" width="500" height="400">

[Watch a demo](https://youtu.be/zrtirthJB5c)

## Setup
```
make build 
```

Project files can be executed in Microchip's MPLab X IDE with a PICkit programmer device. Navigate to the projects tap in the IDE, right click on the `seven-segment-delay` project and select `Set as Main Project` in the context menu. In the menu bar, select `Make and Program Device Main Project` to program the MCU, or `Program Device for Debugging Main Project` to debug. 

The PICkit programmer can supply power to the circuit through a computer's USB port by navigating to `Production` and then to `Customize`. In the pop up window, select `PICkit [3]` from the `Categories` sidebar on the left. From the `Option categories` dropdown, select `Power` and check the box next to `Power target circuit from PICkit [3]`. The Voltage level (up to 5.5V) may also be changed in this menu.


## About
`main.c` houses the main content of the project that displays a pateint's heart rate and Sp02 readings. 
`mcc_config` > `device_config.c` contains the configuration bits for the project.
`mcc_config` > `pin_manager.c/h` contains MCC generated macros for the GPIO pins in use in this project.
`cardiac_waveform_variations` includes a text file with experimental sinusoidal display patterns. 




