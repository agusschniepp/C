#include <stdio.h>
#include <stdbool.h>

//Realizar un programa que imprima por pantalla todos los tamaños de los tipos de datos vistos en clase

int main(){
    // Variablers de tipo Entero (Z)
    // Con signo
    char c = 10;
    short s = -8712;
    int i = 123456;
    long l = 1234567890;
    long long ll = 123456789012345;
    // Sin signo
    unsigned char uc = 250;
    unsigned short us = 65000;
    unsigned int ui = 4000000000;
    unsigned long ul = 3000000000;
    unsigned long long ull = 1000000000000000;
    // Vatiables de tipo Reales (R)
    // Con signo
    float f = 3.14159;
    double d = 2.718281828459045;
    long double ld = 1.618033988749895;
    // Sin signo
    // No existen tipos de datos reales sin signo en C !!!
    // Variables de tipo Caracter
    // con signo
    char cc = 'A';
    // sin signo
    unsigned char ucc = 'B';
    // Variables de tipo Punteros
    // con signo
    int x = 42;
    int* p = &x;
    char *pc = &cc;
    void *pv = NULL;
    // sin signo
    unsigned int y = 24;
    unsigned int* up = &y;
    unsigned char *upc = &ucc;
    void *upv = NULL;
    // Variables tipo Void
    //void v; es un tipo de dato que no tiene un valor definido, no se puede imprimir
    // Variables tipo booleanos
    // con signo
    bool b = true;
    // sin signo
    _Bool ub = false;

    // Imprimir tamaños de los tipos de datos
    printf("Tamaños de los tipos de datos\n");
    printf("Enteros:\n");
    printf("char: %zu bytes\n", sizeof(c));
    printf("short: %zu bytes\n", sizeof(s));
    printf("int: %zu bytes\n", sizeof(i));
    printf("long: %zu bytes\n", sizeof(l));
    printf("long long: %zu bytes\n", sizeof(ll));
    printf("unsigned char: %zu bytes\n", sizeof(uc));
    printf("unsigned short: %zu bytes\n", sizeof(us));
    printf("unsigned int: %zu bytes\n", sizeof(ui));
    printf("unsigned long: %zu bytes\n", sizeof(ul));
    printf("unsigned long long: %zu bytes\n", sizeof(ull));
    printf("Reales:\n");
    printf("float: %zu bytes\n", sizeof(f));
    printf("double: %zu bytes\n", sizeof(d));
    printf("long double: %zu bytes\n", sizeof(ld));
    printf("Caracteres:\n");
    printf("char: %zu bytes\n", sizeof(cc));
    printf("unsigned char: %zu bytes\n", sizeof(ucc));
    printf("Punteros:\n");
    printf("int*: %zu bytes\n", sizeof(p));
    printf("char*: %zu bytes\n", sizeof(pc));
    printf("void*: %zu bytes\n", sizeof(pv));
    printf("unsigned int*: %zu bytes\n", sizeof(up));
    printf("unsigned char*: %zu bytes\n", sizeof(upc));
    printf("void*: %zu bytes\n", sizeof(upv));
    printf("Booleanos:\n");
    printf("bool: %zu bytes\n", sizeof(b));
    printf("_Bool: %zu bytes\n", sizeof(ub));

    return 0;
}