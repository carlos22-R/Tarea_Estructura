#include <stdio.h>
#include <stdlib.h>



/* 
 * File:   cola.h
 * Author: jcpenya
 *
 * Created on 20 de septiembre de 2021, 15:17
 */

#ifndef COLA_H
#define COLA_H

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

typedef int TIPO_ELEMENTO;

typedef struct nodo {
    TIPO_ELEMENTO e;
    struct nodo* siguiente;
} NODO;

typedef struct {
    NODO *frente, *final;
} COLA;
void crear_cola(COLA *cola);
NODO *crear_nodo(TIPO_ELEMENTO elemento);
void vaciar_cola(COLA*cola);
void elmiminarNodo(COLA *cola);
void agregar_a_cola(COLA *cola, TIPO_ELEMENTO elemento);
 TIPO_ELEMENTO sacar_de_cola(COLA *cola);
TIPO_ELEMENTO get_primero_cola(COLA c);
int cola_es_vacia(COLA c);
#endif /* COLA_H */