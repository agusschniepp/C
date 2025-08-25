#include <stdio.h>

int main () {
    // Realizar un programa que rote un arreglo de enteros a izquierda
    // Puede ser "hardcodeado" el arreglo

    int a[4] = {1,2,3,4};
    int largo = sizeof(a) / sizeof (int);

    int b = a[0];

    for (int i = 0; i < largo; i++){
        
        a[i] = a[i+1];
        if (i == largo - 1){
            a[i] = b;
        };
        printf("%d\n",a[i]);
    }


    return 0;
}