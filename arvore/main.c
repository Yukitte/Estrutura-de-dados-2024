#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(int argc,char *argv[]) {
    Arvore_no* root = NULL;

    // Inserindo nós
    root = inserir(root, 50);
    inserir(root, 30);
    inserir(root, 20);
    inserir(root, 40);
    inserir(root, 70);
    inserir(root, 60);
    inserir(root, 80);

    // percorre do menor pro maior
    printf("Percorrendo em ordem (in-order): ");
    inorder(root);
    printf("\n");

    //percorre na ordem que foi inserido
    printf("Percorrendo em pre-ordem (pre-order): ");
    preorder(root);
    printf("\n");


    printf("Percorrendo em pos-ordem (post-order): ");
    postorder(root);
    printf("\n");

    // Buscando um nó
    int chaveBusca = 25;
    Arvore_no* resultadoBusca = busca(root, chaveBusca);
    if (resultadoBusca != NULL) {
        printf("No %d encontrado na arvore.\n", chaveBusca);
    } else {
        printf("No %d nao encontrado na arvore.\n", chaveBusca);
    }

    // Deletando um nó
    int chaveDelecao = 30;
    root = deletar_no(root, chaveDelecao);
    printf("Depois de deletar %d, percorrendo em ordem: ", chaveDelecao);
    inorder(root);
    printf("\n");

    return 0;
}
