#include <stdio.h>
#include <stdlib.h>

int main () {
    // Ejemplo de como funciona la funcion rand() y como con los restos
    // Puedo elejir cuantas posibilidades quiero que hayan
    /*
    for (int i = 0; i < 100; i++){
        int a = rand() % 6;
        if (a == 0){
        printf("%d\n",a);
        };
    };
    */

    int caras[6] = {0};

    for (int i = 0; i < 60000000; i++){
        int a = rand() % 6;
        caras[a] += 1;
    }

    for (int i = 0; i < 6; i++){
        printf("%d\n",caras[i]);
    }
    
    
    return 0;
}