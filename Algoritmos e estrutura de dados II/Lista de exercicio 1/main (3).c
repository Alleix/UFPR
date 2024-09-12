/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int maior(int a, int b){
  if(a<b){
    printf("o maior numero é %d",b);
}else if(a>b){
    printf("o maior numero é %d",a);
}else{
    printf("Os dois são iguais");
}

}

  
int main() {
int c,y;
printf("Digite 2 numeros inteiros e direi qual o maior\n");
scanf("%d",&c);
printf("Digite o segundo\n");
scanf("%d",&y);

maior(c,y);
}
