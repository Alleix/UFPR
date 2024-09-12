/*
Disciplina de Algoritmos e Estruturas de Dados II
Professor Alexandre Prusch Zuge

Implementacao de pilha de inteiros.
*/

#include <stdio.h>

typedef int TPilha;

#define N 5
#define SUCESSO -1
#define PILHA_CHEIA -2
#define PILHA_VAZIA -3

struct Pilha {
    int pilha[N];
    int tamanho;
};

// Inicializacao da pilha de inteiros
void inicializa_pilha(struct Pilha *p)
{
    p->tamanho = 0;
}

// Apagar pilha de inteiros
void apaga_pilha(struct Pilha *p)
{
    p->tamanho = 0;
}

// Verificar se pilha esta vazia
int pilha_vazia(struct Pilha *p)
{
    if(p->tamanho == 0) return 1;
    else return 0;
}

// Empilhar valor na pilha
int push(struct Pilha *p, TPilha valor)
{
    if(p->tamanho == N)
        return PILHA_CHEIA;
    p->pilha[p->tamanho] = valor;
    p->tamanho++;
    return SUCESSO;
}

// Desempilhar valor da pilha
int pop(struct Pilha *p)
{
    if(pilha_vazia(p))
        return PILHA_VAZIA;
    TPilha valor = p->pilha[p->tamanho - 1];
    p->tamanho--;
    return valor;
}

int main()
{
	struct Pilha p;
    TPilha valor;
    inicializa_pilha(&p);
    
    printf("Empilhando 5\n");
    if(push(&p, 5) == PILHA_CHEIA)
        printf("ERRO: pilha cheia!\n");
    printf("Empilhando 8\n");
    if(push(&p, 8) == PILHA_CHEIA)
        printf("ERRO: pilha cheia!\n");
    printf("Empilhando 2\n");
    if(push(&p, 2) == PILHA_CHEIA)
        printf("ERRO: pilha cheia!\n");
    
    printf("Removendo valor... ");
    valor = pop(&p);
    if(valor == PILHA_VAZIA) printf("ERRO: pilha vazia!\n");
    else printf("%d\n", valor);
    
    printf("Empilhando 7\n");
    if(push(&p, 7) == PILHA_CHEIA)
        printf("ERRO: pilha cheia!\n");
    
    printf("Removendo valor... ");
    valor = pop(&p);
    if(valor == PILHA_VAZIA) printf("ERRO: pilha vazia!\n");
    else printf("%d\n", valor);
    printf("Removendo valor... ");
    valor = pop(&p);
    if(valor == PILHA_VAZIA) printf("ERRO: pilha vazia!\n");
    else printf("%d\n", valor);
    
    apaga_pilha(&p);
    
    printf("\nTESTE 2\n\n");
    inicializa_pilha(&p);
    
    int i;
    for(i = 0; i < N*2+2; i += 2)
    {
        printf("Empilhando %d\n", i);
        if(push(&p, i) == PILHA_CHEIA)
            printf("ERRO: pilha cheia!\n");
        printf("Empilhando %d\n", i+1);
        if(push(&p, i+1) == PILHA_CHEIA)
            printf("ERRO: pilha cheia!\n");
        printf("Removendo valor... ");
        valor = pop(&p);
        if(valor == PILHA_VAZIA) printf("ERRO: pilha vazia!\n");
        else printf("%d\n", valor);
    }
    
    apaga_pilha(&p);
    return 0;
}