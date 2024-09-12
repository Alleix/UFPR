/*
Disciplina de Algoritmos e Estruturas de Dados II
Professor Alexandre Prusch Zuge

Implementacao de fila circular de inteiros.
*/

#include <stdio.h>

#define N 11
#define FILA_CHEIA -1
#define FILA_VAZIA -2

struct Fila {
    int fila[N];
    int inicio, fim;
};

// Inicializacao da fila de inteiros
void inicializa_fila(struct Fila *f)
{
    f->inicio = 0;
    f->fim = 0;
}

// Apagar fila de inteiros
void apaga_fila(struct Fila *f)
{
    f->inicio = 0;
    f->fim = 0;
}

// Verificar se fila esta vazia
int fila_vazia(struct Fila *f)
{
    if(f->inicio == f->fim) return 1;
    else return 0;
}

// Enfileirar valor na fila
int enfileira(struct Fila *f, int valor)
{
    if(f->fim == f->inicio - 1 || (f->inicio == 0 && f->fim == N-1))
        return FILA_CHEIA;
    f->fila[f->fim] = valor;
    f->fim++;
    if(f->fim == N)
        f->fim = 0;
    return 0;
}

// Desenfileirar valor da fila
int desenfileira(struct Fila *f)
{
    if(fila_vazia(f))
        return FILA_VAZIA;
    int valor = f->fila[f->inicio];
    f->inicio++;
    if(f->inicio == N)
        f->inicio = 0;
    return valor;
}

int main()
{
    struct Fila f;
    int valor;
    inicializa_fila(&f);
   
    int i;
    for(i = 0; i < N*4+2; i += 2)
    {
        printf("Enfileirando %d\n", i);
        if(enfileira(&f, i) == FILA_CHEIA)
            printf("ERRO: Fila cheia!\n");
        printf("Enfileirando %d\n", i+1);
        if(enfileira(&f, i+1) == FILA_CHEIA)
            printf("ERRO: Fila cheia!\n");
        printf("Removendo valor... ");
        valor = desenfileira(&f);
        if(valor == FILA_VAZIA) printf("ERRO: Fila vazia!\n");
        else printf("%d\n", valor);
    }
    
    apaga_fila(&f);
    return 0;
}
