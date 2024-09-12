/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
int a,r,c,y=0,i;

printf("Digite o numero inicial da PA");
scanf("%d",&a);
printf("Digite a razão da PA");
scanf("%d",&r);
printf("Digite o limite da PA");
scanf("%d",&c);

for (i=0;i<=c;i++){
    a=a*r;
printf("%d ",a);
}
}

