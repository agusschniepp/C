#include <stdio.h>

// file scope int a = 1;
int fact(int n);

int main () {
    // block scopeint a = 2;
    // printf("%d\n",a);

    // Realizar un programa que imprima el factorial de un n entero
    
    int a;
    printf("Ingrese un numero: \n");
    scanf("%d", &a);

    printf("%d\n",fact(a));
}


int fact(int n){
    if (n < 0) {
    printf("Error: factorial de numero negativo no definido.\n");
    return n;
    }
    int res = 1;
    for (int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}