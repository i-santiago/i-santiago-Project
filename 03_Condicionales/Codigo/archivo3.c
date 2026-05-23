#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e, n;
    float p;
    printf("Ingresar edad:\n");
    scanf("%d", &e);
    printf("Ingresar promedio:\n");
    scanf("%f.1", &p);
    printf("Ingresar materias reprobadas:\n");
    scanf("%d", &n);

    if(p>= 90.0 && n == 0){
        printf("WOW ganaste la beca\n");
    }else if(n >= 0 && n<=2){
        printf("Te puedes reinscribir\n");
    }else if(n >=3){
        printf("Situacion critica\n");
    }
    return 0;
}
