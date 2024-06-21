#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    float y;
} Ponto;

void ler_pontos(FILE *arquivo, Ponto *pontos, int n) {
    for (int i = 0; i < n; i++) {
        fscanf(arquivo, "%d,%f\n", &pontos[i].x, &pontos[i].y);
    }
}

float calcular_media_x(Ponto *pontos, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += pontos[i].x;
    }
    return (float)soma / n;
}

float calcular_media_y(Ponto *pontos, int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += pontos[i].y;
    }
    return soma / n;
}

int main(int argc, char *argv[]) {
    // Verifica se o número de argumentos está correto
    if (argc != 2) {
        printf("Uso: %s arquivo_de_entrada\n", argv[0]);
        return 1;
    }

    FILE *arquivo = fopen(argv[1], "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int n;
    fscanf(arquivo, "%d\n", &n);

    Ponto *pontos = (Ponto *)malloc(n * sizeof(Ponto));
    if (pontos == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    ler_pontos(arquivo, pontos, n);
    fclose(arquivo);

    float media_x = calcular_media_x(pontos, n);
    float media_y = calcular_media_y(pontos, n);
    
    float soma_xy = 0;
    float soma_x_quadrado = 0;
    for (int i = 0; i < n; i++) {
        soma_xy += pontos[i].x * pontos[i].y;
        soma_x_quadrado += pontos[i].x * pontos[i].x;
    }

    float inclinacao = (n * soma_xy - soma_x_quadrado * media_x * media_y) / (n * soma_x_quadrado - soma_x_quadrado * media_x * media_x);
    float interceptacao = media_y - inclinacao * media_x;

    printf("Inclinação: %f\n", inclinacao);
    printf("Interceptação: %f\n", interceptacao);
    printf("Equação de regressão: y = %.2fx + %.2f\n", inclinacao, interceptacao);

    free(pontos);
    return 0;
}
