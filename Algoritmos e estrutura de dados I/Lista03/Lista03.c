//1 exercício
#include <stdio.h>

int main()
{
int x,y,z,c=0,u;
int a[10];
int b[10];

for(x=0;x<10;x++){
   printf("Digite o valor para posição %dº \n",x+1);
   scanf("%d",&a[x]);
}

///3624
//6432
z=0;
for(c=0;c<10;c++){
z=0;    
    for(y=0;y<10;y++){
        if(a[y]>z){
            z=a[y];
            u=y;
    }   if(y==0){
            a[u]=0;
    }
}
    b[c]=z;
    printf("%d ",z);
}
}

//2 exercício
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int x,y,z,c=0,u;

struct temperatura{
float a;
int b;
char mes[20];
};
struct temperatura mediat[12];
mediat[0].mes[20] = "Janeiro";
mediat[1].mes[20] = "Fevereiro";
mediat[2].mes[20] = "Março";
mediat[3].mes[20] = "Abril";
mediat[4].mes[20] = "Maio";
mediat[5].mes[20] = "Junho";
mediat[6].mes[20] = "Julho";
mediat[7].mes[20] = "agosto";
mediat[8].mes[20] = "setembro";
mediat[9].mes[20] = "outubro";
mediat[10].mes[20] = "novembro";
mediat[11].mes[20] = "dezembro";

//Tentei fazer assim mas dava erro

#include<stdio.h>

int main(){


    int i, indcMaior, indcMenor;
    float menor = 99, maior = 0, temp[12];

    for(i = 0; i < 12; i++) {
        printf("\Digite a temperatura do mes %d: ", i + 1);
        scanf("%f", &temp[i]);
    }

    for(i = 0; i < 12; i++) {
        if(menor > temp[i]) {
            menor = temp[i];
            indMenor = i;
        }
        if(maior < temp[i]) {
            maior = temp[i];
            indMaior = i;
        }
    }

    printf("\n");
    printf("A menor temperatura foi de %0.0fĀŗ no mĆŖs de ", menor);
    switch(indcMenor) {
    caso 0:
        printf("Janeiro\n");
        parar;
    caso 1:
        printf("Fevereiro\n");
        parar;
    caso 2:
        printf("Marco\n");
        parar;
    caso 3:
        printf("Abril\n");
        parar;
    caso 4:
        printf("Maio\n");
        parar;
    caso 5:
        printf("Junho\n");
        parar;
    caso 6:
        printf("Julho\n");
        parar;
    caso 7:
        printf("Agosto\n");
        parar;
    caso 8:
        printf("Setembro\n");
        parar;
    caso 9:
        printf("Outubro\n");
        parar;
    caso 10:
        printf("Novembro\n");
        parar;
    caso 11:
        printf("Dezembro\n");
        parar;
    }

    printf("A maior temperatura foi de %0.0fĀŗ no mĆŖs de ", maior);
    switch(indcMaior) {
    caso 0:
        printf("Janeiro\n");
        parar;
    caso 1:
        printf("Fevereiro\n");
        parar;
    caso 2:
        printf("Marco\n");
        parar;
    caso 3:
        printf("Abril\n");
        parar;
    caso 4:
        printf("Maio\n");
        parar;
    caso 5:
        printf("junho\n");
        parar;
    caso 6:
        printf("julho\n");
        parar;
    caso 7:
        printf("agosto\n");
        parar;
    caso 8:
        printf("setembro\n");
        parar;
    caso 9:
        printf("outubro\n");
        parar;
    caso 10:
        printf("novembro\n");
        parar;
    caso 11:
        printf("dezembro\n");
        parar;
    }
}






//3 exercício
#include<stdio.h>
#include<locale.h>

int main() {
    char n_car[5][15];
    int i, indice_enc;
    float consumo[5], redimento[5], economico;
    for (i = 0; i < 5; i++) {
        printf("CARRO %d\n", i + 1);
        printf("Nome do carro: ");
        scanf("%s", &n_car[i]);
        printf("Quilometragem que o carro faz com 1L de combustível: ");
        scanf("%f", &consumo[i]);
        redimento[i] = consumo[i] * 1000;
        printf("\n");
    }
    economico = consumo[0];
    printf("\nDADOS\n");
    for (i = 0; i < 5; i++) {
        printf("\n%dº CARRO\n", i + 1);
        printf("Nome do veículo: %s\n", n_car[i]);
        printf("Consumo de combustível por Km: %0.0f\n", consumo[i]);
        printf("Consumo de combustível em uma distância de 1000km: %0.0fL\n", redimento[i]);
        printf("\n");
        if (consumo[i + 1] > economico) {
            economico = consumo[i + 1];
            indice_enc = i + 1;
        }
    }
    printf("\nO carro mais econômico é o %s, fazendo %0.0fKm por litro. \n", n_car[indice_enc], economico);
}



//5 exercício
#include <stdio.h>
#include <stdlib.h>


int main() {


    int p, i, j, cont, quant_primo, raiz;
    int n = 101, primo[10];

    i = 1;
    p = 0;
    quant_primo = 0;

    do
    {
        cont = 0;
                for (i = 1; i < n; i++)
                {
                    if (n % i == 0)
                    {
                    cont++;
                    }
                }
        if (cont < 2)
        {
            primo[p] = n;
            quant_primo++;
            p++;
        }
        n++;
    }

    while (quant_primo != 10);
    printf("Os 10 primeiros números são: \n\t");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n\t", primo[i]);
    }
}




//6 exercício
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{

    int n[10];
    int d[5];
    int i, j, k;

    printf("\nPrimeiro vetor \n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("\nSegundo vetor \n");
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &d[i]);
    }

    printf("\nDivisores\n");
    for (i = 0; i < 10; i++){
        for (j = 0; j < 5; j++){
            if (n[i] % d[j] == 0){
                printf("\tO número %d é divisivel por %d na posição %d. \n", n[i], d[j], j);
            }
        }
    }
}

//7 exercício
#include<stdio.h>

int main() {

int n[10], pares[10], impares[10];
int i, p1 = 0, p2 = 0, soma, impar;
        printf("\nDigite os dez (10) números abaixo:\n", i + 1);
        for (i = 0; i < 10; i++)
        {
            scanf("%d", &n[i]);

                if (n[i] % 2 == 0)
                {
                    pares[p1] = n[i];
                    p1++;
                }
                        else
                    {
                        impares[p2] = n[i];
                        p2++;
                    }
        }
        soma = 0;
        impar = 0;
    for (i=0;i<10;i++)
    {
        if (n[i] % 2 == 0)
        {
            soma += n[i];
        }
            else
            {
                impar++;
            }
    }
    printf("\nNúmeros pares digitados: ");
    for (i = 0; i < p1; i++)
    {
        printf("%d, ", pares[i]);
    }
       printf("\n");
    printf("\nNúmeros imapres digitados: ");
    for (i = 0; i < p2; i++)
    {
        printf("%d, ", impares[i]);
    }
      printf("\n");
    printf("\nSoma dos pares: %d", soma);
        printf("\n");
    printf("\nQuantidade de números ímpares: %d", impar);
      printf("\n");
}
