#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10, y=3, z=4, w=7;

//1 jerarquia
int t= x/z*y-x*w;
printf("El valor de el procedimiento es: %d\n", t);

//Ternario
int g;
int C, B, A;

C=B>A?1:0;
printf("El valor ternario de 10 y 2 es: %d\n", C);

// || VS |
int a, b;
a=4||5;
b=4|5;
printf("Valor or logico: %d\n", a);
printf("Valor or bits: %d\n", b);

//Incremento y Decremento
int d, e;
d=7;
e=4;
printf("Postfijo: %d\n Prefijo: %d\n", d++,++e);




    return 0;
}
