#include <stdio.h>
#include <stdlib.h>
#include "hash.h"

int main(int argc, char* argv[]){

    char** tabela = tabela_hash();

    put("DF", "Brasilia", tabela);
    put("SE", "Aracaju", tabela);
    put("PB", "Joao Pessoa", tabela);
    put("PA", "Belem", tabela);

    printf("%s\n", get("PB",tabela));
    printf("%s\n", get("SE",tabela));   
    printf("%s\n", get("DF",tabela));
    printf("%s\n", get("PA",tabela));

    printf("Contains DF? %d \n", contains("DF", tabela));
    printf("Contains SP? %d \n", contains("SP", tabela));
    remover("DF",tabela);
    printf("Contains DF? %d \n", contains("DF", tabela));


    return 0;
}