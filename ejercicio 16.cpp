#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#define T 10
#define Z 12

void cerear(int cantinf[Z],int tipo[T]){
int i,j;
for(i=0;i<Z;i++){
    cantinf[i]=0;
}
for(j=0;j<T;j++){
    tipo[j]=0;
}
return;
}

void carga(int cantinf[Z],int tipo[T]){
int zona,tip;
char patente[6];
printf("\ningrese la patente del infractor\n");
fflush(stdin);
scanf("%s",&patente);
while(strcmp(patente,"fin")!=0){
   printf("\ningrese la zona donde se realizo la infraccion\n");
   fflush(stdin);
   scanf("%d",&zona);
   cantinf[zona-1]=cantinf[zona-1]+1;
   printf("\ningrese tipo de infraccion realizada\n");
   fflush(stdin);
   scanf("%d",&tip);
   tipo[tip-1]=tipo[tip-1]+1;
   printf("ingrese siguiente patente\n");
   fflush(stdin);
    scanf("%s",&patente);
}
return;

}

void ordenar(int tipo[T]){
int k,i,cota,aux;
cota=T-1;
k=1;
while(k!=-1){
    k=-1;
    for(i=0;i<cota;i++){
        if(tipo[i]>tipo[i+1]){
            aux=tipo[i];
            tipo[i]=tipo[i+1];
			tipo[i+1]=aux;
			k=i;
        }
    }
    cota=k;
}
return;
}

void mostrarmayor(int tipo[T]){
int i;
for(i=0;i<T;i++){
    if(tipo[i]==tipo[T-1]){
        printf("la infraccion cometida es la tipo %d\n",i+1);
    }
}
return;
}

void mostrar(int cantinf[Z]){
int i;
for(i=0;i<Z;i++){
    printf("en la zona %d se realizaron %d\n",i+1,cantinf[i]);
}
return;
}

void promedio(int cantinf[Z]){
int i,total,prom,j;
total=0;
for (i=0;i<Z;i++){
    total=total+cantinf[i];
}
prom=total/12;
for(j=0;j<Z;j++){
    if(cantinf[j]<prom){
        printf("la zona %d no supera las infracciones promedio\n",i+1);
    }
}
return;
}

int main(){
int cantidad[Z],t[T],a;
cerear(cantidad,t);
carga(cantidad,t);
ordenar(t);
mostrarmayor(t);
mostrar(cantidad);
promedio(cantidad);
printf("ingrese el valor de a");
scanf("%d",&a);
}
