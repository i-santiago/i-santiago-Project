#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[20]= "Santiago" ;
    char nom2[20];
    char tablero1[5][5];
    FILE *archivo;
    archivo = fopen("tablero1.txt", "w");


    fprintf(archivo,"%s\n", nom);
    printf("Ingresa nombre:");
    fgets(nom2, sizeof (nom2), stdin);
    printf("\n");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            tablero1[i][j] = '~';

        }
    }
    tablero1[1][2] = 'B';
    tablero1[3][4] = 'X';
    tablero1[2][1] = 'O';

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
           printf("%c ", tablero1[i][j]);

        }
               printf("\n");
    }



        for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
           fprintf(archivo, "%c ", tablero1[i][j]);

        }
               fprintf(archivo, "\n");
    }

/*
//PIDE EL ARREGLO OTORGANDO UN VALOR
    char lista[4][20];
    char nombre[4][20];
    int i,j;
   for(i=0;i<4;i++){
    strcpy(lista[i],fgets(nombre, sizeof (nombre), stdin));

}
  for(i=0;i<4;i++){
            fprintf(archivo, "%s\n",lista[i] );
   }
 /////////////////////////////////////////
    int hola;
    printf("INGRESA UN NUMERO:\n");

    scanf("%d", &hola);
   // fscanf(archivo, "%d", &hola);
    //printf("%d", hola);
    fprintf(archivo,"%d", hola);
*/

    fprintf(archivo,"%s\n", nom);

    fclose(archivo);

    archivo = fopen("tablero1.txt","r");
    char a [20];
    fgets(nom2,20,archivo);
    //fprintf(archivo,"%s\n", nom2);

    //////////////TABLERO UNO//////////////////
    /*
    int tablero[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &tablero[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", tablero[i][j]);
        }
        printf("\n");
    }
*/

    return 0;
}
