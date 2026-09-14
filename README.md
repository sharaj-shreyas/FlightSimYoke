# FlightSimYoke 
This is a flight simulator yoke and throttle mixture that we designed and built from scratch with some design references from the CadetYoke project.

## Credits - Makerspace Batch of '26
-> Sharaj Shreyas:- Hardware Primary, CAD Primary, Makerspace President, shopping bargainer.
-> Sanath Sanjay Shet:- Software Primary, Slay Queen.
-> Lauren Marian Patrao:- Math genius, emotional support 🤣.

## Read this upto the technical details warning Before doing anything silly with our Project!

## More about the project 
This project started after our JEE exams.. when we were practically jobless and had nothing to do. We came across CadetYokeV2 (https://www.thingiverse.com/thing:4884092), and we knew we had to build this. We started off with a plan to build 4 of these, 1 being the initial version, and then one V2 for the club and one each for Sanath and me. But that did not happen ofc.  We also wanted to build rudder pedal and make the yoke removable and have a steering wheel extension asw but then i had to leave to Gandhinagar 🥀.
When we started printing the files on the bamboo.. we had our first regret. We printed it in the worst setting and worst filament to save time and money but trust me guys, it's not worth it. Anyway, we proceeded with all the building part, and that's when we realised that the printed parts had also warped cuz idiotic me didnt put any supports and rafts. Second regret we went to a hardware shop to buy pipe for the shaft cuz that dude is laurens something and we were expecting a discount. That mf robbed us 🥀. Printing took so much time that we fixed the Creality printer as well, so that we could get things done faster. Fixing the duelmaze and the radiotelescope had already taken too much time and we were far behind schedule. Lauren still had hope that we would finish the pedals, but sadly, we couldn't. Hoping further batches come and fix that as well. 

### Technical Details Warning - Pay attention if you're in charge of setting this up.

## Initial Hardware Setup
1. Firstly, all connections to the Pro Micro need to be made. Check the code for connections
2. Connect the Pro Micro to your computer.
3. Tighten the screws under the green part that slides on the telescopic rails.

## Initial Software setup
1. Once plugged in, the device should show up in Device Manager as a human interface device, specifically a joystick. Do the config for the joystick and choose the axis properly.
2. We don't have a rudder channel, so u can use two keys for now. Or be an expert pilot like me 😜.
3. On MSFS, map the channels to the respective axis and set expo settings (optional).
4. enjoy!

## CAD issues 
1. The throttle and mixture knobs base isn't designed well.. better to redesign
2. Use the adapter for rods given as a separate file from the one inside the throttle+mix file.
3. Try to use exact screws wherever mentioned (Sanath fucking shet just didn't go according to my design)
4. Don't print everything randomly. I have uploaded CAD files with all parts (some are unnecessary and were used for design reference). Check what parts are necessary and then print accordingly. The CAD files also have their edit history with them. Make the best use of them to suit your hardware.

##  Troubleshooting
1. Something broke?? go kys
2. No response usually means loose wires or you've fried the board.
3. Not detecting as a HID device - figure out the driver stuff.
4. If any axis moves backwards in Windows USB Game Controllers (joy.cpl) or MSFS/X-Plane, invert the read value in code (like - FlightYoke.setYAxis(1023 - pitchVal);).

## Requests:
1. Build rudder pedals.
2. Don't break it, the setup is kinda delicate.
3. Think of meaningful upgrades.

## Contributing:
To contribute, make sure to open a branch first, commit there, and then we will review it and merge your pull request.

# Current:
The current code is very basic, and not intended to be the final version as of now, it will, however, be modified over the coming days and will slowly turn into the main source code, after lots of flightsim ofc.

