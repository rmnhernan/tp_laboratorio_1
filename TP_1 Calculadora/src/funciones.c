#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>


int menu()
{
    int opcion;

    printf("1-Ingresar 1er operando\n");
    printf("2-Ingresar 2do operando\n");
    printf("3-Calcular todas las operaciones\n");
    printf("4-Informar resultados\n");
    printf("5-Salir\n");
    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);

    return opcion;
}

int getInt(char mensaje[])
{
    int valor;

    printf("%s", mensaje);
    scanf("%d",&valor);

    return valor;
}



int sumar(int valorA,int valorB)
{
    return valorA+valorB;
}

int restar(int valorA,int valorB)
{
    return valorA-valorB;
}

float dividir(int valorA,int valorB)
{
    return (float)valorA/valorB;
}

int multiplicar(int valorA,int valorB)
{
    return valorA*valorB;
}

int sacarFactorial(int numero)
{
    int valorDeRetorno = 1;
    int i;


    for(i = numero; i > 1; i--)
        {
            valorDeRetorno *=i ;
        }

    return valorDeRetorno;
}


