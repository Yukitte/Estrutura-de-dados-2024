#include <stdio.h>
#include <stdlib.h>
#include "lista_circular.h"

int main (int argc, char* argv[]){

    No* H = no('A', NULL);
    inserir(H, 'B');
    inserir(H, 'C');

    imprimir(H);
    printf("\n");

    remove_l(H, 'B');
    imprimir(H);
    printf("\n");

    remove_l(H, 'C');
    imprimir(H);
    printf("\n");

    return 0;
}