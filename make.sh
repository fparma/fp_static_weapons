#!/usr/bin/bash

rm -rf build/FP_Static_Weapons
mkdir -p build/FP_Static_Weapons
cp -r src/* build/FP_Static_Weapons/
rm -rf build/FP_Static_Weapons/*/includes
grunt