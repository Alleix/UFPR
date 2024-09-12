/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()

{
    int L;
    printf("Digite o numero do exercicio da lista: \n");
    scanf("%d",&L);
    
    if(L==1){
/// Exercicio 1 ////////////////////////////////////////////////////////////////
    int s;
    printf("Digite o valor de seu Salario para o reajuste \n");
    scanf("%d",&s);
    s = s-(s*7)/100;
    printf("Seu salario menos os impostos %d",s);
    
}   if(L==2){
/// Exercicio 2 ////////////////////////////////////////////////////////////////
    int a,m,d,t;
    printf("Digite sua idade em anos \n");
    scanf("%d",&a);
    printf("Digite quantos meses já se passaram desde apos seu aniversario \n");
    scanf("%d",&m);   
    printf("Digite o dia do mes \n");
    scanf("%d",&d);    
    t = d+(m*30)+(a*360);
    printf("sua idade total em dias: %d",t);   
        
}   if(L==3){
/// Exercicio 3 ////////////////////////////////////////////////////////////////    
    float a,p;
    int s;
    printf("Infome sua altura em metros \n");
    scanf("%f",&a);
    printf("Informe seu sexo: \nSe mulher digite 1 se homem digite 2 \n");
    scanf("%d",&s);
    if(s==1){
    p = (62.1*a)-44.7;
    printf("Seu peso ideal: %f",p);
    }else{
    p = (72.7*a)-58;
    printf("Seu peso ideal: %f",p);
    }
    
}   if(L==4){
/// Exercicio 4 ////////////////////////////////////////////////////////////////    
    int s,m,h;
    printf("Digite o tempo de duração do evento em segundos \n");
    scanf("%d",&s);
    m = s/60;
    h = s/3600;
    printf("A duração do evento em segundos é: %d \nMinutos %d \nHoras %d",s,m,h);

}   if(L==5){
/// Exercicio 5 ////////////////////////////////////////////////////////////////   
    float d,r;
    float c = 5.8;
    printf("Digite a quantidade de dolares \n");
    scanf("%f",&d);
    r = d*c;
    printf("A cotação do dolar: %f \n",c);
    printf("Voçe Informou: %f dolares \n",d);
    printf("%f dolares convertidos são %f reais ",d,r);
    
}   if(L==6){
/// Exercicio 6 ////////////////////////////////////////////////////////////////
    float r,s,b,t;
    printf("informe os valores dos pedidos do cliente \n");
    printf("digite o valor da refeição \n");
    scanf("%f",&r);
    printf("digite o valor da bebida \n");
    scanf("%f",&b);
    printf("digite o valor da sobremesa \n");
    scanf("%f",&s);
    t = (r+b+s)+(((r+b+s)*10)/100);
    printf("O valor total a ser pago é: %f",t);
    
}   if(L==7){
/// Exercicio 7 ////////////////////////////////////////////////////////////////
   int v;
   printf("escreva um numero inteiro e diferente de zero \n");
   scanf("%d",&v);
    if(v%2!=0){
        printf("%d é um numero primo",v);
    }else{
        printf("%d não é primo",v);
    }
    
}   if(L==8){
/// Exercicio 8 ////////////////////////////////////////////////////////////////  
    float v,vx,m;
    printf("Informe a velocidade maxima na avenida \n");
    scanf("%f",&vx);
    printf("Informe a velocidade do motorista \n");
    scanf("%f",&v);
    if(v>vx && v<=vx+10){
    printf("Multa é de 50 reais");
    }if(v>vx+10 && v<=vx+30){
     printf("Multa é de 100 reais") ;
    }if(v>vx+30){
    printf("Multa é de 200 reais");  
    }if(v<vx){
    printf("multa é de 0 reais");
    }
    
}   if(L==9){
/// Exercicio 9 ////////////////////////////////////////////////////////////////  
    int s;
    printf("Informe um numero de 1 a 7 \n");
    scanf("%d",&s);
    if(s==1){
        printf("Domingo");
    }
    if(s==2){
        printf("Segunda");
    }
    if(s==3){
        printf("Terça");
    }
    if(s==4){
        printf("Quarto");
    }
    if(s==5){
        printf("Quinta");
    }
    if(s==6){
        printf("Sexta");
    }
    if(s==7){
        printf("Sabado");
    }
    if(s>1||s<7){
        printf("Erro");
    }
    
}   if(L==10){
/// Exercicio 10 ///////////////////////////////////////////////////////////////
    int t = 0,x = 0,y = 1;
    printf("Os numeros são: \n");
    while(t<=20){
        y = x+y;
        printf("%d \n",y);
        t++;
        if(t<=20){
        x = x+y;
        printf("%d \n",x);
        t++;
        }
    }

}   if(L==11){     
/// Exercicio 11 ///////////////////////////////////////////////////////////////
    int f, n = 0;
    printf("escreva um numero \n");
    scanf("%d",&f);
    for(n = f-1; n>0; n--){
    f = f*n;
}
printf("Fatorial do numero: %d",f);

}   if(L==12){
/// Exercicio 12 ///////////////////////////////////////////////////////////////    
    int x = 7;
    for(x = 7; x<1000; x++){
        if( x%7==0 ){
            printf("%d \n",x);
        }
    }


}
}

