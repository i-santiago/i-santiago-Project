#include <stdio.h>
#include <stdlib.h>


int ingresarNum(int *a){
    printf("Dame un numero del 1 al 100\n");
    scanf("%d", a);
    return *a;
}
int f_doble(int a){
    a = a*2;
    printf("El doble de a es: %d\n", a);
}
int f_triple(int *a){
    *a = *a*3;
    printf("El triple de a es: %d\n", *a);
    return *a;
}
int f_triple1(int g){
    g = g*3;
    printf("El triple de a es: %d\n", g);
    return g;
}
int f_resta(int v){
    printf("%d\n",v);
    v = v-2;
    if (v < 0){
        return v;
    }else{
        f_resta(v);
    }
}

int main()
{

/*
//ACTIVIDAD 1
    int a;
    //ingresarNum(&a);
    printf("Dame un numero del 1 al 100\n");
    scanf("%d", &a);
    f_doble(a);
    printf("El valor original de a es: %d\n", a);
    f_triple(&a);
    printf("El nuevo valor asignado de a: %d\n", a);
*/

    //ACTIVIDAD 2 PUNTEROS
    /*
    int x = 5;
    int *p;
    p = &x;
    printf("%d\n", x);
    printf("%d\n", p);
    printf("%d\n", *p);
    */

    //ACTIVIDAD 3, ES EL 1 IMPLEMENTANDO EL 2
    /*
    int a;
    int *g;
    g =&a;
    //ingresarNum(&a);

    printf("Dame un numero del 1 al 100\n");
    scanf("%d", &a);
    f_doble(a);
    printf("El valor original de a es: %d\n", a);
    f_triple(g);
    printf("El nuevo valor asignado de a: %d\n", a);
    */
    //ACTIVIDAD 4 malloc
    /*
    int *v;
    v = (int*)malloc(5*sizeof(int));
    //malloc es memory all location el primer int representa el tipo de dato, el el 5*size... es el tamaño del espacio de memoria que va a necesitar.
    printf("%d\n", v);
    printf("%d", *v);

    free(v);
    //Libera el espacio de memoria asignado a v
    */

    //ACTIVIDAD 5 recursividad

    int v = 7;
    f_resta(v);


    return 0;
}
