/*
Disciplina de Algoritmos e Estruturas de Dados II
Professor Alexandre Prusch Zuge
*/

#include <stdio.h>

int main()
{
    char c = 'A';

    printf("====================================\n"
           "Teste de valor inteiro de caractere:\n"
           "====================================\n");
    printf("char %c, valor inteiro %d\n", c, c);

    printf("\n==========================="
           "\nCaracteres da tabela ASCII:"
           "\n===========================\n");
    for(c = 32; c < 127; c++)
        printf("decimal %d, char '%c'\n", c, c);
    
    printf("\n========================================="
           "\nImprimindo apenas letras da tabela ASCII:"
           "\n=========================================\n");
    for(c = 'A'; c <= 'Z'; c++)
        printf("decimal %d, char '%c'\n", c, c);
    for(c = 'a'; c <= 'z'; c++)
        printf("decimal %d, char '%c'\n", c, c);

    return 0;
}
