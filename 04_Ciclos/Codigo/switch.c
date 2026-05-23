/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcionp, opcionc, x, y, z, suma, resta;

    printf("MENU: \n");
    printf("1. Analizar Num \n");
    printf("2. Calculadora \n");
    printf("3. Salir \n");
    scanf("%d", &opcionp);

    switch(opcionp){
        //Analizar Num
        case 1:
            printf("Escribe tu numero \n");
            scanf("%d", &x);
            if (x%2 == 0){
                printf("Tu numero es par\n");
            }else{
                printf("Tu numero es impar\n");
                }
        break;

        //Calculadora
        case 2:
            printf("Elige la opcion que quiere realizar \n");
            printf("1. Suma\n");
            printf("2. Resta\n");
            printf("3. Regresar \n");
            scanf("%d", &opcionc);

            switch(opcionc){
                case 1:
                    printf("Escribe tu numero 1\n");
                    scanf("%d", &y);
                    printf("Escribe tu numero 2\n");
                    scanf("%d", &z);
                    suma = z + y;
                    printf("La suma de tus numeos es %d\n",suma);
                break;

                case 2:
                    printf("Escribe tu numero 1\n");
                    scanf("%d", &y);
                    printf("Escribe tu numero 2\n");
                    scanf("%d", &z);
                    resta = z - y;
                    printf("La suma de tus numeos es %d\n",resta);
                break;

                case 3:
                    printf("MENU: \n");
                    printf("1. Analizar Num \n");
                    printf("2. Calculadora \n");
                    printf("3. Salir \n");
                    scanf("%d", &opcionp);
                break;

                default:
                    printf("Opcion no valida, elija otra opcion.\n");
                    scanf("%d", &opcionc);
                break;

                }
        break;

        //Salir
         case 3:
                 printf(" See you later \n");
                 return 0;
            break;

        default: printf("Opcion no valida, elija otra opcion.\n");
                 scanf("%d", &opcionp);
        break;
    }

*/
#include <stdio.h>
#include <stdlib.h>


void menu(){

    printf("MENU: \n");
    printf("1. Analizar Num \n");
    printf("2. Calculadora \n");
    printf("3. Salir \n");
}

void A(int x){
    printf("Escribe tu numero \n");
        scanf("%d", &x);
        if (x%2 == 0){
            printf("Tu numero es par\n\n");
        }else{
            printf("Tu numero es impar\n\n");
            }

}


int calculadora1(int y, int z){

                    int suma = z + y;
                    printf("La suma de tus numeros es %d\n",suma);
}
int calculadora2(int y, int z){

                    int resta = z - y;
                    printf("La resta de tus numeros es %d\n",resta);
}

int main()
{
    int opcionp, opcionc, x,y,z, resta;
do{

    menu();
    scanf("%d", &opcionp);

    switch(opcionp){
        //Analizar Num
        case 1:
            A(x);
        break;

        //Calculadora
        case 2:

            printf("1. Suma\n");
            printf("2. Resta\n");
            printf("3. Regresar \n");
            scanf("%d", &opcionc);
            printf("Elige la opcion que quiere realizar \n");
            if(opcionc<=3 && opcionc>=1){
                printf("Escribe tu numero 1\nEscribe tu numero 2\n");
                scanf("%d%d", &y, &z);
            }

            switch(opcionc){
                case 1:
                    calculadora1(y, z);
                break;

                case 2:
                     calculadora2(y, z);
                break;

                case 3:
                    menu();
                    scanf("%d", &opcionp);
                break;

                default:
                    printf("Opcion no valida, elija otra opcion.\n\n");



                break;

                }
        break;

        //Salir
         case 3:
                 printf("/////// See you later ///////\n");
                 return 0;
            break;

        default: printf("Opcion no valida, elija otra opcion.\n\n");

        break;
    }
}while(opcionp != 3);



    return 0;


}
