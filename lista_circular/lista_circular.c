#include <stdio.h>
#include <stdlib.h>
#include "lista_circular.h"

No * no(char valor, No* proximo){
    No* no= malloc(sizeof(No));
    no -> valor = valor;
    no -> proximo = proximo;
    return no;
}

void inserir(No* H, char valor){
    if ( H != NULL){
        if(H -> proximo == NULL){
            H->proximo= no(valor, H);
        }else{
            No* tmp = H->  proximo;
            while(tmp-> proximo != H ){
                tmp = tmp -> proximo;
            }
        }

    }
}
void imprimir( No* H){
    if(H != NULL){
        printf("%c", H-> valor);

        No* tmp = H -> proximo;
        while(tmp != H && tmp != NULL){
            printf("%c", tmp -> valor);
            tmp = tmp-> proximo;
        }
    }
}
void remove_l(No* H, char valor){
    if( H != NULL){
        No* tmp;
        No* tmp_ant;
        tmp = H->proximo;
        tmp_ant = H;

        while(tmp != H && tmp != NULL){
            if(tmp -> valor == valor ){
                tmp_ant -> proximo = tmp -> proximo;
                free(tmp);
                tmp = tmp_ant -> proximo;
            }else{
                tmp_ant = tmp;
                tmp= tmp -> proximo;
            }
        }
    }
}