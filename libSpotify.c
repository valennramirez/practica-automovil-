#include "libSpotify.h"
#include <stdio.h>
#include <stdlib.h>

nodoCancion *crearNodo ()
{
    nodoCancion *aux;

    printf ("Ingrese el titulo de la cancion: ");
    fflush(stdin);
    scanf("%s", aux->dato.titulo);

    printf ("Ingrese el nombre del artista: ");
    fflush(stdin);
    scanf("%s", aux->dato.artista);

    printf ("Ingrese el titulo del album de la cancion: ");
    fflush(stdin);
    scanf("%s", aux->dato.album);

    printf ("Ingrese el genero de la cancion: ");
    fflush(stdin);
    scanf("%s", aux->dato.genero);

    printf ("Ingrese la duracion de la cancion: ");
    scanf("%d", aux->dato.duracion);

    printf ("Ingrese la cantidad de reproducciones: ");
    scanf("%d", aux->dato.reproducciones);

    printf ("Ingrese el id de la cancion: ");
    scanf("%d", aux->dato.idCancion);

    return aux;
}

nodoCancion *borrarUno (nodoCancion *lista, int idCancion)
{
    if(lista!=NULL)
    {
        nodoCancion *aBorrar;

        if (lista->dato.idCancion==idCancion)
        {
            aBorrar=lista;
            lista=lista->sig;
            free(aBorrar);
        }
        else
        {
            nodoCancion *seg=lista;
            nodoCancion *ante=seg;

            while(seg!=NULL)
            {
                if(seg->dato.idCancion==idCancion)
                {
                    aBorrar=seg;
                    ante->sig=seg->sig;
                    free(aBorrar);
                }
                ante=seg;
                seg=seg->sig;
            }
        }
    }

    return lista;
}


