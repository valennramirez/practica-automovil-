#ifndef LIBAUTO_H_INCLUDED
#define LIBAUTO_H_INCLUDED

typedef struct
{
   char patente[6];
   int valor;
   char marca[10];
} automovil;

typedef struct
{
   automovil dato;
   struct nodoAuto * sig;
} nodoAuto;

nodoAuto *iniclista ();
nodoAuto *crearNodo (char patente[], int valor, char marca[]);
void mostrarNodo (nodoAuto *aux);
void mostrarLista(nodoAuto *lista);

void agregarFinal (nodoAuto **lista, nodoAuto *nn);
int insertarCelda(automovil A [ ], int dim, automovil dato, int validos);
void agregarMuchos (nodoAuto **lista);
int pasar (nodoAuto *lista, automovil A[], int dim);
void mostrarArregloRecursivo(automovil A[ ], int i, int pos);
int determinaSiEsPar (char patente[]);
int sumaRecursivaPar (automovil A[], int i, int pos);

#endif // LIBAUTO_H_INCLUDED
