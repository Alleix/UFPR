/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x,a,b,i;
    printf("Digite sua data de nascimento:\nDia: ");
    scanf("%d",&x);
    printf("\nMês: ");
    scanf("%d",&a);
    printf("\nAno: ");
    scanf("%d",&b);

    if ((x>=15)&&(a>=8)){
        printf("Voçe tem %d",2015-b);
    }else{
        printf("Voçe tem %d",2014-b);
    }






}