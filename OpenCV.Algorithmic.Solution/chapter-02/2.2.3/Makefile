
RM = rm -f
CXX = g++
CXXFLAGS = -Wall -g
INCLUDES = 
LDFLAGS = -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs
LDPATH =

SOURCES = $(shell ls *.cpp)
PROGS = $(subst .cpp,,$(SOURCES))
#PROGS = $(SOURCES:%.cpp=%)

all: $(PROGS)
	@echo "PROGS = $(PROGS)" 

clean:
	$(RM) $(PROGS)

%: %.cpp
	$(CXX) -o $@ $(CXXFLAGS) $(INCLUDES) $^ $(LDFLAGS) $(LDPATH)
