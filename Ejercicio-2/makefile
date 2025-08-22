COMPILADOR= gcc
FLAGS= -Wall -Wextra -pedantic
TARGET= sizeTipoDeDatosVistos

all: $(TARGET)

$(TARGET): sizeTipoDeDatosVistos.o
	$(COMPILADOR) $(FLAGS) $^ -o $@

sizeTipoDeDatosVistos.o: sizeTipoDeDatosVistos.c
	$(COMPILADOR) $(FLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean
