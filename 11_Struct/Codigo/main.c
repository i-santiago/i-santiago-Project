#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno{
    char nombre [20];
    float cal;
    int act;
    int derecho;
};

union dato{
    int entero;
    float decimal;
};

int main()
{
    struct alumno one;
    //one.nombre[20];
    //one.cal;
    //one.act;
    //one.derecho;
/*

    printf("Nombre: ");
    fgets(one.nombre,20,stdin);

    printf("Actividades: ");
    scanf("%d", &one.act);

    printf("Calificacion: ");
    scanf("%f", &one.cal);

    printf("Derecho: ");
    scanf("%d", &one.derecho);

    printf("\nDatos capturados\n");
    printf("Nombre: %s", one.nombre);
    printf("Actividades: %d\n", one.act);
    printf("Calificacion: %f\n", one.cal);
    printf("Derecho: %d\n", one.derecho);


    struct alumno two[3];

    for(int i; i<3; i++){
    printf("\nNombre[%d]: ", i);
    fgets(two[i].nombre,20,stdin);

    printf("Actividades[%d]: ", i);
    scanf("%d", &two[i].act);

    printf("Calificacion[%d]: ", i);
    scanf("%f", &two[i].cal);

    printf("Derecho[%d]: ", i);
    scanf("%d", &two[i].derecho);
    getchar();

    }
*/
    union dato x;

    x.decimal = 10.12;
    printf("%.2f\n", x.decimal);
    x.entero = 5;
    printf("%d\n", x.entero);







    return 0;
}
