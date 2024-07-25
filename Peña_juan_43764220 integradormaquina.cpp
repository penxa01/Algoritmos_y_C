#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void cargar(int arre[10]){
int i;
for(i=0;i<10;i++){
    printf("introducir componente %d\n",i+1);
    scanf("%d",&arre[i]);
}
return;
}

int cuenta_positivos(int arre[10]){
int i,contador;
contador=0;
for(i=0;i<10;i++){
    if(arre[i]>0){
        contador=contador+1;
    }
}
return(contador);
}

void indices_menor_a_30(int arre[10]){
int i;
for(i=0;i<10;i++){
    if(arre[i]<30){
        printf("la componente indice %d es menor a 30\n",i+1);
    }
}
return;
}

int main(){
int A[10];
cargar(A);
printf("La cantidad de numeros positivos es %d\n",cuenta_positivos(A));
indices_menor_a_30(A);


}
