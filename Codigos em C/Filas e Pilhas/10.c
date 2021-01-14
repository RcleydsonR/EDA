#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{

    int dado;
    struct celula *prox;

} celula ;

int desenfileira(celula *p, int *y)
{
    if (p->prox == NULL)
    {
        return 0;
    }
    else
    {
        celula *lixo = p->prox;
        *y = lixo->dado;
        p->prox = lixo->prox;
        free(lixo);
        return 1;
    }
}
