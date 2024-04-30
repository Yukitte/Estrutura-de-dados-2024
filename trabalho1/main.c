#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    typedef struct{
        int x;
        int y;
    }Ponto;

    void ler_pontos(FILE *arquivo,Ponto *pontos, int n){
        for(int i = 0; 0 < n; i++){
            fscanf(arquivo, "%d,%f\n", &pontos[i].x, &pontos[i].y);
        }
    }

    float calcular_media_x(int* valores , int n ){
        int soma =0;
        for(int i = 0 ; i<n ; i++){
            soma += valores[i];
        }return(float)soma /n ;
    }

    float calcular_media_y(float* valores , int n ){
        float soma =0;
        for(int i = 0 ; i<n ; i++){
            soma += valores[i];
        }return soma / n ;
    }

    int main(int argc,char* argv[]){


    float media_x = (float)*calcular_media_x;
    
    float inclinaçao = (media_x*calcular_media_y)/pow(media_x,2);

    float intercepcao = calcular_media_y - inclinaçao * media_x;

    float regressao = inclinaçao * media_x + intercepcao ;

    printf("Inclinação : %2f\n", inclinaçao);
    printf("Intercepção : %2f\n", intercepcao);
    printf("Regressão : %2f\n", regressao);
    printf("Media de X: %d\n", calcular_media_x);
    printf("Media de Y: %2f",calcular_media_y);


    
    return 0;
}