#include <stdio.h>
#include <stdint.h>

int main () {
    // Realizar un programa que compare si los 3 bits
    // Mas significatigos de una palabra de 32 bits son 
    // iguales a los 3 bits mas bajos de otra palabra de 32 bits

    int32_t a = 0x81234566;
    int32_t b = 0x81234564;

    int32_t c = a & 0xc0000000;
    int32_t d = b & 0x00000007;

    d = d << (int) ((sizeof(int32_t) * 8) - 3);

    printf("Upper(3 bits) a = Lower(3 bits) b? %d, valor: %d, tamaño: %lu Bits\n", c == d, d, (sizeof(int32_t) * 8));
    return 0;
};