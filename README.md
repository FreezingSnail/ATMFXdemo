# ATMLib 2 + ArduboyFX demo

Small demo showcasing ATMLib2 alongside ArduboyFX
The ATMlib must store music in PROGMEM, it is not currently compatible with storing sound data on the FX chip
Includes github action to build and publish realease on tag push

## Installed libraries:
```
❯ arduino-cli lib list
Name             Installed Available      Location                   Description                                           
Arduboy2         6.0.0     -         arduboy-homemade:avr@1.3.9      -                                         
ArduboyFX        1.0.11    -         arduboy-homemade:avr@1.3.9      -    
ATMlib           1.2.4     1.2.6     github.com/moduscreate/ATMlib2  The Arduboy Tracker Music library.
```

ATMLib2 release: https://github.com/moduscreate/ATMlib2/releases/tag/v1.2.4
Song taken from Moduluscreate ATMlib2 exampples: ATMlib2/examples/songs/song01/ (BSD3)

Songs can be created using the ATMLib2_trackEditor submodule
FX images use self masking