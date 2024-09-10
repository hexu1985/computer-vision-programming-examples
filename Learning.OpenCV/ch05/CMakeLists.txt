cmake_minimum_required(VERSION 2.8)

project( examples )

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) 

find_package( OpenCV REQUIRED )

if ( OpenCV_FOUND )
	message(STATUS "Found opencv with version: " ${OpenCV_VERSION})
else()
	message(STATUS "Not found opencv ")
Endif ()

include_directories( ${OpenCV_INCLUDE_DIRS} )

#########################
# FOR LEARNING OPENCV 3 #
#########################

###############
### COMPILE ###
###############

# COMPILE EXAMPLES
add_executable( example_05-01 example_05-01.cpp )

################
###   LINK   ###
################
# FIRST LINK EXAMPLES:
target_link_libraries( example_05-01 ${OpenCV_LIBS} )
