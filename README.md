# Numpad Build

This is my first time trying to build a custom, handwired keyboard with custom firmware using QMK

I started small with  a 4x4 numpad style build, which uses a USB-C Pro Micro as a controller and Gateron Red low profile switches. I have also included a 128x64 OLED screen to learn about using screens with QMK

*image of final build*

The case was designed in FreeCad and is made up of 2 parts, a mounting plate which has holes for the switches, screen and microcontroller, and a bottom plate, which is just used as a flat piece of material for the bottom of the keyboard. Both plates are 3d printed and are separated using 8mm standoffs

The keycaps are 3d printed using an stl from [Printables](printables.com). I'm not really sure which one it was but its just a standard low profile MX style keycap



The firmware for this build was made using QMK and started off pretty much blank, using QMK's 4x4 numpad with pro micro preset. For the keymap, I opted to use layers instead of a traditional Numlock button, allowing for more general usage and access to 2 layers rather than a standard numpad Numlock layout. The default layer functions as a normal numpad with a slightly adjusted keymap, the 1st layer is used for navigation and punctuation keys, and the 2nd layer has custom macros or other frequently used keys

*image of qmk code

Pictures of the whole process can be found in the images folder, CAD files in the CAD folder, and the firmware in the firmware folder. Everything is free to use for anyone that wants to make this for themselves

The CAD folder also contains numpad_design.json, which is a layout created with [Keyboard Layout Editor](https://www.keyboard-layout-editor.com/), designed to be pasted into [Plate & Case Builder](http://builder.swillkb.com/) to generate .dxf files. I then modified the outputted file to include things like the cutouts for the pro micro and OLED

[image of CAD design](images/CAD_plate.png)
