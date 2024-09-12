/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int i=0,x=0,y=0;

printf("Digite o Divisor");
scanf("%d",&i);
printf("Digite o Dividendo");
scanf("%d",&x);

while (x>=i){
    x = x-i;   
    printf("%d\n",x);
    y = y+1;
    
}
printf("Divisão = %d\n",y);
printf("Resto = %d",x);
}
