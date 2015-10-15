# Project Structure

This document details the structure of this project.


```
doc                       | Documentations in Markdown formatting
templates                 | Sample Models, Code and Textures
src                       | Source Code and templates.
  |-> config.cpp          | Main Config file. Contains all includes and vars
  |-> data                | Global files like muzzleflashes
  |-> m2                  | M2 Browning Folder
      |-> README.md       | M2 Browning Markdown Documentations
      |-> *.p3d           | M2 Browning Model Files
      |-> model.cfg       | M2 Browning Model Config
      |-> anim            | M2 Browning Animations
      |-> data            | M2 Browning Textures and Material info
      |-> icon            | M2 Browning Icons for Map and Editor/Zeus
      |-> includes        | M2 Browning configs imported by templates.
          |-> *.hpp       | include files named after respective categories.
.editorconfig             | consistent dev env for devs who use editorconfig
.gitignore                | Make git ignore certain folders
config.json               | Config Vars for templates
Gruntfile.js              | Build file for Grunt build Solution
LICENSE                   | Contains Main Project License
make.sh                   | Build Script that cleans env and sftarts grunt
package.json              | NodeJS Project dependencies like grunt, nunjucks
README.md                 | Main project readme file.
```