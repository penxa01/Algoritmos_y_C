#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define N 20
#define C 40

struct colegio{
    char col[30];
    int alum;
};

struct inscripcion{
char nombre[20];
int codi;
};

void carga(colegio a[C]){
int i;
for(i=0;i<C;i++){
    printf("ingrese nombre del colegio\n");
    fgets(a[i].col,30,stdin);
    getchar();
    a[i].alum=0;
}
return;
}



void cargains(colegio B[C],inscripcion A[N]){
int i,codigo;
for(i=0;i<N;i++){
    printf("ingrese nombre del alumno\n");
    fflush(stdin);
    fgets(A[i].nombre,20,stdin);
    getchar();
    printf("ingrese codigo del colegio\n");
    fflush(stdin);
    scanf("%d",&codigo);
    B[codigo-1].alum=B[codigo-1].alum+1;
    A[i].codi=codigo;
}
return;
}

void ordenar(inscripcion A[N]){
int k,i,cota;
struct inscripcion aux;
cota=N-1;
k=1;
while(k!=-1){
    k=-1;
    for(i=0;i<=cota-1;i++){
        if(strcmp(A[i].nombre,A[i+1].nombre)>0){
            aux=A[i];
            A[i]=A[i+1];
            A[i+1]=aux;
            k=i;
        }

    }
    cota=k;
}
return;
}

void mostrar(inscripcion A[N],colegio B[C]){
int i;
for(i=0;i<N;i++){
    printf("el alumno %s esta inscripto en la escuela de codigo %d\n",A[i].nombre,A[i].codi);
    printf("nombre de la escuela %s\n",B[A[i].codi].col);
}
return;
}
int binaria(inscripcion A[N],char el[40]){
int inf,sup,medio;
inf=0;
sup=N-1;
medio=(inf+sup)/2;
while((inf<=sup)&&(el!=A[medio].nombre)){
    if(el<A[medio].nombre){
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

void mostrar2(colegio B[C]){
int i;
for(i=0;i<C;i++){
    printf("en el colegio %s\n",B[i].col);
    printf("se registraron %d alumnos insccriptos\n",B[i].alum);
}
return;}
int main(){
    char elem[40];
    int b;
inscripcion A[N];
colegio B[C];
carga(B);
cargains(B,A);
ordenar(A);
mostrar(A,B);
printf("ingrese nombre del alumno para verificar inscripcion\n");
fflush(stdin);
getchar();
fgets(elem,40,stdin);
b=binaria(A,elem);
if(b!=-1){
    printf("el alumno registro su incripcion\n");
}
else{printf("el alumno no se inscribio\n");}
mostrar2(B);
}
