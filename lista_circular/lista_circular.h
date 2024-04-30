typedef struct No{
    char valor;
    struct No* proximo;
} No;   

No* no(char valor, No* proximo); 
void inserir(No* H, char valor);
void imprimir( No* H);

void remove_l(No* H, char valor);