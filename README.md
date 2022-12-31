# Cmake GTest Template
This repository is a template project for C/C++ projects built with CMake and G-TEST

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

```

## Build_Instruction 
1. Form the project root folder 
    1. For building application : *cmake --build build --target Application* //cmake runs in the current directory with build folder as destination for the application
    2. For building Test suite  : *cmake --build build --target Test_Runner* //cmake runs in the current directory with build folder as destination for the Test_Runner 

## Permissions
1. Please refer to the LICENSE file 

## Contact-Me
1. You can reach out to me on LinkedIn here
https://www.linkedin.com/in/vishal-keshava-murthy-8a2ba1a7/

## To-Do 
1. Integrate CI pipeline with Github/Gitlab 
2. Integrate Doxygen for documentation generation 