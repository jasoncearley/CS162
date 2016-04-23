# This makefile compiles needed files for WK1 Assignment1

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -03

OBJS = Menu.o Classes.o main.o 

SRCS = Menu.cpp Classes.cpp main.cpp

HDRS = Menu.hpp Classes.hpp

Assign1: ${OBJS} ${HDRS}
	${CXX} ${OBJS} -o Assign1
	
${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean: 
	rm -i ${OBJS}
