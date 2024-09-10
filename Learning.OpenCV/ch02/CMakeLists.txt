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
add_executable( example_02-01 example_02-01.cpp )
add_executable( example_02-02 example_02-02.cpp )
add_executable( example_02-03 example_02-03.cpp )
add_executable( example_02-04 example_02-04.cpp )
add_executable( example_02-05 example_02-05.cpp )
add_executable( example_02-06 example_02-06.cpp )
add_executable( example_02-07 example_02-07.cpp )
add_executable( example_02-08 example_02-08.cpp )
add_executable( example_02-09 example_02-09.cpp )
add_executable( example_02-10 example_02-10.cpp )
add_executable( example_02-11 example_02-11.cpp )

################
###   LINK   ###
################
# FIRST LINK EXAMPLES:
target_link_libraries( example_02-01 ${OpenCV_LIBS} )
target_link_libraries( example_02-02 ${OpenCV_LIBS} )
target_link_libraries( example_02-03 ${OpenCV_LIBS} )
target_link_libraries( example_02-04 ${OpenCV_LIBS} )
target_link_libraries( example_02-05 ${OpenCV_LIBS} )
target_link_libraries( example_02-06 ${OpenCV_LIBS} )
target_link_libraries( example_02-07 ${OpenCV_LIBS} )
target_link_libraries( example_02-08 ${OpenCV_LIBS} )
target_link_libraries( example_02-09 ${OpenCV_LIBS} )
target_link_libraries( example_02-10 ${OpenCV_LIBS} )
target_link_libraries( example_02-11 ${OpenCV_LIBS} )
