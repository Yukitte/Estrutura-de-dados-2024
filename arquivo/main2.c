#include <stdio.h>
#include <stdlib.h>

int main(int argc , char* argv[]){

    char txt[100];
    FILE *arq;

    arq = fopen("arq", "r");

    if (arq == NULL){
        printf("erro ao abrir");
        exit(0);
    }

    while(fscanf(arq, "%[^\n]\n", &txt) != EOF){
        fprintf(arq,"txt = %s \n  ", txt);
    }
    fclose(arq);

    return 0;
}