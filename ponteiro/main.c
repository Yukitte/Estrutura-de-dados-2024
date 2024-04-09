#include<stdio.h>
#include<stdlib.h>

typedef struct Pont{
    int x;
    int y;
}Ponto;

int main(int argc,char*argv[] ){
    
    int a =2;
    int b = a;
    int *p;

    printf("a = %d\t b= %d\n", a , b);
    printf("&a = %p\t &b+ %p\n", &a , &b);    

    a =3;
    printf("a = %d\t b= %d\n", a , b);
    printf("&a = %p\t &b+ %p\n", &a , &b);   

    printf("&p = %p \t p = %p \t *p = %d \n", &p , p , *p);

    p=malloc (sizeof(int));
    *p = 3; 

    printf("&p = %p \t p = %p \t *p = %d \n", &p , p , *p);

// ---------------------------------------------------------------
    Ponto A;
    A.x =4;
    A.y =9;

    printf("A(%d,%d)\n",A.x , A.y);


    exit(0);
}           