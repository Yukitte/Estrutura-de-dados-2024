#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

No* no(char valor, No* proximo){
    No* no = malloc(sizeof(No));
    no-> valor = valor;
    no->proximo = proximo;
    return no;  
}   

void inserir(No* H, No* no){
    if ( H != NULL){
        if(H -> proximo == NULL){
            H ->proximo = no;
        }else{
            inserir(H->proximo, no);
        }
    }
}

void imprimir_lista(No* H){
    if(H != NULL){
        printf("%c", H-> valor);
        imprimir_lista(H->proximo);
    }
}

int quantidade(No* H){
    if(H != NULL){
        return 1 + quantidade( H -> proximo);
    }
    return 0;
}

No* copiar_lista(No* H){
    if(H != NULL){
        return no(H -> valor, copiar_lista( H -> proximo ));

    }
    return NULL;
}

void(liberar(No* H)){
    if(H != NULL){
        liberar(H->proximo);
        free(H);
        H = NULL;
    }
}