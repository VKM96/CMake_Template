# Cmake GTest Template {#mainpage}
This repository is a template project for C/C++ projects built with CMake, G-TEST and Doxygen

## Table of contents
- [Project-structure](#project-structure)
- [Build_Instruction](#Build_Instruction)
- [Permission](#Permissions)
- [Contact-Me](#Contact-Me)
- [To-Do](#To-Do)

## Project-structure 
The project is structured in the form of Application folder and Test folder, each with its own executables 
The central idea is to create an application library that, along with the G-test library gets linked with a test application 
G-Test is fetched remotely
Doxygen generates files for application through CMake

```
CMAKE_TEMPLATE

¦   CMakeLists.txt
¦   LICENSE
¦   README.md
¦   
+---App
¦   ¦   CMakeLists.txt
¦   ¦   
¦   +---Include
¦   ¦       app.h
¦   ¦       
¦   +---Source
¦           app.c
¦           main.c
¦           
+---Test
¦    ¦   CMakeLists.txt
¦    ¦   
¦    +---Include
¦    +---Source
¦            AppTest.cpp
¦
+---build  
+---docs 
¦    +---html
¦    +---Doxyfile.in
¦    +---Doxyfile.Out

```

## Build_Instruction 
1. Form the project root folder 
    1. For building application : *cmake --build build --target Application* //cmake runs in the current directory with build folder as destination for the application
    2. For building Test suite  : *cmake --build build --target Test_Runner* //cmake runs in the current directory with build folder as destination for the Test_Runner 

## Permissions
1. Please refer to the LICENSE file 

## Contact-Me
- [vishal keshava Murthy](https://www.linkedin.com/in/vishal-keshava-murthy-8a2ba1a7/) on LinkedIn
- [vishal keshava Murthy](https://github.com/VKM96) on GIT-HUB

## To-Do 
1. Integrate CI pipeline with Github/Gitlab 