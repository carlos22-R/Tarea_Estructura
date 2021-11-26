#include <stdio.h>
#include <stdlib.h>

#ifndef ARBOLB_H
#define ARBOLB_H

#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
typedef struct nodo{
    int valor;
    struct nodo* izdo;
    struct nodo* dcho;
}Nodo;
typedef Nodo Arbol;
Nodo* CrearNodo(int valor);
void DestruirNodo(Nodo* nodo);    
void InsertarArbol(Nodo**arbol,int valor);
int Existe(Nodo *arbol,int valor);
int altura(Nodo*arbol, int valor);
#endif /* ARBOLB_H */

