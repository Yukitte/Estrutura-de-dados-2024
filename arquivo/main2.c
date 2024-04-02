#include <stdio.h>
#include <stdlib.h>

int main(int argc , char* argv[]){

    char txt[100];
    FILE *arq;

    arq = fopen("arq", "r");

    if (arq ==NULL){
        printf("erro ao abrir");
        exit(0);
    }

    while(fscanf(arq, "%s", &txt) != EOF){
        printf("txt = %s ", txt);
    }

    
    fclose(arq);

    return 0;
}