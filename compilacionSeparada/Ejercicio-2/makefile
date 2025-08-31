COMPILADOR = gcc
CFLAGS = -Wall -Wextra -pedantic -MMD -MP
#Nombre del ejecutable
TARGET ?= program
#Dependencias .c
SRCS ?= program.c
#Dependencias .o
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET) : $(OBJS)
	$(COMPILADOR) $(CFLAGS) $^ -o $@

%.o : %.c
	$(COMPILADOR) $(CFLAGS) -c $< -o $@

-include $(OBJS:.o=.d)

clean:
	rm *.o $(TARGET) *.d

.PHONY: all clean
