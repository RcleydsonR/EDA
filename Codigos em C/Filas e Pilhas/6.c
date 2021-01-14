#include <stdio.h>
#include <stdlib.h>

typedef struct pilha
{
    int *dados;
    int N, p, u;
} fila;

int desenfileira (fila *f, int *y)
{
    if (f->p != f->u)
    {
        *y = f->dados[f->p];
        f->p ++;
        return 1;
    }
    else
        return 0;
}

