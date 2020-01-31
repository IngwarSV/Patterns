# 
CC = g++
CFLAGS= -c


compile_all:
	$(CC) -std=c++11 Armament.cpp $(CFLAGS)
	$(CC) -std=c++11 Forge.cpp $(CFLAGS)
	$(CC) -std=c++11 RomanForge.cpp $(CFLAGS)
	$(CC) -std=c++11 BarbarianForge.cpp $(CFLAGS)
	$(CC) -std=c++11 Sword.cpp $(CFLAGS)
	$(CC) -std=c++11 Gladius.cpp $(CFLAGS)
	$(CC) -std=c++11 LongSword.cpp $(CFLAGS)
	$(CC) -std=c++11 Shield.cpp $(CFLAGS)
	$(CC) -std=c++11 Scutum.cpp $(CFLAGS)
	$(CC) -std=c++11 RoundShield.cpp $(CFLAGS)

all: compile_all
	$(CC) -std=c++11 main.cpp *.o
	rm *.o

run: all
	a.exe
