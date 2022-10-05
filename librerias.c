#include <stdio.h>
#include <stdlib.h>
#include "librerias.h"

nodoS *iniclista ()
{
    return NULL;
}

nodoS *crearNodo (stYoutuber dato)
{
    nodoS *aux=(nodoS*)malloc(sizeof(nodoS));

    aux->dato.id=dato.id;
    strcpy(aux->dato.nombreCanal, dato.nombreCanal);
    aux->dato.cantSuscriptores=dato.cantSuscriptores;

    return aux;
}

nodoS *agregarAlFinalRecursivo (nodoS *lista, nodoS *nn)
{
    if (lista==NULL)
    {
        lista=nn;
    }
    else
    {
        if(lista->sig==NULL)
        {
            lista->sig=nn;
        }
        else
        {
            lista=agregarAlFinalRecursivo(lista->sig, nn);
        }
    }

    return lista;
}

nodoS *deArchivoALista (char nombreArchivo[])
{
    nodoS *lista=iniclista();
    nodoS *aux1;

    stYoutuber aux;

    FILE *archivo=fopen(nombreArchivo, "rb");

    if(archivo!=NULL)
    {
        while (fread(&aux, sizeof(stYoutuber), 1, archivo)>0)
        {
            aux1=crearNodo(aux);

            lista=agregarAlFinalRecursivo(lista, aux1);
        }

        fclose(archivo);
    }

    return lista;
}


///2
void mostrarYoutuber (stYoutuber aux)
{
    printf ("nombre: %s\n", aux.nombreCanal);
    printf ("id: %d\n", aux.id);
    printf ("cant sus: %d\n", aux.cantSuscriptores);
}

void mostrarLista(nodoS *lista)
{
    nodoS *seg=lista;
    while(seg!=NULL)
    {
        mostrarYoutuber(seg->dato);
        seg=seg->sig;
    }
}

void verArchivo (char nombreArchivo[])
{
    stYoutuber aux;

    FILE *archivo=fopen(nombreArchivo, "rb");

    if(archivo!=NULL)
    {
        while (fread(&aux, sizeof(stYoutuber), 1, archivo)>0)
        {
             printf ("nombre: %s\n", aux.nombreCanal);
    printf ("id: %d\n", aux.id);
    printf ("cant sus: %d\n", aux.cantSuscriptores);
        }

        fclose(archivo);
    }

}
///3
void mostrarNodoEspecificoRecursivo (nodoS *lista)
{
    if(lista!=NULL)
    {
        if(800>lista->dato.cantSuscriptores)
        {
            mostrarYoutuber(lista->dato);
        }

        mostrarNodoEspecificoRecursivo(lista->sig);
    }
}

///4
//C
nodoD *crearNodoDoble (stYoutuber dato)
{
    nodoD *aux=(nodoD*)malloc(sizeof(nodoD));

    aux->dato.id=dato.id;
    strcpy(aux->dato.nombreCanal, dato.nombreCanal);
    aux->dato.cantSuscriptores=dato.cantSuscriptores;

    return aux;
}
nodoD *agregarAlFinal (nodoD *lista, nodoD *nuevo)
{
    nodoD *seg=lista;
    if(lista==NULL)
    {
        lista==nuevo;
    }
    else
    {
        while (seg!=NULL)
        {
            if(seg->sig==NULL)
            {
                seg->sig=nuevo;
                nuevo->ante=seg;
            }
            else
            {
                seg=seg->sig;
            }
        }
    }

    return lista;
}
fila * agregarTopAFila (nodoS *lista)
{
    nodoD *aux;
    fila *fila;
    while(lista!=NULL)
    {
        aux=crearNodo(lista->dato);
        if(fila->primero==NULL)
        {
            fila->primero=aux;
            fila->ultimo=aux;
        }
        else
        {
             fila->primero=agregarAlFinal(fila->primero, aux);
             fila->ultimo=aux;
        }
    }
    return fila;
}

///5

void mostrarListaDoble (nodoD *lista)
{
    while(lista!=NULL)
    {
        mostrarYoutuber(lista->dato);
        lista=lista->sig;
    }
}

void mostrarFila (fila *fila)
{
    nodoD *seg=fila;
    while(fila->primero!=NULL)
    {
        mostrarListaDoble(seg);
        fila
    }
}
