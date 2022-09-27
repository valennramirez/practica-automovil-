#include "libauto2.h"
#include <stdio.h>
#include <stdlib.h>

//1
nodoAuto *iniclista ()
{
    return NULL;
}

nodoAuto *crearNodo (char patente[], int valor, char marca[])
{
    nodoAuto *aux=(nodoAuto*)malloc(sizeof(nodoAuto));
    aux->dato.valor=valor;
    strcpy(aux->dato.patente, patente);
    strcpy(aux->dato.marca, marca);

    return aux;
}

void mostrarNodo (nodoAuto *aux)
{
    printf ("PATENTE: %s\n", aux->dato.patente);
    printf ("VALOR: %d\n", aux->dato.valor);
    printf ("MARCA: %s\n", aux->dato.marca);
}

void mostrarLista(nodoAuto *lista)
{
    nodoAuto *seg=lista;
    while(seg!=NULL)
    {
        mostrarNodo(seg);
        seg=seg->sig;
    }
}

//2
void agregarFinal (nodoAuto **lista, nodoAuto *nn)
{
    if (*lista==NULL)
    {
        *lista=nn;
    }
    else
    {
        nodoAuto *seg=&lista;
        while(seg!=NULL)
        {
            if (seg->sig==NULL)
            {
                seg->sig=nn;
            }
            seg=seg->sig;
        }
    }

}
//3
 int insertarCelda(automovil A [ ], int dim, automovil dato, int validos)
 {
     validos=0;

     if(dim>validos)
     {
         A[validos]=dato;
         validos++;
     }

     return validos+1;
 }
//4
void agregarMuchos (nodoAuto **lista)
{
    nodoAuto *aux=iniclista();

    char seguir='s';
    char patente[6];
    char marca[6];

    int valor;

    while (seguir=='s')
    {
        printf ("Ingrese la patente del auto: ");
        fflush(stdin);
        scanf("%s", patente);

        printf ("\nIngrese el valor del auto: ");
        scanf("%d", &valor);

        printf ("\nIngrese la marca del auto: ");
        fflush(stdin);
        scanf("%s", marca);

        printf("\nDesea seguir? s/n: ");
        fflush(stdin);
        scanf("%c", &seguir);

        aux=crearNodo(patente, valor, marca);

        agregarFinal(lista, aux);
    }
}

//5
int pasar (nodoAuto *lista, automovil A[], int dim)
{
    int validos=0;

    if (lista!=NULL)
    {
        validos=insertarCelda(A, dim, lista->dato, validos);
    }

    return validos;
}

//6
void mostrarArregloRecursivo(automovil A[ ], int i, int pos)
{
    if (i>pos)
    {
        printf ("Auto %d", pos);

        printf ("\nPatente: %s", A[pos].patente);
        printf ("\nMarca: %s", A[pos].marca);
        printf ("\nValor: %d", A[pos].valor);

        mostrarArregloRecursivo(A, i, pos+1);
    }
}

//7
int determinaSiEsPar (char patente[])
{
    int flag=0;

    if (patente[5]%2==0)
    {
        flag=1;
    }

    return flag;
}

int sumaRecursivaPar (nodoAuto *lista)
{
    int suma, flag=0;

    nodoAuto *seg=lista;

    if(lista!=NULL)
    {
        flag=determinaSiEsPar(seg->dato.patente);

        if (flag==1)
        {
            suma=suma+seg->dato.valor;
            suma=sumaRecursivaPar(seg->sig);
        }
        else
        {
            suma=sumaRecursivaPar(seg->sig);
        }
    }
    return suma;
}
