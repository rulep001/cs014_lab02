#Character makefile

#Variables
COMPILE = g++
FLAGS = -W -Wall -Werror -g
OBJS = IntList.o main.o

#Targets

all: main.cpp $(OBJS)
	$(COMPILE) $(FLAGS) -o a.out $(OBJS)

IntList.o: IntList.cpp IntList.h
	$(COMPILE) $(FLAGS) -c IntList.cpp

clean:
	rm -rf *~ *.o a.out