/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3][3];
    int x,y,c=0;

    for (x=0;x<3;x++){
        for (y=0;y<3;y++){
            printf("Digite um valor para a posição %dx%d ",x+1,y+1);
            scanf("%d",&a[x][y]);

        }
    }
    for (x=0;x<3;x++){
        for (y=0;y<3;y++){
            printf("[%d]",a[x][y]);

        }
        
    printf("\n");
    }
 
    for (x=0;x<2;x++){
        for (y=0;y<3;y++){
           if (x!=y && (x!=1 || y!=0)){
                c = a[x][y];
                a[x][y] = a[y][x];
                a[y][x] = c;
            } 
           
        }
    }
    for (x=0;x<3;x++){
        for (y=0;y<3;y++){
            printf("[%d]",a[x][y]);

        }
        
    printf("\n");
    }   
   
}

