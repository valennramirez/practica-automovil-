#ifndef LIBAUTO2_H_INCLUDED
#define LIBAUTO2_H_INCLUDED

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

///1-
nodoAuto *iniclista ();
nodoAuto *crearNodo (char patente[], int valor, char marca[]);
void mostrarNodo (nodoAuto *aux);
void mostrarLista(nodoAuto *lista);
///2-
void agregarFinal (nodoAuto **lista, nodoAuto *nn);
///3-
int insertarCelda(automovil A [ ], int dim, automovil dato, int validos);
///4-
void agregarMuchos (nodoAuto **lista);
///5-
int pasar (nodoAuto *lista, automovil A[], int dim);
///6-
void mostrarArregloRecursivo(automovil A[ ], int i, int pos);
///7-
int determinaSiEsPar (char patente[]);
int sumaRecursivaPar (nodoAuto *lista);


#endif // LIBAUTO2_H_INCLUDED
