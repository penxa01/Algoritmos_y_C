#include "stdio.h"
#include "stdlib.h"
#define N 9

void carga(int ar[N]){
int i;
for (i=0;i<N;i++){
    scanf("%d",&ar[i]);
}
return;
}

int buscar(int ar[N],int elem){
int inf,sup,medio;
inf=0;
sup=N-1;
medio=(inf+sup)/2;
while((inf<=sup)&&(elem!=ar[medio])){
   if(elem<ar[medio]){
    sup=medio-1;
   }
   else{inf=medio+1;}
    medio=(inf+sup)/2;
}
if(inf<=sup){
    return(medio);
}
else{return(-1);}
}

//Algoritmo principal//
int main(){
int arre[N],p,elem;
carga(arre);
printf("ingrese valor del elemento");
scanf("%d",&elem);
p=buscar(arre,elem);
if(p!=-1){
    printf("el elemento se encuentra en la posicion %d",p);
}
else{printf("el elemento no se encontro en el arreglo");}
}
