#ifndef LIBRERIAS_H_INCLUDED
#define LIBRERIAS_H_INCLUDED

typedef struct{
int id;
char nombreCanal[40];
int cantSuscriptores; ///cant suscript total del canal medidas
}stYoutuber;

typedef struct
{
    stYoutuber dato;
    struct nodoS *sig;
} nodoS;

typedef struct
{
    stYoutuber dato;
    struct nodoD *sig;
    struct nodoD *ante;
} nodoD;

typedef struct
{
    struct nodoD *primero;
    struct nodoD *ultimo;
} fila;


#endif // LIBRERIAS_H_INCLUDED
