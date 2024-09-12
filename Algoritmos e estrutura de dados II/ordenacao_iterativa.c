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
    
    return 0;
}
