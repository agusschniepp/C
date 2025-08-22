COMPILADOR= gcc
FLAGS= -Wall -Wextra -pedantic
TARGET= tipoDeDatosAnchoFijo

all: $(TARGET)

$(TARGET): tipoDeDatosAnchoFijo.o
	$(COMPILADOR) $(FLAGS) $^ -o $@

tipoDeDatosAnchoFijo.o: tipoDeDatosAnchoFijo.c
	$(COMPILADOR) $(FLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean
