#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int *dados;
    int N, p, u;
} fila;

int enfileira (fila *f, int x){
int a, b;

if ((f->u+1) % f->N == f->p)
{
    f->dados = realloc (f->dados, 2 * f->N *sizeof (int));
    if (f == NULL)
        return 0;
    if (f->p > f->u)
    {
        if (f->N - f->p > f->u)
        {
            for (a = 0, b = f->N; a < f->u; a++, b++)
            {
                f->dados[b] = f->dados[a];
            }
            f->u = f->u+f->N;
        }
        else
        {
            for (a = f->N-1, b = 2 * f->N-1; a >= f->p; a--, b--)
            {
                f->dados[b] = f->dados[a];
            }
            f->p = b+1;
        }
    }
    f->N = 2 * f->N;
}
f->dados[f->u] = x;
f->u = (f->u+1)%f->N;
return 1;
}
