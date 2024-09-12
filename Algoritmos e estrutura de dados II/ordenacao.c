#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

void bubblesort(int V[], int n)
{
    int i, j, trocou, aux;
    for(i = n-1; i > 0; i--) {
        trocou = 0;
        for(j = 1; j <= i; j++)
            if(V[j-1] > V[j]) {
                aux = V[j-1];  V[j-1] = V[j];  V[j] = aux;
                trocou = 1;
            }
        if(!trocou) break;
    }
}

void insertionsort(int V[], int n)
{
    int i, j, aux;
    for(i = 1; i <= n-1; i++) {
        aux = V[i];
        j = i-1;
        while(j >= 0 && V[j] > aux) {
            V[j+1] = V[j];
            j--;
        }
        V[j+1] = aux;
    }
}
void selectionsort(int V[], int n)
{
    int i, j, aux, menor;
    for(i = 0; i <= n-2; i++) {
        menor = i;
        for(j = i+1; j <= n-1; j++)
            if(V[j] < V[menor])
                menor = j;
        aux = V[menor];  V[menor] = V[i];  V[i] = aux;
    }
}

// Recebe V de modo que V[esq..meio] e V[meio+1..dir]
// estao ordenados em ordem nao-decrescente e ordena V[esq..dir].
// W deve ser vetor auxiliar com mesmo tamanho que V.
void intercala(int V[], int esq, int meio, int dir, int *W)
{
    int i = esq, j = meio+1, k = esq;
    while(i <= meio && j <= dir)
        if(V[i] <= V[j]) {
            W[k] = V[i];
            k++; i++;
        } else {
            W[k] = V[j];
            k++; j++;
        }
    while(i <= meio) {
        W[k] = V[i];
        k++; i++;
    }
    while(j <= dir) {
        W[k] = V[j];
        k++; j++;
    }
    for(k = esq; k <= dir; k++)
        V[k] = W[k];
}

void mergesort_recursao(int V[], int esq, int dir, int *W)
{
    if(esq < dir) {
        //printf("Ordenando de %d a %d.\n", esq, dir);
        //imprime_subvetor(V, N, esq, dir);
        int meio = (esq + dir) / 2;   //// devia ter um +1
        mergesort_recursao(V, esq, meio, W);
        mergesort_recursao(V, meio+1, dir, W);
        intercala(V, esq, meio, dir, W);
        //printf("Vetor ordenado de %d a %d.\n", esq, dir);
        //imprime_subvetor(V, N, esq, dir);
    }
}

void mergesort(int V[], int n)
{
    int *W = malloc(n * sizeof(int));
    if(W == NULL) { printf("Erro, falta de memoria!\n"); return; }
    mergesort_recursao(V, 0, n-1, W);
    free(W);
}

// Mediana-de-3 para uso no pivoteamento do QuickSort
int mediana3(int V[], int a, int b, int c)
{
    if(V[a] <= V[b]) {
        if(V[b] <= V[c]) return b; // a <= b <= c
        if(V[a] <= V[c]) return c; // a <= c <= b
        return a; // c <= a <= b
    } else { // V[b] < V[a]
        if(V[a] <= V[c]) return a; // b <= a <= c
        if(V[b] <= V[c]) return c; // b <= c <= a
        return b; // c <= b <= a
    }
}

// Particao do QuickSort
int particao(int V[], int esq, int dir)
{
    int i = esq, j = dir-1, aux;
    while(i <= j) {
        while(V[i] < V[dir]) i++;
        while(V[j] > V[dir]) j--;
        if(i <= j) {
            aux = V[j]; V[j] = V[i]; V[i] = aux;
            i++; j--;
        }
    }
    aux = V[i]; V[i] = V[dir]; V[dir] = aux;
    return i;
}

// Ordena V[esq..dir-1] com QuickSort
void quicksort_recursao(int V[], int esq, int dir)
{
    if(dir == esq+1) { // apenas dois itens, tratar diretamente
        if(V[dir] < V[esq]) {
            int aux = V[esq]; V[esq] = V[dir]; V[dir] = aux;
        }
    }
    else if(dir > esq) {
        int aux = (esq+dir)/2;
        int mediana = mediana3(V, esq, dir, aux);
        aux = V[mediana]; V[mediana] = V[dir]; V[dir] = aux;
        int pivo = particao(V, esq, dir);
        quicksort_recursao(V, esq, pivo-1);
        quicksort_recursao(V, pivo+1, dir);
    }
}

