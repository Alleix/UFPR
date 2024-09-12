/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {
int c;
printf("Digite um numero e direi se é par\n");
scanf("%d",&c);

if(c%2 == 0){
    printf("SIM,o numero %d é par",c);
}else if(c%2 != 0){
    printf("NÃO,o Numero %d é impar",c);
}

}
