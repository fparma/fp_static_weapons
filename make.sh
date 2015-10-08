#!/usr/bin/bash

rm -rf build/FP_Static_Weapons              # Delete Build Folder
mkdir -p build/FP_Static_Weapons            # Create Empty Build Folder
cp -r src/* build/FP_Static_Weapons/        # Copy over all source files
rm -rf build/FP_Static_Weapons/*/includes   # Remove all include files
grunt                                       # Generate the config.cpp file.