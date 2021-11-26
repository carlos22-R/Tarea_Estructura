#include <stdio.h>
#include <stdlib.h>

#include "Pila.h"
void crearPila(Pila *pila){
    pila->cima=NULL;
}
int pila_es_vacia(Pila pila){
    return (pila.cima==NULL);
}
void eliminarPrimerNodo(Pila *pila){
    if(!pila_es_vacia(*pila)){
        Nodo *f;
        f=pila->cima;
        pila->cima=f->siguiente;
        free(f);
    }
}
void vaciar_pila(Pila *pila){
    while(!pila_es_vacia(*pila)){
        eliminarPrimerNodo(pila);
    }
}

void agregar_a_pila(Pila* pila, TipoElemento dato){
    Nodo *a;
    a=(Nodo*)malloc(sizeof(Nodo));
    a->dato=dato;
    a->siguiente=pila->cima;
    pila->cima=a;
}
TipoElemento get_primero_pila(Pila *pila){
    if(pila_es_vacia(*pila)){
        puts("Underflow");
        exit(1);
    }
    TipoElemento temp=pila->cima->dato;
    eliminarPrimerNodo(pila);
    return temp;
}
void pila_borrar(Pila *pila){
    while(!pila_es_vacia(*pila)){
        eliminarPrimerNodo(pila);
    }
}