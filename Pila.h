#include <stdio.h>
#include <stdlib.h>

#ifndef PILA_H
#define PILA_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

typedef float TipoElemento;

typedef struct nodoP{
    TipoElemento dato;
    struct nodoP *siguiente;
}Nodo;
typedef struct {
    Nodo *cima;
}Pila;
void crearPila(Pila *pila);
int pila_es_vacia(Pila);
void vaciar_pila(Pila *pila);
void agregar_a_pila(Pila* pila, TipoElemento dato);
TipoElemento get_primero_pila(Pila *pila);
void pila_borrar(Pila *pila);

#endif /* PILA_H */