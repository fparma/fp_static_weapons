# Templating System
Since this Arma mod uses a the Nunjucks templating system instead of the Default BI Preprocessor for handling includes, if's and constants, some introduction would be needed.

## What is Nunjucks?
Nunjucks is a templating engine written by Mozilla for their upcoming Firefox OS. It's been created to provide rich and powerful templating to anything that needs it. It was mainly developed with HTML, CSS and JS Projects in mind, but it can also be used in other projects such as this one.

https://mozilla.github.io/nunjucks/

## Why use Nunjucks over BI's default preprocessor
The first and biggest reason being familiarity and providing useful features not found in the default BI preprocessor.
It's an external tool which has a lot of people working on it, a big community and is very extensible. A big advantage is that it's also possible to use it for files other than cpp, hpp and sqf, shall the need arise.

The ability to have a central config file (config.json in this case) that can contain all the important settings and constants is also very convenient.

## How does it work?
Nunjucks is basically an external "processor" that is implemented in NodeJS, hence the NodeJS Requirement for building the project.

Nunjucks gets called by the grunt task, and starts to read the config.cpp file, which then looks for any Nunjucks tags like {% if variable %}, or {% include "something.hpp" %}, and then processes those and outputs the result into the build/ folder.

## So how do I use Nunjucks?
https://mozilla.github.io/nunjucks/templating.html

This Webpage contains all the tags in the core library. The most important ones being the if and the import tags, which should be self-explanatory.
Just place the tags in one of the cpp or hpp files and it should compile once you run the build task.