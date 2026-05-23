#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    printf("Ingresa tu edad:\n");
    scanf("%d", &edad);
    if (edad >= 18){
        printf("Usted es mayor de edad\n");
    }else{
        printf("Usted es menor de edad\n");
    }

    return 0;
}
