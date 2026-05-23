#include <stdio.h>
#include <stdlib.h>
void capturar(int arreglo1[], int n){
    for(int i=0; i<n; i++){
        scanf("%d",&arreglo1[i]);
    }
}
void mostrar(int arreglo1[], int n){
    for(int i=0; i<n; i++){
        printf("[%d]",arreglo1[i]);
    }
}
int filtrar(int arreglo1[],int arreglo2[],int n){
    for(int i=0; i<n; i++){
        if(arreglo1[i]%2!=0){
            arreglo2[i] = arreglo1[i];
        }else{
        arreglo2[i] = 0;
        }
    }
}

int main()
{
    int n = 6;
    int arreglo1[n],arreglo2[n];
    printf("Ingresar valores de arreglo:\n");
    capturar(arreglo1, n);
    printf("Arreglo:");
    mostrar(arreglo1, n);
    printf("\nArreglo filtrado: ");
    filtrar(arreglo1, arreglo2, n);
    mostrar(arreglo2, n);

    FILE *f;
    f = fopen("resultado.txt", "w");
    for(int i=0; i<n ; i++){
        fprintf(f, "%d", arreglo1[i]);
    }
    fprintf(f,"\n");
    for(int i=0; i<n ; i++){
        fprintf(f, "%d", arreglo2[i]);
    }

    fclose(f);



    return 0;
}
