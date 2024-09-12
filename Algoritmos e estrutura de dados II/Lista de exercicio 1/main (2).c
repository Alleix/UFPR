/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {
int c,y;
printf("Digite 2 numeros inteiros e direi qual o maior\n");
scanf("%d",&c);
printf("Digite o segundo\n");
scanf("%d",&y);
if(c<y){
    printf("o maior numero é %d",y);
}else if(c>y){
    printf("o maior numero é %d",c);
}else{
    printf("Os dois são iguais");
}

}


