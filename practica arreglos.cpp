#include "stdio.h"
#include "stdlib.h"
#define N 30

void carga(float v[N]){
int i;
for(i=0;i<N;i++){
    scanf("%f",&v[i]);
}
return;
}

float promedio(float v[N]){
int i;
float s;
s=0;
for(i=0;i<N;i++){
    s=s+v[i];
}
return(s/N);
}

void muestra(float V[N],float prom){
int i;
printf("numero de sucursales que superan la venta promedio");
for(i=0;i<N;i++){
    if(V[i]>prom){
        printf("%d",i+1);
    }
}
return;
}

int main(){
float venta[N],p;
carga(venta);
p=promedio(venta);
muestra(venta,p);
}




