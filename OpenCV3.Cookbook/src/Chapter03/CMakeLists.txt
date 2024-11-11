# cmake for OpenCV Cookbook 3rd edition chapter 03
# your opencv/build directory should be in your system PATH

# set minimum required version for cmake
cmake_minimum_required(VERSION 2.8)

# Requires OpenCV
#FIND_PACKAGE( OpenCV 3.0.0 REQUIRED )
FIND_PACKAGE( OpenCV REQUIRED )
MESSAGE("OpenCV version : ${OpenCV_VERSION}")

include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIB_DIR})

# add executable
add_executable( colorDetection colorDetection.cpp colordetector.cpp)
add_executable( extractObject extractObject.cpp)
add_executable( huesaturation huesaturation.cpp)

# link libraries
target_link_libraries( colorDetection ${OpenCV_LIBS})
target_link_libraries( extractObject ${OpenCV_LIBS})
target_link_libraries( huesaturation ${OpenCV_LIBS})

# copy required images to every directory with executable
SET (IMAGES ${CMAKE_SOURCE_DIR}/images/boldt.jpg ${CMAKE_SOURCE_DIR}/images/girl.jpg)
FILE(COPY ${IMAGES} DESTINATION .)
FILE(COPY ${IMAGES} DESTINATION "Debug")
FILE(COPY ${IMAGES} DESTINATION "Release")
