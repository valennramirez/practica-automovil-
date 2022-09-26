#include "librerias.h"
#include <stdio.h>
#include <stdlib.h>

nodo *iniclista ()
{
    return NULL;
}

nodo *crearNodo (int dato)
{
    nodo *aux= (nodo*)malloc(sizeof(nodo));
    aux->dato=dato;

    return aux;
}

nodo *agregarPrincipio (nodo *lista, nodo *nn)
{
    if (lista==NULL)
    {
        lista=nn;
    }
    else
    {
        nn->sig=lista;
        lista=nn;
    }

    return lista;
}

nodo *agregarFinal (nodo *lista, nodo *nn)
{
    nodo *seg=lista;

    if(seg==NULL)
    {
        seg=nn;
    }
    else
    {
        while (seg!=NULL)
        {
            if(seg->sig==NULL)
            {
                seg->sig=nn;
            }
            seg=seg->sig;
        }
    }

    return seg;
}

nodo *agregarEnOrden (nodo *lista, nodo *nn)
{
    nodo *seg=lista;
    nodo *ante=lista;

    if (lista==NULL)
    {
        lista=nn;
    }
    else if (lista->dato>nn->dato)
    {
        lista=agregarPrincipio(lista, nn);
    }
    else
    {
        while (seg!=NULL)
        {
            if(nn->dato>seg->dato)
            {
                ante->sig=nn;
                nn->sig=seg;
            }
            ante=seg;
            seg=seg->sig;
        }
    }

    return lista;
}

nodo *borrarNodo (int dato, nodo *lista)
{
    if (lista!=NULL)
    {
        nodo *aBorrar;
        if (dato==lista->dato)
        {
            aBorrar=lista;
            lista=aBorrar->sig;
            free(aBorrar);
        }
        else
        {
            nodo *seg=lista;
            nodo *ante=seg;

            while (seg!=NULL)
            {
                if(dato==seg->dato)
                {
                    ante->sig=seg->sig;
                    free(seg);
                }
                ante=seg;
                seg=seg->sig;
            }
        }
    }

    return lista;
}

void mostrarNodo (nodo *aux)
{
    printf ("Dato: %d", aux->dato);
}

///
