/*
Declare un puntero en el procedimiento principal que apunte a una variable de algún tipo y devuelva por pantalla:
a) El contenido del puntero
b) La dirección de memoria almacenada por el puntero.
c) la dirección de memoria de la variable.
d) la dirección de de memoria del puntero.
e) el tamaño de memoria utilizado por esa variable usando la función sizeof()
*/
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//funcion principal
int main()
{
    
    int Variable = 10;
    //declaro el puntero
    int *pVariable;
    //asigno al puntero la direccion de la varible
    pVariable = &Variable;

    //a) El contenido del puntero
    printf("El contenido del puntero es: \t %d\n", *pVariable);

    //b) La dirección de memoria almacenada por el puntero.
    printf("La direccion de memoria almacenada por el puntero es: \t %p\n", pVariable);

    //c) la dirección de memoria de la variable.
    printf("La dirección de memoria de la variable es: \t %p\n", &Variable);

    //d) la dirección de de memoria del puntero.
    printf("La direccion de memoria del puntero es: \t %p\n", &pVariable);

    //e) el tamaño de memoria utilizado por esa variable usando la función sizeof()
    printf("El tamaño de memoria utilizado por esa variable usando la función sizeof() es: \t %d\n", sizeof(Variable));


    /* code */

    system("pause");
    return 0;
}


