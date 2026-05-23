#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("        | Tipo           | Tamaño            | Identificador (ID) | Dirección (Dir) | Dato     |\n");
    printf("        | -------------- | ----------------- | ------------------ | --------------- | -------- |\n");

    printf("        | `int`          | 32 bits / 4 bytes | A                  | 0x7660          | 555      |\n");
    printf("        | `float`        | 32 bits / 4 bytes | B                  | 0x7664          | 3.14     |\n");
    printf("        | `double`       | 64 bits / 8 bytes | C                  | 0x7668          | 9.81     |\n");
    printf("        | `char`         | 8 bits / 1 byte   | D                  | 0x7670          | 'X'      |\n");
    printf("        | `short int`    | 16 bits / 2 bytes | E                  | 0x7671          | 120      |\n");
    printf("        | `long int`     | 64 bits / 8 bytes | F                  | 0x7674          | 100000   |\n");
    printf("        | `unsigned int` | 32 bits / 4 bytes | G                  | 0x767C          | 400      |\n");
    printf("        | `bool`*        | 8 bits / 1 byte   | H                  | 0x7680          | 1 (true) |");
    return 0;
}
