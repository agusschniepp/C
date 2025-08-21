COMPILADOR= gcc
FLAGS= -Wall -Wextra -pedantic
TARGET= ejercicioTres

all: $(TARGET)

$(TARGET): ejercicioTres.o
	$(COMPILADOR) $(FLAGS) $^ -o $@

ejercicioTres.o: ejercicioTres.c
	$(COMPILADOR) $(FLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean
