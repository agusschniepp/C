#include <stdio.h>
#include <stdint.h>

//Vamos a escribir un programa que escriba en pantalla todos los tipos de dato de ancho fijo

int main() {
    printf("Tipos de datos de ancho fijo en C:\n");

    printf("int8_t: %zu bytes\n", sizeof(int8_t));
    printf("int16_t: %zu bytes\n", sizeof(int16_t));
    printf("int32_t: %zu bytes\n", sizeof(int32_t));
    printf("int64_t: %zu bytes\n", sizeof(int64_t));
    
    printf("int_fast8_t: %zu bytes\n", sizeof(int_fast8_t));
    printf("int_fast16_t: %zu bytes\n", sizeof(int_fast16_t));
    printf("int_fast32_t: %zu bytes\n", sizeof(int_fast32_t));
    printf("int_fast64_t: %zu bytes\n", sizeof(int_fast64_t));
    
    printf("int_least8_t: %zu bytes\n", sizeof(int_least8_t));
    printf("int_least16_t: %zu bytes\n", sizeof(int_least16_t));
    printf("int_least32_t: %zu bytes\n", sizeof(int_least32_t));
    printf("int_least64_t: %zu bytes\n", sizeof(int_least64_t));
    
    printf("intmax_t: %zu bytes\n", sizeof(intmax_t));
    printf("intptr_t: %zu bytes\n", sizeof(intptr_t));
    
    printf("uint8_t: %zu bytes\n", sizeof(uint8_t));
    printf("uint16_t: %zu bytes\n", sizeof(uint16_t));
    printf("uint32_t: %zu bytes\n", sizeof(uint32_t));
    printf("uint64_t: %zu bytes\n", sizeof(uint64_t));
    
    printf("uint_fast8_t: %zu bytes\n", sizeof(uint_fast8_t));
    printf("uint_fast16_t: %zu bytes\n", sizeof(uint_fast16_t));
    printf("uint_fast32_t: %zu bytes\n", sizeof(uint_fast32_t));
    printf("uint_fast64_t: %zu bytes\n", sizeof(uint_fast64_t));
    
    printf("uint_least8_t: %zu bytes\n", sizeof(uint_least8_t));
    printf("uint_least16_t: %zu bytes\n", sizeof(uint_least16_t));
    printf("uint_least32_t: %zu bytes\n", sizeof(uint_least32_t));
    printf("uint_least64_t: %zu bytes\n", sizeof(uint_least64_t));

    return 0;
}

