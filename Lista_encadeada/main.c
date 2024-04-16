#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

int main(int argc,char* argv[]){

    No* H = no('A', NULL);
    No* n2 = no('B', NULL);
    No* n3 = no('C', NULL);
    No* n4 = no('D', NULL);
    No* n5 = no('E', NULL);

    No* Hc = copiar_lista(H);

    inserir(H,n2);
    inserir(H,n3);
    inserir(H,n4);
    inserir(H,n5);

    printf("\n");
    imprimir_lista(H);
    printf("\n");
    imprimir_lista(Hc);

    H-> proximo-> valor = 'X';
    Hc -> valor = 'U';

    imprimir_lista(H);
    printf("\ncopia\n");
    imprimir_lista(Hc);


    printf("\nQTD = %d  ",quantidade(H));       
    printf("\ncopia QTD = %d  ",quantidade(Hc));     

    return 0;
}       