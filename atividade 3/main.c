#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main(int argc , char*argv[]){
    FILE *fp =fopen(argv[1],"r");

    if(fp == NULL){
        printf("Erro ao abrir arquivo %s\n",argv[1]);
        exit(1);
    }
    int i;
    int qtd = 0;
    int *vetor;

    while(fscanf(fp,"%d\n",&i)!=EOF){
       qtd++;
    }

    vetor = malloc (sizeof(int)*qtd);

    rewind(fp);
    i=0;

    while(fscanf(fp,"%d\n",&vetor[i])!=EOF){
       i++;
    }
    fclose(fp);
    bubble_sort(vetor,qtd);

    FILE* saida = fopen("saida.txt", "w");
    if(saida ==NULL){
        printf("Erro ao abrir arquivo saida.txt");
        exit(1);
    }
    for(i=0; i < qtd ; i++){
        fprintf(saida,"%d\n", vetor[i]);
    }
    exit(0);
}