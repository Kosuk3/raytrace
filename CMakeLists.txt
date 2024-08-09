cmake_minimum_required( VERSION 3.2 )

if ( WIN32 )
    add_definitions( /Dnot=! )
    endif()
    set( CMAKE_CXX_STANDARD 20 )

# raytrace
project( raytrace )
add_executable( ${PROJECT_NAME} src/main.cpp )
target_link_libraries( ${PROJECT_NAME} )