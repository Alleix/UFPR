/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x,a,b=1,i;
    printf("Digite um numero e direi se é primo");
    scanf("%d",&x);

    if (x>=2){
        for (i=2;i<x;i++){
            if ((x%i == 0)){
                b=0;
                break;
            }
        }
            
        if (b==0){
            printf("não primo");
        }else{
            printf("Primo");
        }
        
    }else{
        printf("Não Primo");
    }
    return 0;
}