#include <stdio.h>

int main () {
    // Realizar un programa que rote un arreglo de enteros a izquierda
    // Puede ser "hardcodeado" el arreglo
    // Generalizar el ejercicio anterior para que la rotacion sea un parametro
    // De entrada

    int a[4] = {1,2,3,4};
    int largo = sizeof(a) / sizeof (int);
    int parametro;

    printf("Ingrese un valor para a: ");
    scanf("%d", &parametro);   // &a = dirección de memoria de 'a'

    for (int i = 0; i < parametro; i++){

    int b = a[0];
    for (int i = 0; i < largo; i++){
        
        a[i] = a[i+1];
        if (i == largo - 1){
            a[i] = b;
        };
        printf("%d\n",a[i]);
    }
    printf("\n");
    };

    return 0;
}