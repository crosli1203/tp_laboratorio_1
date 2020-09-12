#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"

int main()
{

    setbuf(stdout, NULL);

    float numero1;
    float numero2;
    int opcion = 0;
    float resultadosuma;
    float resultadoresta;
    float resultadodivision;
    float resultadomultiplcacion;
    double resultFact1;
    double resultFact2;

    int flagnumerouno = 0;
    int flagnumerodos = 0;
    int flagcalculo = 0;
    int divisioncero = 0;

    do
    {

        printf("\n\n ********** Calculadora ********** \n\n");

        printf("\n1. Ingresar Operador (A): \n");
        printf("\n2. Ingresar Operador (B): \n");
        printf("\n3. Calcular operaciones: \n");
        printf("\n4. Imprimir resultados: \n");
        printf("\n5. Salir de la aplicacion: \n\n");

        printf(" Seleccione una opcion: ");
        fflush(stdout);
        scanf("%d", &opcion);

        system("cls");

        switch(opcion)
        {
        case 1:
            printf("\n Ingrese el Operador (A): ");
            fflush(stdout);
            scanf("%f", &numero1);
            flagnumerouno = 1;
            break;

        case 2:
            printf("\n Ingrese el Operador (B): ");
            fflush(stdout);
            scanf("%f", &numero2);
            flagnumerodos = 1;
            break;

        case 3:

            if (flagnumerouno == 0 || flagnumerodos == 0)
            {
                printf("\n ERROR No has introducido algun Operador \n");

            }
            else
            {
                resultadosuma = suma(numero1,numero2);
                resultadoresta = resta(numero1,numero2);
                resultadomultiplcacion = multiplicacion(numero1,numero2);
                resultadodivision = division(numero1,numero2);
                resultFact1 = factorial(numero1);
                resultFact2 = factorial(numero2);

                flagcalculo = 1;

                if(numero2 == 0)
                {
                    divisioncero = 1;
                }
                else
                {
                    divisioncero = 0;
                }

                printf("\n\n Operaciones resueltas, volviendo al menu \n\n");

            }
            system("pause");
            system("cls");


            break;


        case 4:
            if(flagnumerouno == 0 || flagnumerodos == 0)
            {
                printf("\n\n ERROR No has introducido algun Operador \n\n");
            }
            else
            {
                if(flagcalculo == 0)
                {
                    printf("\n\n ERROR No se han realizados los calculos \n\n");
                }
                else
                {
                    printf("\n Suma de (A) %.1f y (B) %.1f : %.1f \n", numero1,numero2,resultadosuma);

                    printf("\n Resta de (A) %.1f y (B) %.1f : %f \n", numero1,numero2,resultadoresta);

                    printf("\n Multiplicacion de (A) %.2f y (B) %.2f : %.2f \n", numero1,numero2,resultadomultiplcacion);

                    if(divisioncero == 1)
                    {
                        printf("\nError matematico: division por 0 indefinida \n");

                    }
                    else
                    {
                        printf("\n Division de (A) %.2f y (B) %.2f : %.2f \n", numero1,numero2,resultadodivision);

                    }

                    if(numero1>=0)
                    {
                        printf("\n El Factorial de (A) %.2f es: %llf \n", numero1, resultFact1);
                    }
                    else
                    {
                        printf("\n La operacion factorial solo sirve en numeros naturales incluido el 0 \n");

                    }

                    if(numero2>=0)
                    {
                        printf("\n\ Factorial de (B) %.2f es: %llf \n\n", numero2, resultFact2);

                    }
                    else
                    {
                        printf("\n La operacion factorial solo sirve en numeros naturales incluido el 0 \n");
                    }


                    numero1=0;
                    numero2=0;
                    flagnumerouno=0;
                    flagnumerodos=0;


                }


            }
            system("pause");
            system("cls");
            break;

        case 5:
            printf("\n Hasta Pronto \n\n ");
            break;

        default:
            printf("\n Opcion invalida, seleccione una opcion correcta \n");
            system("pause");





        }


    }
    while(opcion != 5);




    return 0;


}
