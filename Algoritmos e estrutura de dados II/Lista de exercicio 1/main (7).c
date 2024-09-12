/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
int a[10];
int i,c=0;

for (i=0;i<10;i++){
    
printf("Digite o %dº item da lista: ",i+1);
scanf("%d",&a[i]);

}
for (i=0;i<10;i++){
    if (a[i] > c){
        c=a[i];
    }
}
printf("%d",c);
}


