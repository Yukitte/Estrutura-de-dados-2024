#include <stdio.h>
#include <stdlib.h>

void ordenarNumeros(int *inteiro, int QTD){
    for (int i =0; i <QTD -1; i++){
        for (int j =0;j<QTD-i -1 ;j++){
            if (inteiro[j]>inteiro[j+1]){
                int temp = inteiro[j];
                inteiro[j] = inteiro[j+1];
                inteiro[j+1] = temp;
            }
        }
    }
}

int main(int argc, char *arqv[]){



  if (argc == 1 ){
    printf("digite algo!");
  }else{
    printf("Numeros recebidos : ");
    
    for(int i =1 ; i < argc; i++){
        printf("%s ",arqv[i]);

            int QTD = argc -1;
            int *inteiro = (int *)malloc(QTD * sizeof(int));

            double media = 0.0;
            for (int i=0; i =QTD ;i++){
                media +=inteiro[i];
            }
            media /=QTD;

            int menor = inteiro[0];
            int maior = inteiro[0];
            
            for (int i =1; i<argc ; i++){
                inteiro[i-1] = atoi(arqv[i]);
                media += inteiro [i -1];

                    if (i == 1 ){
                    menor = maior = inteiro [i-1];
                    }else{
                        if(menor > inteiro [i-1]){
                            menor = inteiro [i-1];
                        }if(maior < inteiro [i-1]){
                            maior = inteiro [i-1];
                    }
                }
            }                
        }    
    }
media /= QTD;  
ordenarNumeros(inteiro,QTD);

printf("QTD de numeros digitados:%d",QTD);
printf("Media: %.1f\n",media);
printf("Maior: %d",maior );
printf("Menor: %d",menor );
printf("Ordem crescente: ");
for (int i = 0; i<QTD; i++){
    printf("%d",inteiro [i]);
}
printf("\n");

free(inteiro);

    return 0;
} 

// int a = atoi(arqv[1]);
    // int b = atoi(arqv[2]);

    // printf ("Numeros: %d %d", a, b);
