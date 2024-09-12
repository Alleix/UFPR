int main()
{
    int a,b,c;
    printf("escreva o 1º numero \n");
    scanf("%d",&a);
    printf("escreva o 2º numero \n");
    scanf("%d",&b);
    printf("escreva o 3º numero \n");
    scanf("%d",&c);
    if(a+b<c){
    printf("%d + %d é menor que %d \n",a,b,c);
        
    }else{
    printf("%d + %d é maior que %d",a,b,c);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int a;
    printf("Escreva um numero \n");
    scanf("%d",&a);
    if(a%2 == 0){
        printf("%d + 5 =",a);
        a = a+5;
        printf(" %d",a);
    }else{
        printf("%d + 8 =",a);
        a=a+8;
        printf(" %d",a);
    }
}

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

int main()
{
    int n1,n2,n3,m,a,i;
    printf("escreva o numero de identificação \n");
    scanf("%d",&i);
    printf("Digite a nota do aluno na primeira avaliação \n");
    scanf("%d",&n1);
    printf("Digite a nota do aluno na segunda avaliação \n");
    scanf("%d",&n2);
    printf("Digite a nota do aluno na terceira avaliação \n");
    scanf("%d",&n3);
    printf("Informe a media dos exercicios que fazem parte da avaliação  \n");
    scanf("%d",&m);
    a = (n1+(n2*2)+(n3*3)+m)/7;
    if(a>=90){
        printf("Aluno: %d Conceito: A \nAprovado \n",i);
    }if(a>=75 && a<90){
        printf("Aluno: %d Conceito B \nAprovado \n",i);
    }if(a>=60 && a<75){
        printf("Aluno: %d Conceito C \nAprovado \n",i);
    }if(a>=40 && a<60){
        printf("Aluno: %d Conceito D \nReprovado \n",i);
    }if(a<40){
        printf("Aluno: %d Conceito E \nReprovado",i);
    }
}

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

int main()
{
    int f,n;
printf("Escreva um numero  \n");
scanf("%d",&f);
for (n = f-1; n>0 ;n--){
    f = f*n;
}
printf("%d",f);
}

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

int main()
{
    int x = 100;
while(x>=100 && x<200){
    if(x%2 != 0){
        printf("%d \n",x);
        x++;
    }else{
        x++;
    }
}
}
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
int main()
{
    int x,t,n=0;
    printf("escreva um numero de 1 a 10 \n");
    scanf("%d",&x);
    while(n<=10){
        printf("%d",x);
        t = x*n;
        printf(" * %d = %d \n",n,t);
        n++;
    }
}






