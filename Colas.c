#include <stdio.h>
#include <stdlib.h>

#include "Cola.h"
void crear_cola(COLA *cola){
    cola->final=NULL;
    cola->frente=NULL;
}
int cola_es_vacia(COLA c){
    return (c.frente==NULL);
}
NODO *crear_nodo(TIPO_ELEMENTO elemento){
    NODO *nuevo;
    nuevo=(NODO *)malloc(sizeof(NODO));
    nuevo->e=elemento;
    nuevo->siguiente=NULL;
    return nuevo;
}
void agregar_a_cola(COLA *cola, TIPO_ELEMENTO elemento){
    NODO *t;
    t=crear_nodo(elemento);
    if(cola_es_vacia(*cola)){
        cola->frente=t;
    }else{
        cola->final->siguiente=t;
    }
     cola->final=t;
}
void elmiminarNodo(COLA *cola){
    NODO *t;
    t=cola->frente;
    cola->frente=t->siguiente;
    free(t);
}
TIPO_ELEMENTO sacar_de_cola(COLA *cola){
 if(cola_es_vacia(*cola)){
     puts("Underflow");
     exit(1);
 }
 TIPO_ELEMENTO temp;
 temp=cola->frente->e;
 elmiminarNodo(cola);
 return temp;
}
TIPO_ELEMENTO get_primero_cola(COLA c){
    if(cola_es_vacia(c)){
     puts("Underflow");
 }
    return c.frente->e;
}
void vaciar_cola(COLA*cola){
    while(!cola_es_vacia(*cola)){
        elmiminarNodo(cola);
    }
}