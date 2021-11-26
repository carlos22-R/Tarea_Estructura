#include "ArbolB.h"
Nodo* CrearNodo(int valor){
    Nodo *nuevo;
    nuevo=(Nodo *)malloc(sizeof(Nodo));
    nuevo->valor=valor;
    nuevo->dcho=NULL;
    nuevo->izdo=NULL;
    return nuevo;
}
void DestruirNodo(Nodo* nodo){
    nodo->dcho=nodo->izdo=NULL;
    free(nodo);
}
void InsertarArbol(Nodo** arbol, int valor){
  if (*arbol==NULL){
      *arbol=CrearNodo(valor);
  }else{
      int valorARvol=(*arbol)->valor;
      if(valor<valorARvol){
          InsertarArbol(&(*arbol)->izdo,valor);
      }else{
          InsertarArbol(&(*arbol)->dcho,valor);
      }
  }  
}
int Existe(Nodo *arbol,int valor){
    if(arbol==NULL){
        return 0;
    }else if(arbol->valor==valor){
        return 1;
    }else if(arbol->valor>valor){
        return Existe(arbol->izdo,valor);
    }else{
        return Existe(arbol->dcho,valor);
    }
}

int altura(Nodo *arbol, int valor) {
    int altria = 0;
    while (arbol != NULL) {
        if (arbol->valor == valor) {
            return altria;
        } else {
            altria++;
            if (arbol->valor < valor) {
                arbol = arbol->izdo;
            } else {
                arbol = arbol->dcho;
            }
        }
    }
    return 0;
}
    


   
