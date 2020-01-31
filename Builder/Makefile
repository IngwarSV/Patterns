# 
CC = g++
CFLAGS= -c


compile_all:
	$(CC) -std=c++11 Smith.cpp $(CFLAGS)
	$(CC) -std=c++11 SwordTemplate.cpp $(CFLAGS)
	$(CC) -std=c++11 GladiusTemplate.cpp $(CFLAGS)
	$(CC) -std=c++11 LongSwordTemplate.cpp $(CFLAGS)
	$(CC) -std=c++11 Sword.cpp $(CFLAGS)
	$(CC) -std=c++11 Gladius.cpp $(CFLAGS)
	$(CC) -std=c++11 LongSword.cpp $(CFLAGS)

all: compile_all
	$(CC) -std=c++11 main.cpp *.o
	rm *.o

run: all
	a.exe
