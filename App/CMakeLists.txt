# CMAKE File for Application folder
# Creates Executable and library 
set(This Application)

set(Sources 
    Source/app.c
)

set(Includes 
    Include/app.h
)

# Create library that can be linked with actual application and test application 
add_library(App_lib ${Sources} ${Includes})

# Create Application 
add_executable(${This} Source/main.c)

# Link created library with application 
target_link_libraries(${This} App_lib)
