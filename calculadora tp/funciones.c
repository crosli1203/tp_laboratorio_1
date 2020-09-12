#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float suma(float num1, float num2)
{
    float resultadosuma;
    resultadosuma = num1+num2;
    return resultadosuma;
}

float resta(float num1, float num2)
{
    float resultadoresta;
    resultadoresta = num1 - num2;
    return resultadoresta;
}

float division(float num1, float num2)
{
    float resultadodivision;
    resultadodivision = num1/num2;
    return resultadodivision;
}

float multiplicacion(float num1, float num2)
{
    float resultadomultiplcacion;
    resultadomultiplcacion = num1*num2;
    return resultadomultiplcacion;
}

long long int factorial(float num1)
{
    long long int resultFact1 = 1;
    int c =num1;
    while(c > 1)
    {
        resultFact1 *= c;
        c--;
    }
  return resultFact1;

}
