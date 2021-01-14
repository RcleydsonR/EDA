#include <stdlib.h>


typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula *enfileira(celula *p, int x)
{
    celula *novo = malloc(sizeof(celula));
    if (novo == NULL) exit(EXIT_FAILURE);
    else
    novo->prox = p->prox;
    p->prox = novo;
    p->dado = x;
    return novo;
}
