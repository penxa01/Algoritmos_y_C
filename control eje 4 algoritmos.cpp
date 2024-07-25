#include "stdio.h"


void intervalo (int a,int b,int x){
    if((x<=b)&&(x>=b))
        {
        printf ("el valor de %d pertenece al intervalo\n",x);
        }
    return;
}
//Algoritmo principal//
int main() {
int h,m,n,t;
     t=0;
     printf("ingrese el valor de h\n");
scanf ("%d",&h);
  while (h!=0)
    {
     t=t+h;
     printf("ingrese el valor de m\n");
     scanf("%d",&m);
     printf("ingrese el valor de n\n");
     scanf("%d",&n);
     intervalo(m,n,h);
     printf("vuelva a ingresa el valor de h\n");
     scanf ("%d",&h);
    }
printf("el valor de t:%d",t);
return 0;   }
