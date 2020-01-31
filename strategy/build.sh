#! /bin/bash

g++ -std=c++11 -c Spell.cpp
g++ -std=c++11 -c Fireball.cpp
g++ -std=c++11 -c Heal.cpp
g++ -std=c++11 -c Wizard.cpp
g++ -std=c++11 main.cpp *.o
rm *.o
