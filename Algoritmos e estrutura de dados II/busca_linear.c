#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 30000

// Busca valor x no vetor V de tamanho n
int busca_linear(int V[], int n, int x)
{
    int i;
    for(i = 0; i < n; i++)
        if(V[i] == x)
            return i;
    return -1;
}

int main()
{
    srand(time(NULL));
    int V[N];
    int n = sizeof(V)/sizeof(int);
    
    int x, i;
    for(i = 0; i < n; i++) {
        V[i] = rand()%N;
        //printf("%d ", V[i]);
    }
    printf("\n");

    clock_t t1, t2;
    t1 = clock();
    for(x = 0; x < N; x++) {
        //printf("busca_linear(%d) = %d\n", x, busca_linear(V, n, x));
        busca_linear(V, n, x);
    }
    t2 = clock();
    printf("%fs\n", (t2 - t1)/(float)CLOCKS_PER_SEC);
    return 0;
}
