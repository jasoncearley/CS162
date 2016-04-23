# This makefile compiles needed files for WK3 Assignment1

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -03

NAME = Assign2

OBJS = Items.o List.o main.o Menu.o 

SRCS = Item.cpp List.cpp main.cpp Menu.cpp

HDRS = Items.hpp List.hpp Menu.hpp

${NAME}: ${OBJS}
	${CXX} ${OBJS} -o ${NAME}
	
Items.o: Items.cpp Items.hpp
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

List.o: List.cpp List.hpp Menu.hpp
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

Menu.o: Menu.cpp Menu.hpp
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

main.o: Menu.cpp Menu.hpp List.cpp List.hpp
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean: 
	rm -i ${OBJS} ${NAME}
