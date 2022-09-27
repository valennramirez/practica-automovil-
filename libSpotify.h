#ifndef LIBSPOTIFY_H_INCLUDED
#define LIBSPOTIFY_H_INCLUDED

typedef struct stCancion
{
    char titulo[50];
    char artista[50];
    char album[50];
    char genero[50];
    int duracion;
    int reproducciones;
    int idCancion
}cancion ;

typedef struct nodoCancion
{
    cancion dato ;
    struct nodoCancion * sig;

}nodoCancion;





#endif // LIBSPOTIFY_H_INCLUDED
