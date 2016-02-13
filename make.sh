#!/usr/bin/bash

rm -rf build/FP_Static_Weapons                                          # Delete Build Folder
mkdir -p build/FP_Static_Weapons                                        # Create Empty Build Folder
cp -r src/* build/FP_Static_Weapons/                                    # Copy over all source files
rm -rf build/FP_Static_Weapons/*/includes                               # Remove all include files
rm -rf build/FP_Static_Weapons/*/sounds/*.wav                           # Remove all .wav sound files
rm -rf build/FP_Static_Weapons/*.md                                     # Remove Weapon Specific Markdown Documentation
grunt                                                                   # Generate the config.cpp file.
#PBOConsole -pack build/FP_Static_Weapons build/FP_Static_Weapons.pbo    # Generate a PBO using PBOManager. TODO: Mikero's PBO Tools