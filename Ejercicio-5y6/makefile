COMPILADOR= gcc
FLAGS= -Wall -Wextra -pedantic
TARGET= conversion

all: $(TARGET)

$(TARGET): conversion.o
	$(COMPILADOR) $(FLAGS) $^ -o $@

conversion.o: conversion.c
	$(COMPILADOR) $(FLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean
