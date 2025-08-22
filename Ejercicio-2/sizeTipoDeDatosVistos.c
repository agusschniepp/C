#include <stdio.h>
#include <stdbool.h>

int main(){
    // Variablers de tipo Entero (Z)
    char c;
    short s;
    int i;
    long l;
    long long ll;
    // Vatiables de tipo Reales (R)
    float f;
    double d;
    long double ld;
    // Variables de tipo Caracter
    char cc;
    // Variables de tipo Punteros
    int* p;
    //char *pc;
    //void *pv;
    // Variables tipo Void
    //void v; es un tipo de dato que no tiene un valor definido, no se puede imprimir
    // Variables tipo booleanos
    bool b;

    c = 10;
    s = -8712;
    i = 123456;
    l = 1234567890;
    ll = 123456789012345;
    f = 3.14159;
    d = 2.718281828459045;
    ld = 1.618033988749895;
    cc = 'A';
    int ejemplo;
    ejemplo = 42;
    p = &ejemplo;
    //*pc = 'B';
    //*pv = NULL;
    //v = NULL;
    b = true;


    //Imprimir en pantalla el tamaño de los tipos de datos
    printf("char(%lu): %d \n", sizeof(c), c);
    printf("short(%lu): %d \n", sizeof(s), s);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("long(%lu): %ld \n", sizeof(l), l);
    printf("long long(%lu): %lld \n", sizeof(ll), ll);
    printf("float(%lu): %f \n", sizeof(f), f);
    printf("double(%lu): %lf \n", sizeof(d), d);
    printf("long double(%lu): %Lf \n", sizeof(ld), ld);
    printf("char(%lu): %c \n", sizeof(cc), cc);
    printf("int *p*(%zu): %p \n", sizeof(p),(void*)p);
    //printf("char*(%lu): %p \n", sizeof(pc), pc);
    //printf("void*(%lu): %p \n", sizeof(pv), pv);
    //printf("void(%lu): %p \n", sizeof(v), v);
    printf("bool(%lu): %d \n", sizeof(b), b);    

    return 0;
}