// Ordena V com QuickSort
void quicksort(int V[], int n)
{
    quicksort_recursao(V, 0, n-1);
}

// Ordena V[esq..dir-1] com QuickSort com pivo aleatorio
void quicksort_aleatorio_recursao(int V[], int esq, int dir)
{
    if(dir == esq+1) { // apenas dois itens, tratar diretamente
        if(V[dir] < V[esq]) {
            int aux = V[esq]; V[esq] = V[dir]; V[dir] = aux;
        }
    }
    else if(dir > esq) {
        int aux = esq + 1 + ((double)rand()/RAND_MAX)*(dir-esq-1);
        int mediana = mediana3(V, esq, dir, aux);
        aux = V[mediana]; V[mediana] = V[dir]; V[dir] = aux;
        int pivo = particao(V, esq, dir);
        quicksort_aleatorio_recursao(V, esq, pivo-1);
        quicksort_aleatorio_recursao(V, pivo+1, dir);
    }
}

// Ordena V com QuickSort com pivo aleatorio
void quicksort_aleatorio(int V[], int n)
{
    quicksort_aleatorio_recursao(V, 0, n-1);
}


int main()
{
    srand(time(NULL));
    int Vaux[N], V[N];
    int n = sizeof(V)/sizeof(int);
    
    int x, i;
    for(i = 0; i < n; i++) {
        Vaux[i] = rand()%N;
        //printf("%d ", Vaux[i]);
    }
    printf("\n");

    clock_t t1, t2;
    
    //////// TESTE BUBBLESORT
    for(i = 0; i < n; i++) V[i] = Vaux[i];
    t1 = clock();
    bubblesort(V, n);
    t2 = clock();
    printf("Tempo bubblesort: %fs\n", (t2 - t1)/(float)CLOCKS_PER_SEC);
    //for(i = 0; i < n; i++) printf("%d ", V[i]);
    //printf("\n");

    //////// TESTE SELECTIONSORT
    for(i = 0; i < n; i++) V[i] = Vaux[i];
    t1 = clock();
    selectionsort(V, n);
    t2 = clock();
    printf("Tempo selectionsort: %fs\n", (t2 - t1)/(float)CLOCKS_PER_SEC);
    //for(i = 0; i < n; i++) printf("%d ", V[i]);
    //printf("\n");
    
    //////// TESTE INSERTIONSORT
    for(i = 0; i < n; i++) V[i] = Vaux[i];
    t1 = clock();
    insertionsort(V, n);
    t2 = clock();
    printf("Tempo insertionsort: %fs\n", (t2 - t1)/(float)CLOCKS_PER_SEC);
    //for(i = 0; i < n; i++) printf("%d ", V[i]);
    //printf("\n");
    
    //////// TESTE MERGESORT
    for(i = 0; i < n; i++) V[i] = Vaux[i];
    t1 = clock();
    mergesort(V, n);
    t2 = clock();
    printf("Tempo mergesort: %fs\n", (t2 - t1)/(float)CLOCKS_PER_SEC);
    //for(i = 0; i < n; i++) printf("%d ", V[i]);
    //printf("\n");
    
    //////// TESTE QUICKSORT
    for(i = 0; i < n; i++) V[i] = Vaux[i];
    t1 = clock();
    quicksort(V, n);
    t2 = clock();
    printf("Tempo quicksort: %fs\n", (t2 - t1)/(float)CLOCKS_PER_SEC);
    //for(i = 0; i < n; i++) printf("%d ", V[i]);
    //printf("\n");
    
    //////// TESTE QUICKSORT ALEATORIO
    for(i = 0; i < n; i++) V[i] = Vaux[i];
    t1 = clock();
    quicksort_aleatorio(V, n);
    t2 = clock();
    printf("Tempo quicksort aleatorio: %fs\n", (t2 - t1)/(float)CLOCKS_PER_SEC);
    //for(i = 0; i < n; i++) printf("%d ", V[i]);
    //printf("\n");
    return 0;
}
