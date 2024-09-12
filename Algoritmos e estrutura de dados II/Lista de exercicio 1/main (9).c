/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
int a[9];
int b[9];
int i,c=0,x;

for (i=0;i<10;i++){
    
printf("Digite o %dº item da lista: ",i+1);
scanf("%d",&a[i]);

}
for (x=9,i=0;i<5;x--,i++){
    c=a[i];
    a[i]=a[x];
    a[x]=c;
    }
    
for (i=0;i<10;i++){
    printf("%d",a[i]);
}
}

