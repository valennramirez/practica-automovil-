#include <stdio.h>
#include <stdlib.h>
#include "libauto.h"

int main()
{
    int ejercicio=0;

    printf ("EJERCICIO 1------------CREA Y MUESTRA UNA LISTA\n");
    printf ("EJERCICIO 2------------PASA UNA LISTA A UN ARREGLO Y LO MUESTRA\n");
    printf ("EJERCICIO 3------------MUESTRA ARREGLO DE MANERA RECURSIVA\n");
    printf ("EJERCICIO 4------------SUMA LOS NODOS PAR DE MANERA RECURSIVA\n");
    printf ("Ingrese un ejercicio: ");
    scanf("%d", &ejercicio);

    switch (ejercicio)
    {
    case 1:
        {
            nodoAuto *aux=crearNodo('aa123', 234, 'bm');

            mostrarNodo(aux);
        }break;
    case 2:
        {

        }break;
    case 3:
        {

        }break;
    case 4:
        {

        }break;
    }
    return 0;
}
