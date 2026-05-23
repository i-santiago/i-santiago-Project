#include <stdio.h>
#include <stdlib.h>
void mostrar1(int v[], int n){
    printf("%d\n", v);
    printf("%d\n", n);
}

void mostrar(int v[3][3]){
    printf("%d", v[3][3]);
}

void capturar(int v[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            scanf("%d", &v[i][j]);
        }
    }
}

void mostrartd(int v[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            printf("%d", v[i][j]);
        }
        printf("\n");
    }
}

int diagonal(int v[3][3], int m){
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            if(i == j){
                m+=v[i][j];
            }
        }
    }
return m;
}

void tablero(int v[3][3], FILE *f){
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            fprintf(f,"%d", v[i][j]);
        }
        fprintf(f,"\n");
    }
}


int main()
{
    //En C, al enviar una matriz, el numero de columnas debe conocerse para calcular correctamente el desplazamiento en memoria.
    int v[3][3];
    int n = 0;
    int m = 0;
    FILE *f;
    f = fopen("tablero.txt","w");
//Si en el fopen reemplazamos el w de write con a, la a escribe en el texto pero sin borrar lo anterior
    capturar(v);
    mostrartd(v);
    diagonal(v, m);
    printf("%d", diagonal(v,m));
    tablero(v, f);
    //mostrar1(v,n);
    //mostrar(v);




fclose(f);
    return 0;
}
