#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int x;
    int suma = 0;
    printf("Ingresa numero inicial\n");
    scanf("%d", &x);

    while (x != 0){
        suma += x;
        printf("Nuevo numero obtenido:%d\n", suma);
        printf("Ingresa otro numero\n");
        scanf("%d", &x);

    }

*/
  /*
    do{
        printf("1. Continuar\n");
        printf("2. Salir\n");
        scanf("%d", &opcion);
    }while (opcion = 2);{

        printf("Ingresar numero de calificaciones\n");
        scanf("%d", &a);

        }





*/

    int a,b,c,d;
    int i = 1;
    int valor1, valor2;
    int menu;
    do{

        printf("1. suma de calificaciones\n");
        printf("2. promedio de calificaciones\n");
        printf("3. salir\n");
        scanf("%d", &menu);

    }while((menu < 1)&&(menu > 2));
    {

        if(menu == 1){

        printf("Ingresar numero de calificaciones\n");
        scanf("%d", &a);

        for(i ; i<=a; i++){
                printf("Ingresa calificacion numero %d\n", i);
                scanf("%d", &b);

                if(b<=100 && b>=0){
                valor1= valor1 + b;
        }else{
                 printf("Ingresar calificacion valida\n");
                 i= i -1;
      }
     }
        printf("La suma de las calificaciones: %d\n", valor1);
    }

     if(menu==2){

        printf("Ingresar numero de calificaciones\n");
        scanf("%d", &c);

        for(i ; i<=c; i++){
                printf("Ingresar calificacion numero %d\n", i);
                scanf("%d", &d);

                if((d<=100)&&(d>=0)){
                valor2= valor2 + d;
        }else{
               printf("Ingresar calificacion valida\n");
               i = i -1;
        }
      }
        valor2 = valor2/(i-1);
        printf("El promedio de las calificaciones es: %d\n", valor2);
     }

    }if(menu == 3){
            return 0;
        }if((menu<1)||(menu>2)){
        printf("No ingresaste valor valido\n");
        }

    return 0;
}
