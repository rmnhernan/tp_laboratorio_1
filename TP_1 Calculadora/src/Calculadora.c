/*Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
*/


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
	setbuf(stdout,NULL);
    int numeroA,numeroB,opcion;
    int flagA = 0;
    int flagB = 0;

   do
   {


        if(flagA == 1)
        {
            printf("A = %d\n",numeroA);
        }
        if(flagB == 1)
        {
            printf("B = %d\n", numeroB);
        }

        opcion = menu();




        switch (opcion)
        {

        case 1:
          numeroA = getInt("Ingrese el 1er operando: ");
          flagA = 1;
          break;

        case 2:
            numeroB = getInt("Ingrese el 2do operando: ");
            flagB = 1;
          break;

        case 3:
            if (flagA == 1 && flagB == 1)
            {
              printf("Todas las operaciones calculadas, para mostrarlas ingrese opcion 4.\n");
              sumar(numeroA,numeroB);
              restar(numeroA,numeroB);
              dividir(numeroA,numeroB);
              multiplicar(numeroA,numeroB);
              sacarFactorial(numeroA);
              sacarFactorial(numeroB);

            }else
            {
              printf("Error, ingrese dos numeros por favor.");
            }
            system("pause");
            break;

        case 4:
            if (flagA == 1 && flagB == 1)
            {
                printf("El resultado de A+B es: %d\n", sumar(numeroA,numeroB));
                printf("El resultado de A-B es: %d\n", restar(numeroA,numeroB));

                if(numeroB == 0)
                {
                    printf("No es posible dividir por cero.\n");
                }else
                {
                    printf("El resultado de A/B: %.3f\n",dividir(numeroA,numeroB));
                }
                printf("El resultado de A*B: %d\n",multiplicar(numeroA,numeroB));
                printf("El factorial de %d es: %d\n", numeroA , sacarFactorial(numeroA));
                printf("El factorial de %d es: %d\n", numeroB , sacarFactorial(numeroB));
            }else
            {
                printf("Error, ingrese ambos números.\n");
            }
            system("pause");

            break;

            case 5:

            break;

            }


        } while(opcion != 5);

    system("cls");
	return EXIT_SUCCESS;
}
