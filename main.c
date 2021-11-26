/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: carlos
 *
 * Created on 18 de octubre de 2021, 20:08
 */

#include <stdio.h>
#include <stdlib.h>

#include "ArbolB.h"

/*
 * 
 */
int main(int argc, char** argv) {
/*
Pila pila;
    crearPila(&pila);
    int N;
    printf("cantidad de elementos");
    scanf("%i",&N);
    float a;
    for(int i=0;i<N;i++){
        printf("ingrese elemento");
        scanf("%f",&a);
        agregar_a_pila(&pila,a);
    }
    
    while(!pila_es_vacia(pila)){
        printf("%f\n",get_primero_pila(&pila));
    }
*/
/*
    vaciar_pila(&pila);
*/
/*
    COLA *cola;
    crear_cola(&cola);
    agregar_a_cola(&cola,4);
    agregar_a_cola(&cola,2);
    TIPO_ELEMENTO A ,B;
    A=sacar_de_cola(&cola);
    printf("%i",A);
    A=sacar_de_cola(&cola);
    printf("%i",A);
*/
    Nodo *arbol=NULL;
    InsertarArbol(&arbol,8);
    InsertarArbol(&arbol,5);
    InsertarArbol(&arbol,9);
    InsertarArbol(&arbol,10);
    InsertarArbol(&arbol,4);
    InsertarArbol(&arbol,2);
    int alturaa=altura(arbol,4);
    printf("%d",alturaa);
   if(Existe(arbol,8)){
        puts("existe");
    }else{
        puts("no existe");
    }
    return (EXIT_SUCCESS);
}

