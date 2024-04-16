typedef struct No{
 char valor;
 struct No* proximo;
} No;

No* no(char valor, No* proximo);    
void inserir(No* H, No* no);
void imprimir_lista(No* H);
int quantidade(No* H);
No* copiar_lista(No* H);
void(liberar(No* H));