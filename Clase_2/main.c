#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int maximo;
    int minimo;
    int numeroDelMedio;


    printf("Ingrese numero:");
    scanf("%d",&numeroUno);

    maximo = numeroUno;
    minimo = numeroUno;

    printf("Ingrese numero: ");
    scanf("%d",&numeroDos);

    if(numeroDos < minimo)
    {
        minimo = numeroDos;
    }else
    {
        if ( numeroDos > maximo)
        {
            maximo=numeroDos;
        }
    }

    printf("Ingrese numero:");
    scanf("%d",&numeroTres);

    if(numeroTres < minimo)
    {
        minimo = numeroTres;
    }else
    {
        if ( numeroTres > maximo)
        {
            maximo=numeroTres;
        }
    }

    if(numeroDelMedio > minimo & numeroDelMedio < maximo)
    {

    }



    return 0;
}
