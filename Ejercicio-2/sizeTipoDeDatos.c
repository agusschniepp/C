#include <stdio.h>
#include <stdbool.h>

int main(){
    // Variablers de tipo Entero (Z)
    char c;
    short s;
    int i;
    long l;
    //long long ll;
    // Vatiables de tipo Reales (R)
    //float f;
    //double d;
    //long double ld;
    // Variables de tipo Caracter
    //char cc;
    // Variables de tipo Punteros
    //int *p;
    //char *pc;
    //void *pv;
    // Variables tipo Void
    //void v;
    // Variables tipo booleanos
    //bool b;

    c = 10;
    s = -8712;
    i = 123456;
    l = 1234567890;

    //Imprimir en pantalla en tamaño de algunos tipos de datos
    printf("char(%lu): %d \n", sizeof(c), c);
    printf("short(%lu): %d \n", sizeof(s), s);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("long(%lu): %ld \n", sizeof(l), l);

    return 0;
}
