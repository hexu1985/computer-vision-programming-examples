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
endif ()

include_directories( ${OpenCV_INCLUDE_DIRS} )

#########################
# FOR LEARNING OPENCV 3 #
#########################

AUX_SOURCE_DIRECTORY(. SRC_LIST)

foreach (src_file ${SRC_LIST})
    STRING(REGEX MATCH "[^/]+$" src_basename ${src_file})
    STRING(REPLACE ".cpp" "" exe_file ${src_basename})
    ADD_EXECUTABLE(${exe_file} ${src_file})
    TARGET_LINK_LIBRARIES(${exe_file} ${OpenCV_LIBS})
ENDFOREACH()


###############
### COMPILE ###
###############

# COMPILE EXAMPLES
#add_executable( rng_fill_01 rng_fill_01.cpp )
#add_executable( mat_foreach_01 mat_foreach_01.cpp )
#add_executable( mat_attributes_01 mat_attributes_01.cpp )
#add_executable( mat_get_type mat_get_type.cpp )

################
###   LINK   ###
################
# FIRST LINK EXAMPLES:
#target_link_libraries( rng_fill_01 ${OpenCV_LIBS} )
#target_link_libraries( mat_foreach_01 ${OpenCV_LIBS} )
#target_link_libraries( mat_attributes_01 ${OpenCV_LIBS} )
#target_link_libraries( mat_get_type ${OpenCV_LIBS} )

