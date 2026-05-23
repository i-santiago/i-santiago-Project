#include <stdio.h>
#include <stdlib.h>

int botes(){

}

int main()
{
    int i, j;
/*
    int x = 3, y = 3;
    int tablero[x][y];

    tablero[0][0] = 100;
    tablero[0][1] = 101;
    tablero[0][2] = 102;
    tablero[1][0] = 110;
    tablero[1][1] = 111;
    tablero[1][2] = 112;
    tablero[2][0] = 120;
    tablero[2][1] = 121;
    tablero[2][2] = 122;

    printf("El dato 112 esta en [1][2]: %d\n", tablero[1][2]);
    printf("El dato 121 esta en [2][1]: %d\n", tablero[2][1]);

    /*
    for(i=0; i<x ; i++){
        for(j=0; j<y; j++){
            printf("%d", tablero[y]);
        }
        printf("%d", tablero[x]);
    }
    printf("Arreglo bidimensional:\n%d", tablero);
*/
///////////////////JUEGO////////////////
    int N,M,x,y,v,w;
    int j1 [N][M];
    int j2 [N][M];
    N = 3;
    M = 3;

    int bote1 = 777;
    int bote2[2] = {555,555};

  for(i=0; i<N ; i++){
        for(j=0; j<M; j++){
            j1[i][j]=0;
    //printf("%d", j1[i][j]);
        }
        j1[i][j]=0;
    //printf("%d\n", j1[i][j]);
    }
    
    i=0;
    j=0;
    
for(i=0; i<N ; i++){
        for(j=0; j<M; j++){

            printf("%d", j1[i][j]);
        }

        printf("%d\n", j1[i][j]);
    }
/*

        printf("\n");
printf("Pedir los valores de tus barcos:\n");
printf("Posicion de x del barco 1: \n");
scanf("%d", &x);
printf("Posicion de y del barco 1: \n");
scanf("%d", &y);





j1[x][y] = bote1;

for(i=0; i<N ; i++){
        for(j=0; j<M; j++){

    printf("%d", j1[i][j]);
        }

    printf("%d\n", j1[i][j]);
    }



*/
    return 0;
}
