/*
Disciplina de Algoritmos e Estruturas de Dados II
Professor Alexandre Prusch Zuge
Arquivo baseado em:
https://people.well.com/user/lonewolf/main/programming/src/util/numeric-limits-c.c
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("\nBits por caractere: %d\n", CHAR_BIT);

    printf("\nLIMITES DOS TIPOS INTEIROS: \n");
    printf("char min: %d\n", CHAR_MIN);
    printf("char max: %d\n", CHAR_MAX);
    printf("signed char min: %d\n", SCHAR_MIN);
    printf("signed char max: %d\n", SCHAR_MAX);
    printf("char max: %u\n", UCHAR_MAX);
    printf("short min: %d\n", SHRT_MIN);
    printf("short max: %d\n", SHRT_MAX);
    printf("unsigned short max: %u\n", USHRT_MAX);
    printf("int min: %d\n", INT_MIN);
    printf("int max: %d\n", INT_MAX);
    printf("unsigned int max: %u\n", UINT_MAX);
    printf("long min: %ld\n", LONG_MIN);
    printf("long max: %ld\n", LONG_MAX);
    printf("unsigned long max: %lu\n", ULONG_MAX);
    printf("long long min: %lld\n", LLONG_MIN);
    printf("long long max: %lld\n", LLONG_MAX);
    printf("unsigned long long max: %llu\n", ULLONG_MAX);

    printf("\nLIMITES DOS TIPOS DE PONTO FLUTUANTE: \n");
    printf("float raiz: %d\n", FLT_RADIX);
    printf("float digitos: %d\n", FLT_DIG);
    printf("float min: %f\n", FLT_MIN);
    printf("float max: %E\n", FLT_MAX);
    printf("float epsilon: %f\n", FLT_EPSILON);
    printf("double digitos: %d\n", DBL_DIG);
    printf("double min: %f\n", DBL_MIN);
    printf("double max: %E\n", DBL_MAX);
    printf("double epsilon: %f\n", DBL_EPSILON);
    printf("long double digits: %d\n", LDBL_DIG);
    printf("long double min: %Lf\n", LDBL_MIN);
    printf("long double max: %LE\n", LDBL_MAX);
    printf("long double epsilon: %Lf\n\n", LDBL_EPSILON);

    return 0;
}


/* ==========================================================================
   Resultados do Mac
   Máquina: MacBook Pro (início de 2015)
   Sistema operacional: macOS 10.15.4
   Compilador: Apple clang version 11.0.3 (clang-1103.0.32.29)


Bits por caractere: 8

LIMITES DOS TIPOS INTEIROS:
char min: -128
char max: 127
signed char min: -128
signed char max: 127
char max: 255
short min: -32768
short max: 32767
unsigned short max: 65535
int min: -2147483648
int max: 2147483647
unsigned int max: 4294967295
long min: -9223372036854775808
long max: 9223372036854775807
unsigned long max: 18446744073709551615
long long min: -9223372036854775808
long long max: 9223372036854775807
unsigned long long max: 18446744073709551615

LIMITES DOS TIPOS DE PONTO FLUTUANTE:
float raiz: 2
float digitos: 6
float min: 0.000000
float max: 3.402823E+38
float epsilon: 0.000000
double digitos: 15
double min: 0.000000
double max: 1.797693E+308
double epsilon: 0.000000
long double digits: 18
long double min: 0.000000
long double max: 1.189731E+4932
long double epsilon: 0.000000

========================================================================== */

/* ==========================================================================
   Resultados do PC
   Máquina: Lenovo T470
   Sistema operacional: Windows 10 Pro
   Compilador: gcc (x86_64-posix-seh-rev2, Built br MinGW-W64 Project) 7.1.0


Bits por caractere: 8

LIMITES DOS TIPOS INTEIROS: 
char min: -128
char max: 127
signed char min: -128
signed char max: 127
char max: 255
short min: -32768
short max: 32767
unsigned short max: 65535
int min: -2147483648
int max: 2147483647
unsigned int max: 4294967295
long min: -2147483648
long max: 2147483647
unsigned long max: 4294967295
long long min: -9223372036854775808
long long max: 9223372036854775807
unsigned long long max: 18446744073709551615

LIMITES DOS TIPOS DE PONTO FLUTUANTE: 
float raiz: 2
float digitos: 6
float min: 0.000000
float max: 3.402823E+038
float epsilon: 0.000000
double digitos: 15
double min: 0.000000
double max: 1.797693E+308
double epsilon: 0.000000
long double digits: 18
long double min: 0.000000
long double max: 3.172905E-317
long double epsilon: 0.000000

========================================================================== */