#ifndef STDLIB_H
#include<stdlib.h>
#endif

#ifndef STDIO_H
#include<stdio.h>
#endif

#ifndef STRING_H
#include<string.h>
#endif

#ifndef BIGINT_H
#define BIGINT_H

void addBigNumbers(char num1[], char num2[]);
char* subtractBigIntegers(char* num1, char* num2);
int max(int a, int b);
char* multiplyBigIntegers(const char* num1, const char* num2);
void divideBigIntegers(char* dividend, int divisor);

#endif