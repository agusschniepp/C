COMPILADOR= gcc
FLAGS= -Wall -Wextra -pedantic
TARGET= sizeTipoDeDatosVistosNuevo

all: $(TARGET)

$(TARGET): sizeTipoDeDatosVistosNuevo.o
	$(COMPILADOR) $(FLAGS) $^ -o $@

sizeTipoDeDatosVistosNuevo.o: sizeTipoDeDatosVistosNuevo.c
	$(COMPILADOR) $(FLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean
