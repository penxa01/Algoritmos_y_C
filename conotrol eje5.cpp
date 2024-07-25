#include "stdio.h"
void carga (int x[4]){
int i;
for (i=0; i<=3; i++){
    printf("ingrese la componente %d \n",i+1);
    scanf("%d",&x[i]);
}
    return;
}
void muestra(int x[4],int nn){
int i;
for (i=0; i<=2; i++){
    if (  x[i] +  x[i+1]  != nn){
        printf("%d", x[i]- x[3-i]);
    }
}
  return;
}
//Algoritmo principal//
int main(){
    int a[4],c;
    carga(a);
    scanf("%d",&c);
    muestra(a,c);
}
