#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <time.h>

int main()
{
    int n,m,w,p;
    char alumno1[16] = "Antonio";
    char alumno2[16];
    printf("%s\n", alumno1);

    //scanf("%s", alumno2);
    //printf("%s\n", alumno2);
    char lista [5][16];

    for(n = 0; n < 5; n++ ){

            printf("Alumno %d:\n", n);
            fgets(alumno2, sizeof(alumno2), stdin);
            printf("\n", n);
            strcpy(lista[n], alumno2); ;

    }


printf("Lista\n");
     for(m = 0; m < 5; m++ ){
            //p = lista[m][16];
        printf("%d: %s\n", m, lista[m]);

    }



    return 0;
}
