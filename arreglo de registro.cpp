#include "stdio.h"
#include "stdlib.h"
#define N 15

void carga(int ar[N]){
int i;
for(i=0;i<N;i++){
    scanf("%d",&ar);
}
return;
}
int buscar(int ax[N],int elx){
int i;
i=0;
while((i<N)&&(ax[i]!=elx)){
i++;
}
return(i);
}

int main(){
int arre[N],elem,s;
carga(arre);
scanf("%d",&elem);
s=buscar(arre,elem);
if(s<N){
    printf("el elemento se encuentra en la componente %d",s+1);}
    else {printf("la componente no se encuentra en el arreglo");

    }

}
