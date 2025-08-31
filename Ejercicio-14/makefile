COMPILADOR= gcc
FLAGS= -Wall -Wextra -pedantic
TARGET ?= programa

all: $(TARGET)

$(TARGET): $(TARGET).o
	$(COMPILADOR) $(FLAGS) $^ -o $@

%.o: %.c
	$(COMPILADOR) $(FLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean
