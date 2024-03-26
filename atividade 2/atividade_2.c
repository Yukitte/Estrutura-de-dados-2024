#include <stdio.h>
#include <stdlib.h>

int main (int argc, int *argv[]){

    int primo , i;
    int numero;
    // int numero = atoi(argv[-1]);

    for(i=2; i <= numero /2;i++ ){
        if (numero % i ==0){
            primo ++;
            break;
        }
    }

    if (numero==primo){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}
