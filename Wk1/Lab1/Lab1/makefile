# This makefile compiles needed files for WK1 Lab1

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -03

OBJS = Die.o LoadedDie.o main.o

SRCS = Die.cpp LoadedDie.cpp main.cpp

HDRS = Die.hpp LoadedDie.hpp

Lab1: ${OBJS} ${HDRS}
	${CXX} ${OBJS} -o Lab1
	
${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean: 
	rm -f ${OBJS}
