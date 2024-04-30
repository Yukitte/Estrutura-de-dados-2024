#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Ponto;

void ler_pontos(FILE *arquivo, Ponto *pontos, int n) {
    for (int i = 0; i < n; i++) {
        fscanf(arquivo, "%d,%d\n", &pontos[i].x, &pontos[i].y);
    }
}

float calcular_media_x(int* valores, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += valores[i];
    }
    return (float)soma / n;
}

float calcular_media_y(int* valores, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += valores[i];
    }
    return (float)soma / n;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Uso: %s arquivo.csv\n", argv[0]);
        return 1;
    }

    FILE *arquivo = fopen(argv[1], "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int n = 10; // Supondo que existam 10 pontos no arquivo
    Ponto *pontos = malloc(n * sizeof(Ponto));
    if (pontos == NULL) {
        printf("Erro ao alocar memória.\n");
        fclose(arquivo);
        return 1;
    }

    ler_pontos(arquivo, pontos, n);

    fclose(arquivo);

    float media_x = calcular_media_x(pontos->x, n);
    float media_y = calcular_media_y(pontos->y, n);

    float inclinacao = (media_x * media_y) / pow(media_x, 2);
    float intercepcao = media_y - inclinacao * media_x;
    float regressao = inclinacao * media_x + intercepcao;

    printf("A inclinacao e: %.2f\n", inclinacao);
    printf("A intercepcao e: %.2f\n", intercepcao);
    printf("A regressao e: %.2f\n", regressao);

    free(pontos);

    return 0;
}
