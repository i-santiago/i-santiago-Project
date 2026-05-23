#include <stdio.h>
#include <stdlib.h>

int main()
{

 int promedio;
    int mr;
    printf("Ingresa tu promedio:\n");
    scanf("%d", &promedio);
    printf("Ingresa tus materias reprobadas:\n");
    scanf("%d", &mr);
    if(promedio>= 85 && mr == 0){
        printf("Se otorgo beca\n");
    }else{
        printf("No se otorgo beca\n");
    }


    return 0;
}
