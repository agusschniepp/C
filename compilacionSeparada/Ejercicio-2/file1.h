// file1.h
#ifndef FILE1_H
#define FILE1_H
#include <stdio.h>
#include "file1.h"
extern int count; //Declaracion de la variable count como extern
void print_count();
#endif // FILE1_H