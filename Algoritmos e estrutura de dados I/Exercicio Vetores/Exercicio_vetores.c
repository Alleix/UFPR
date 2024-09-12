//Primeiro Exercício
int main()
{
int z=0;
int b[10];

for(z=0;z<=10;z++){ // se eu coloco z<=10 ta dando um erro *** stack smashing detected ***
    b[z] = z;
    printf("%d",b[z]);

}
}

//Segundo Exercício
int main()
{
int y;
int a[10];

for(y=0;y<10;y++){
    if(y%2 == 0){
        a[y] = 0; 
        printf("%d",a[y]);
    }else if(y%2>0){
        a[y] = 1;
        printf("%d",a[y]);
    }
}
}

//Terceiro Exercício
int main()
{
int num,imp,z,i;
int a[5];
int b[5];
int c[10];

 for(num=1;num<=5;num++){
    printf("escreva o %dº numero para que A seja preenchido \n",num);
    scanf("%d",&a[num-1]);
    
 }
 for(imp=1;imp<=5;imp++){
    printf("escreva o %dº numero para que B seja preenchido \n",imp);
    scanf("%d",&b[imp-1]);
     
     
 }
 int y=0;
 int x=0;
 for(z=0;z<10;z++){
    if(z%2==0){
        c[z]=a[y];
        y++;
    }else{
        c[z]=b[x];
        x++;
    }
     
 }
    for(i=0;i<10;i++){
        printf("%d",c[i]);
    }
}

//Quarto exercicio
int main()
{
int num,imp,z,i;
int j[5];
int k[5];

 for(num=1;num<=5;num++){
    printf("escreva o %dº numero para que A seja preenchido \n",num);
    scanf("%d",&j[num-1]);
    
 }

 for(i=5;i>0;i--){
     k[i]=j[5-i];
 }
  for(z=1;z<=5;z++){
    printf("%d",k[z]);
 
}
}









//Quinto Exercício
int main()
{

int num,imp,z,i,w;
int a[5];
int b[5];
int c[10];

 for(num=1;num<=5;num++){
    printf("escreva o %dº numero para que A seja preenchido \n",num);
    scanf("%d",&a[num-1]);
    
 }
 for(imp=1;imp<=5;imp++){
    printf("escreva o %dº numero para que B seja preenchido \n",imp);
    scanf("%d",&b[imp-1]);
     
     
}
for(i=0;i<5;i++){
        c[i]=a[i];
        printf("%d",c[i]);
    
}
for(w=5,z=5;z<10;z++){
    c[z]=b[z-w];
    printf("%d",c[z]);
}
}

//Sexto Exercicio

int main()
{
int num,imp,p=0,z,i;
int a[5];
int b[5];
int c[5];
 for(num=1;num<=5;num++){
    printf("escreva o %dº numero para que A seja preenchido \n",num);
    scanf("%d",&a[num-1]);
 }
 for(imp=1;imp<=5;imp++){
    printf("escreva o %dº numero para que B seja preenchido \n",imp);
    scanf("%d",&b[imp-1]);
 }
 printf("a intersecção dos dois: ");
 for(i=0;i<5;i++){
     if(a[i]==b[i]){
         c[p]=a[i];
         printf("%d",c[p]);
         p++;
     }
 }

}


//Setimo Exercicio
int main()
{
int num,imp,z,w,m,w2,m2,v,c=0;
int a[10];
int b[10];
    
    
for(num=1;num<=10;num++){
    printf("escreva o %dº numero para que o vetor A seja preenchido \n",num);
    scanf("%d",&a[num-1]);
    
 }
 for(imp=1;imp<=10;imp++){
    printf("escreva o %dº numero para que o vetor B seja preenchido \n",imp);
    scanf("%d",&b[imp-1]);
 }
w=a[0];
m=a[0];
w2=b[0];
m2=b[0];

for(z=1;z<10;z++){
    if(w2<b[z]){
        w2=b[z];
    }
}
z=0;
for(z=1;z<10;z++){
    if(m2>b[z]){
        m2=b[z];
    }
}
z=0;
for(z=1;z<10;z++){
    if(w<a[z]){
        w=a[z];
    }
}
z=0;
for(z=1;z<10;z++){
    if(m>a[z]){
        m=a[z];
    }
}
for(v=0;v<10;z++){  //se eu coloco esse for o resto do programa n vai
    c=a[v]+b[v]+ c;
}



printf("Maior numero de A %d \n",w);
printf("Menor numero de A %d \n",m);
printf("Maior numero de B %d \n",w2);
printf("Menor numero de B %d",m2);
}








//Oitavo Exercicio
int main()
{
    
    int r,i;
    int t = 0,x = 0,y = 1;
    int m[10];
    printf("Os numeros são: \n");
    while(t<10){
        y = x+y;
        m[t]=y;
        t++;
        if(t<10){
        x = x+y;
        m[t]=x;
        t++;
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",m[i]);
    }

}


//Nono exercício
int main()
{
int num,p=0,z,i;
int a[10];
int b[10];

 for(num=1;num<=10;num++){
    printf("escreva o %dº numero para que A seja preenchido \n",num);
    scanf("%d",&a[num-1]);
 }
     printf("que numero deseja encontrar ?\n");
     scanf("%d",&z);

    printf("O numero apareçe nas posiçoes: ");
    for(i=0;i<10;i++){
        if(a[i]==z){
        b[p]=a[i];
        if(b[p]>0){
            printf("%d",i);
        p++;
        }
        
        }

    }
printf("\n%d vezes no total ",p);
}


//Decimo exercicio
int main()
{
int num,imp,p=0,z,i;
int a[10];
int b[10];
int c[10];
 for(num=1;num<=10;num++){
    printf("escreva o %dº numero para que A seja preenchido \n",num);
    scanf("%d",&a[num-1]);
 }
 for(imp=1;imp<=10;imp++){
    printf("escreva o %dº numero para que B seja preenchido \n",imp);
    scanf("%d",&b[imp-1]);
 }
 
 for(z=0;z<10;z++){
     c[z]=a[z]*b[z];
    printf("%d vezes %d = %d \n",a[z],b[z],c[z]);
 }
}