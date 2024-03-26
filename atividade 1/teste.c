#include <stdio.h>
#include <stdlib.h>

void ordenarNumeros(int *inteiro, int QTD){
    for (int i =0; i <QTD -1; i++){
        for (int j =0;j<QTD -i -1;j++){
            if (inteiro[j]>inteiro[j+1]){
                int temp = inteiro[j];
                inteiro[j] = inteiro[j+1];
                inteiro[j+1] = temp;
            }
        }
    }
}

int main(int argc, char *arqv[]){

    int QTD;
    double media = 0.0;
    int *inteiro;
    int menor, maior;

    if (argc == 1 ){
        printf("Digite algum número!\n");
        return 1;
    }else{

        QTD = argc - 1;
        inteiro = (int *)malloc(QTD * sizeof(int));

        for(int i = 1 ; i < argc; i++){
            printf("%s ",arqv[i]);
            inteiro[i-1] = atoi(arqv[i]);
            media += inteiro[i-1];
        }

        media /= QTD;
        menor = maior = inteiro[0];

        for (int i = 1; i < QTD; i++) {
            if (menor > inteiro[i]) {
                menor = inteiro[i];
            }
            if (maior < inteiro[i]) {
                maior = inteiro[i];
            }
        }

        ordenarNumeros(inteiro, QTD);

        printf("\nNumeros recebidos: ");
        for (int i = 0; i < QTD; i++) {
            printf("%d ", inteiro[i]);
        }
        printf("\n");

        printf("QTD de numeros digitados: %d\n", QTD);
        printf("Media: %.1f\n", media);
        printf("Maior: %d\n", maior);
        printf("Menor: %d\n", menor);

        free(inteiro);
    }

    return 0;
}
