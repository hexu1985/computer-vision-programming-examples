OS ?= $(shell uname -s)

RM = rm -f
CXX = g++
CXXFLAGS = -Wall -g $(shell pkg-config --cflags opencv)
INCLUDES =
LDFLAGS = $(shell pkg-config --libs opencv)
LDPATH =

ifeq ($(OS), Windows_NT)
	CXXFLAGS = -Wall -g 
	INCLUDES = "-I/mingw64/include/opencv4"
	LDFLAGS = -lopencv_imgcodecs -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_video -lopencv_videoio
	LDPATH = "-L/mingw64/lib"
endif

SOURCES = $(shell ls *.cpp)
PROGS = $(SOURCES:%.cpp=%)

all: $(PROGS)
	@echo "PROGS = $(PROGS)" 

clean:
	$(RM) $(PROGS)

%: %.cpp
	$(CXX) -o $@ $(CXXFLAGS) $(INCLUDES) $^ $(LDFLAGS) $(LDPATH)
