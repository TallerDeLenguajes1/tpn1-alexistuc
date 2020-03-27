/*
3. Generen en el repositorio un archivo que se llame tp1_2.cpp y 
resuelva las siguientes tareas mediante el uso de funciones:
a) Haga una función que devuelva el cuadrado de un número
b) Haga la función anterior, pero devolviendo un tipo void
c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable 
d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
void Invertir(a,b) //deberá devolver en el valor de a en la variable b y en b el
valor de a
e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el
primer parámetro el menor y en el segundo el mayor.
f) Utilice la función anterior para leer pares de valores e imprimirlos por pantalla
de forma ordenada.
Al finaliza, debe subir todos los cambios al repositorio.
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//prototipos
int cuadrado(int x);//debe devolver un valor
void cuadradoVoid(int x);
void direccionYContenido(int *a);
void burbuja();
void paresDeValores();

int main()
{
    int valor = 3;
    int aux;

    //a) Haga una función que devuelva el cuadrado de un número
    aux = cuadrado(valor);//uso la variable aux para que recoja el valor de la funcion
    printf("El cuadrado del numero %d es: %d\n", valor, aux);

    //b) Haga la función anterior, pero devolviendo un tipo void
    cuadradoVoid(valor);

    //c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable 
    direccionYContenido(&valor);

    /*d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
    void Invertir(a,b) //deberá devolver en el valor de a en la variable b y en b el
    valor de a*/
    burbuja();

    /*
    e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el
    primer parámetro el menor y en el segundo el mayor.
    f) Utilice la función anterior para leer pares de valores e imprimirlos por pantalla
    de forma ordenada.
    */ 
    paresDeValores();
    /* code */
    system("pause");
    return 0;
}

//funcion que retorna el cuadrado de un numero
int cuadrado(int x){
    return x*x;
}

//funcion que calculA cuadrado de un numero
void cuadradoVoid(int x){
    printf("el cuadrado de %d es: \t%d.\n", x, x*x);
}

//esta funcion devuelve el valor y la direccion de una variable
void direccionYContenido(int *a){
    printf("la direccion de la variable es: \t%p.\n", a);
    printf("el valor de la variable es: \t%d.\n", *a);
}

//esta funcion invierte dos valores de entrada
void burbuja(){
    int a, b, aux;
    printf("ingrese un valor para la variable a: \t");
    scanf("%d", &a);
    printf("ingrese un valor para la variable b: \t");
    scanf("%d", &b);
    printf("se asignaron los siguientes valores:\na = %d\nb = %d\n", a, b);
    printf("intercambiando valores: \n");
    system("pause");
    aux = a;
    a = b;
    b = aux;
    printf("los nuevos valores son:\n%d para la variable a.\n%d para la variable b.\n", a, b);

}

//esta funcion pide 2 valores y los devuelve ordenados de menor a mayor
void paresDeValores(){
    int a, b;
    printf("Ingrese un valor:\n");
    scanf("%d", &a);
    printf("Ingrese otro valor:\n");
    scanf("%d", &b);
    if (a < b)
    {
        printf("MENOR:  %d.\nMAYOR: %d\n", a, b);
    }else if (b < a)
    {
        printf("MENOR:  %d.\nMAYOR: %d\n", a, b);
    }else printf("Los valores son iguales!!!\n");
}