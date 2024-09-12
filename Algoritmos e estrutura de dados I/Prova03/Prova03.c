//Exercício - 4:
#include <stdio.h>

int main()
{
int i,z=0;
int v[10];

for(i=0;i<10;i++){
    printf("escreva o %dº numero de A \n",i+1);
    scanf("%d",&v[i]);
    if(v[i]%2 == 0){
      z++;
    }
}
printf("Existem %d numeros pares",z);
}
//___________________________________________________________________
//Exercício - 5:
#include <stdio.h>
int main()
{
int i,z=0,b=0;
int v[10];

    for(i=0;i<10;i++){
        printf("escreva o %dº numero de A \n",i+1);
        scanf("%d",&v[i]);
    }
    for(z=0;z<10;z++){
        if(b<v[z]){
            b=v[z];
        }
    }
    
    i=10;

    for(z=0;z<10;z++){
        if(i>v[z]){
            i=v[z];
        }
    }
printf("O maior numero é: %d \nO menor numero é: %d",b,i);
}
//___________________________________________________________________
//Exercício - 6:
#include <stdio.h>

int main()
{
int i,z=0;
int a[10];
int b[10];
int c[10];
    for(i=0;i<10;i++){
        printf("escreva o %dº numero de A para multiplicar B \n",i+1);
        scanf("%d",&a[i]);
    }
    for(z=0;z<10;z++){
        printf("escreva o %dº numero de B para multiplicar A \n",z+1);
        scanf("%d",&b[z]);
    }
    for(z=0;z<10;z++){
        c[z] = a[z]*b[z];
        printf("%d X %d = %d. \n",b[z],a[z],c[z]);
        }
    }
//___________________________________________________________________
//Exercício - 7:
#include <stdio.h>

int main()
{
int i,b=0,z;
int a[3][3];
    for(z=0;z<3;z++){
        for(i=0;i<3;i++){
        printf("escreva o numero para a Linha[%d] Coluna[%d] \n",i+1,z+1);
        scanf("%d",&a[i][z]);
        
        }
    }
    for(z=0;z<3;z++){
        for(i=0;i<3;i++){
            if(i==z){
                b=b+a[i][z];
            }
        }
    }
    printf("A soma dos numeros da diogonal principal é: %d",b);
}
//___________________________________________________________________
//Exercício - 8:
#include <stdio.h>

int main()
{
int i,b=0,z;
int a[3][3];
int c[3];
c[0]=0;
c[1]=0;
c[2]=0;

    for(i=0;i<3;i++){
        for(z=0;z<3;z++){
        printf("escreva o numero para a Linha[%d] Coluna[%d] \n",i+1,z+1);
        scanf("%d",&a[i][z]);
        
        }
    }
    for(i=0;i<3;i++){
        for(z=0;z<3;z++){
            if(z==0){
                c[z]=c[z]+a[i][z];
            }
            if(z==1){
                c[z]=c[z]+a[i][z];
            }
            if(z==2){
                c[z]=c[z]+a[i][z];
            }
        }
    }
    for(z=0;z<3;z++){
    printf("A soma dos numeros da %dº é: %d \n",z+1,c[z]);
}
}
//___________________________________________________________________
//Exercício - 9:
#include <stdio.h>

int main()
{
int i=0,b=0,z,n;
struct db_alunos {
    int mat;
    char nome[100];
    char curso[50];
    
};

struct db_alunos matricula[5];

for(i=0;i<5;i++){
    printf("Digite o nome do aluno %d\n",i+1);
    scanf("%s",&matricula[i].nome);
    printf("Digite o numero de inscrição %d\n",i+1);
    scanf("%d",&matricula[i].mat);
    printf("Digite o nome do curso %d\n",i+1);
    scanf("%s",&matricula[i].curso);
}
for(i=0;i<5;i++){
    printf("nome do aluno %d: %s\n",i+1,matricula[i].nome);
    printf("numero de inscrição do aluno %d: %d\n",i+1,matricula[i].mat);
    printf("nome do curso do aluno %d: %s\n",i+1,matricula[i].curso);
}
}
//___________________________________________________________________
//Exercício - 10:
#include <stdio.h>

int main()
{
int i=0,b=0,z,n,b;
int m[5]
struct db_alunos {
    int mat;
    char nome[100];
    int npp,nsp,ntp;
    
};

struct db_alunos matricula[5];

for(i=0;i<5;i++){
    printf("Digite o nome do aluno %d\n",i+1);
    scanf("%s",&matricula[i].nome);
    printf("Digite o numero de inscrição\n");
    scanf("%d",&matricula[i].mat);
    printf("Digite a nota na primeira prova\n");
    scanf("%d",&matricula[i].npp);
    printf("Digite a nota na segunda prova\n");
    scanf("%d",&matricula[i].nsp);
    printf("Digite a nota na terceira prova\n");
    scanf("%d",&matricula[i].ntp);
}
    for(z=0;z<5;z++){
        if(b<matricula[z].npp){
            b=v[z];
        }
    }
    for(z=0;z<5;z++){
        m[z]=((matricula[z].npp+matricula[z].nsp+matricula[z].ntp)/2);
        }
    }
        for(z=0;z<5;z++){
        if(b<m[z]){
            
        }
    }


}

