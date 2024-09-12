/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
int x,y,c;
printf("digite o valor de x\n");
scanf("%d",&x);
printf("Digite o valor de y\n");
scanf("%d",&y);

c=y;
y=x;
x=c;

printf("O valor de x trocado: %d\n",x);
printf("O valor de y trocado: %d\n",y);

}
