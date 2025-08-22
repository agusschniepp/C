#include <stdio.h>

int main() {
    int mensaje_secreto[] = {116, 104, 101, 32, 103, 105, 102, 116, 32, 111,
    102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32,
    103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105,
    111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110};
    
    // sizeof()-> me devuelve el tamaño en bytes, por lo que tengo que dividirlo 
    // por el tamaño en bytes de un int, que es el tipo de dato correspondiente a mensaje_secreto


    char decoded[(int) (sizeof(mensaje_secreto)/sizeof(int))];
    for (int i = 0; i < (int) (sizeof(mensaje_secreto)/sizeof(int)); i++) {
        decoded[i] = (char) mensaje_secreto[i];
    }
    for (int i = 0; i < (int) (sizeof(mensaje_secreto)/sizeof(int)); i++){
        printf("%c", decoded[i]);
    }
    printf("\n");

    // Realizar un programa que imprima el valor de 0.1 como float y como double. Luego,
    // realizar un cast de float a int y de double a int.

    float f = 0.1f;

    printf("Float: %f, Bytes: %lu\n", f,sizeof(f));
    printf("Float como double: %f, Bytes: %lu\n", (double) (f), sizeof((double) (f)));
    // Cast de float a int y double a int
    double d = 0.1;
    printf("Cast de float a int: %d\n", (int) (f));
    printf("Cast de double a int: %d\n", (int) (d));


    

    return 0;
}