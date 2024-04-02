#include <stdio.h>
#include <stdlib.h>

int main(int argc , char* argv[]){

    FILE *arq;

    arq = fopen("arq.txt","a");

    if(arq == NULL){
        printf("Erro ao abrir");
        exit(1);
    }

    fprintf(arq, argv[1]);
    fprintf(arq, "\n");

    fclose(arq);
    return 0;
}