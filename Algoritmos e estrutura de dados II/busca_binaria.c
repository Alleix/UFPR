#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 30000

// Busca valor x no vetor V de tamanho n
int busca_linear(int V[], int n, int x)
{
    int i;
    for(i = 0; i < n; i++)
        if(V[i] == x)  // elemento examinado
            return i;
    return -1;
}

// Busca valor x no subvetor V[esq..dir]
int busca_binaria(int V[], int esq, int dir, int x)
{
    if(dir < esq) return -1;
    int meio = (esq + dir) / 2;
    if(x == V[meio]) return meio; // x foi encontrado
    if(x < V[meio])               // x esta na esquerda
        return busca_binaria(V, esq, meio-1, x);
    else                          // x esta na direita
        return busca_binaria(V, meio+1, dir, x);
}

// Busca valor x no subvetor V[esq..dir]
// Imprime subvetor para fins educacionais
int busca_binaria_ed(int V[], int esq, int dir, int x)
{
    int i, meio = (esq + dir) / 2;
    printf(" ");
    for(i = 0; i < esq; i++) printf("   ");
    for(i = esq; i <= dir; i++)
        if(i == meio) printf("\b\\%2d/", V[i]);
        else printf("%2d ", V[i]);
    printf("\n");
    
    if(dir < esq) return -1;
    if(x == V[meio]) return meio; // x foi encontrado
    if(x < V[meio])               // x esta na esquerda
        return busca_binaria_ed(V, esq, meio-1, x);
    else                          // x esta na direita
        return busca_binaria_ed(V, meio+1, dir, x);
}

// Busca valor x no vetor V de tamanho n
int busca_binaria_iterativa(int V[], int n, int x)
{
    int esq=0, dir=n-1, meio;
    while(dir >= esq) {
        meio = (esq + dir) / 2;
        if(x == V[meio])  // elemento examinado
            return meio;  // x foi encontrado
        if(x < V[meio])   
            dir = meio-1; // x esta na esquerda
        else
            esq = meio+1; // x esta na direita
    }
    return -1;
}