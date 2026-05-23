#include <stdio.h>
#include <stdlib.h>

int main()
{

    char lista[4][20];
    int i,j;
   char nombre[4][20];
   int numeros[5];
 /*
//PIDE EL ARREGLO OTORGANDO UN VALOR
   for(i=0;i<4;i++){
    strcpy(lista[i],fgets(nombre, sizeof (nombre), stdin));

/ }
//iMPRIME EL ARREGLO
    for(i=0;i<4;i++){
            printf("%s\n",lista[i] );
   }

//IMPRIME LA DIRECCION DE MEMORIA
    printf("%d\n", &nombre[0]);
    printf("%d", nombre);
      for(i=0;i<4;i++){
            printf("%d. %d\n",i, &nombre[i]);
   }

*/



     for(i=0;i<4;i++){
            scanf("%d\n", &numeros[i]);
   }


    for(i=0;i<4;i++){
            printf("%d. %d\n",i, &numeros[i]);
   }


/*

*/










   /*
   //IMPRIME TODO LOS DATOS DE DIRECCION DEL ARREGLO BIDIMENSIONAL
    for(i=0;i<4;i++){
             for(j=0;j<4;j++){
            printf("[%d]\n", &nombre[j]);
   }
            printf("%d\n", &nombre[i]);
   }
////////////////////////////////////////////////////////////////////
char arregloc[5];
    strcpy(arregloc[5], "Hola");
    printf("%s", arregloc);


/////////////////////////////////////////////////////////////////////
    char lista[4][20];
    int i;
   char nombre[4][20];

   for(i=0;i<4;i++){
    strcpy(nombre[i],fgets(nombre, sizeof (nombre), stdin));

   }

    for(i=0;i<4;i++){
            printf("%d. %s",i,nombre[i]);
   }


    printf("%d\n", &nombre[0]);

    printf("%d", nombre);

*/







    return 0;
}
