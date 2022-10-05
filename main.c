#include <stdio.h>
#include <stdlib.h>
#include "librerias.h"

int main()
{
    nodoS *lista;

    fila *fila;

    lista=deArchivoALista("youtubers.bin");

    agregarTopAFila(lista, fila);

    mostrarFila(fila);

    return 0;
}

stYoutuber carga()
{
    stYoutuber aux;

    printf ("Ingrese el id: ");
    scanf("%d", &aux.id);

    printf ("Ingrese el nombre del canal: ");
    scanf("%s", aux.nombreCanal);

    printf ("Ingrese la cantidad de suscriptores: ");
    scanf("%d", &aux.cantSuscriptores);

    return aux;
}
void cargarArchivoYoutuber (char nombreArchivo[])
{
    FILE *archivo=fopen(nombreArchivo, "wb");

    char seguir='s';

    stYoutuber aux;

    if (archivo!=NULL)
    {
        while (seguir=='s')
        {
            aux=carga();

            fwrite(&aux, sizeof(stYoutuber), 1, archivo);

            printf ("Desea seguir? s/n: ");
            fflush(stdin);
            scanf("%c", &seguir);
        }

        fclose(archivo);
    }
}

