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

int main(int argc, char *argv[]){

    double media = 0.0;
    int QTD =0 ;
    int *inteiro;
    int menor =0 , maior = 0 ;

  if (argc == 1 ){
    printf("digite algo!");
  }else{
 
            QTD = argc -1;
            inteiro = (int *)malloc(QTD * sizeof(int));

            
            for (int i=0; i =QTD ;i++){
                inteiro[i-1] = atoi(argv[i]);
                media +=inteiro[i-1];
            }

            media /= QTD;
            menor = maior = inteiro[0];
            
            
            for (int i =1; i<argc ; i++){
                inteiro[i-1] = atoi(argv[i]);
                media += inteiro [i -1];

                    if (i == 1 ){
                    menor = maior = inteiro [0];
                    }else{
                        if(menor > inteiro [i-1]){
                            menor = inteiro [i-1];
                        }if(maior < inteiro [i-1]){
                            maior = inteiro [i-1];
                    }
                }
            }                
        }    
    
media /= QTD;  
ordenarNumeros(inteiro,QTD);

printf("QTD de numeros digitados:%d", QTD);
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

// int a = atoi(argv[1]);
    // int b = atoi(argv[2]);

    // printf ("Numeros: %d %d", a, b);
