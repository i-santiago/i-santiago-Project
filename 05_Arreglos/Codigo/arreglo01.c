#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;
    N= 8;
    float temp1, temp2;
    float temp[N];
    /*
    temp[0] = 20.5;
    temp[1] = 19.2;
    float gummy;
    printf("Direccion de men de 2 flotantes: \n temp1 %i\n temp2 %i\n",&temp1, &temp2);
    printf("Direccion de temp [0] %i\n", &temp[0]);
    printf("Direccion de temp [] %i\n", &temp[5]);
    printf("Direccion de gummy %i\n",&gummy);
*/
    printf("Temperaturas de temp\n");

    for(i=0; i<N; i++){
      printf("Temp:");
      scanf("%f", &temp[i]);
    }
    for(i=0; i<N; i++){
      printf("%i. %i\n",i,&temp[i]);
    }
    return 0;
}
