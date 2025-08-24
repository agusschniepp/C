#include <stdio.h>

int main(){
    //Realizar un programa que imprima en pantalla las siguientes operaciones
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    printf("a + b * c / d = %d\n", a + b * c / d);
    printf("a %% b = %d\n", a % b);
    printf("a == b, a !=b = %d, %d\n", a == b, a != b);
    printf("a & b, a | b = %x, %x\n", a & b, a | b);
    printf("~a = %x\n", ~a);
    printf("a && b, a || b = %d, %d\n", a && b, a || b);
    printf("a << b = %x\n", a << b);
    printf("a >> b = %x\n", a >> b);
    printf("a += b = %d\n", a += b);
    printf("a -= b = %d\n", a -= b);
    printf("a *= b = %d\n", a *= b);
    printf("a /= b = %d\n", a /= b);
    printf("a %%= b = %d\n", a % b);
    // Realizar un programa que muestre la diferencia entre i++ e ++i
    printf("Diferencias entre i++ y ++i\n");

    int i = 0;
    printf("i = %d\n", i);
    printf("i++ = %d\n", i++);
    printf("then i = %d\n", i);
    printf("\n");
    printf("i = %d\n", i);
    printf("++i = %d\n", ++i);
    printf("then i = %d\n", i);
    
    return 0;
}