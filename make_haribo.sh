#!/usr/bin/bash

rm -rf p:/FP_Static_Weapons                                          # Delete Build Folder
mkdir -p p:/FP_Static_Weapons                                        # Create Empty Build Folder
cp -r src/* p:/FP_Static_Weapons/                                    # Copy over all source files
rm -rf p:/FP_Static_Weapons/*/sounds/*.wav                           # Remove all .wav sound files
rm -rf p:/FP_Static_Weapons/*.md                                     # Remove Weapon Specific Markdown Documentation
#PBOConsole -pack build/FP_Static_Weapons build/FP_Static_Weapons.pbo    # Generate a PBO using PBOManager. TODO: Mikero's PBO Tools
