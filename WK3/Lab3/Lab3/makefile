# This makefile compiles needed files for WK1 Assignment1

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -03

OBJS = Die.o Game.o LoadedDie.o main.o Menu.o 

SRCS = Die.cpp Game.cpp LoadedDie.cpp main.cpp Menu.cpp

HDRS = Die.hpp Game.hpp LoadedDie.hpp Menu.hpp

Lab3: ${OBJS} ${HDRS}
	${CXX} ${OBJS} -o Lab3
	
${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean: 
	rm -i ${OBJS} Lab3
