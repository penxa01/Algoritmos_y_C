#include "stdio.h"
#include "stdlib.h"
#define M 15
struct comercio{
    float impT;
int cont;
int numc;
float impP;
};

void cargacomercio(comercio xC[M]){
int i;
for(i=0;i<M;i++){
    xC[i].numc= i+1;
xC[i].impT=0;
xC[i].cont=0;
xC[i].impP=0;

}
return;
}

void sueldo(comercio xC[M]){
float sueldo;
int num;
printf("ingrese numero de comercio\n");
scanf("%d",&num);
while (num!=-1){
    printf("ingrese sueldo");
xC[num-1].impT = xC[num-1].impT + sueldo;
xC[num-1].cont = xC[num-1].cont + 1;
printf("reingrese numero de comercio");
}
return;
}

void sueldopromedio(comercio xC[M]){
int i;
for(i=0;i<M;i++){
    xC[i].impP= xC[i].impT / xC[i].cont;
    printf("el sueldo promedio del comercio %d es de %f",i+1,xC[i].impP);
}
return;
}

int generarnuevo(comercio xC[M],comercio nuevo[M]){
int i,contad;
contad=0;
for(i=0;i<M;i++){
 if(xC[i].impP > 35000){
    nuevo[contad]=xC[i];
    contad=contad+1;
 }

}
return(contad);
}

void ordenarnuevo(comercio nuevo[M],int xc){
    int k,i,cota;
    comercio aux;
    cota=xc-1;
    k=1;
    while(k!=-1){
        k=-1;

    for(i=0;i<cota;i++){
       if(nuevo[i].cont > nuevo[i+1].cont){
         aux=nuevo[i];
         nuevo[i]=nuevo[i+1];
         nuevo[i+1]=aux;
         k=i;
         }

    }
    cota=k;
    }
    return;
}
void mostrarnuevo(comercio nuevo[M],int con){
int i;
for(i=0;i<con;i++){
    printf("%d",nuevo[i]);
}
return;
}


int main(){
comercio C[M],nuevo[M];
int c;
cargacomercio(C);
sueldo(C);
sueldopromedio(C);
c= generarnuevo(C,nuevo);
ordenarnuevo(nuevo,c);
mostrarnuevo(nuevo,c);
}
