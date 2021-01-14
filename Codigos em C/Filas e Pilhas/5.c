#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
    int *dados;
    int N, p, u;
    } fila;

int enfileira (fila *p, int x){
    if (p->u <= p->N ){
        if (p->u == p->N ){
        p->dados = realloc(p->dados, 2*p->N*sizeof(int));
        if (p->dados == NULL) exit(EXIT_FAILURE);
        p->N*=2;
        }
    p->dados[p->u] = x;
    p->u ++;
    return 1;
}
else return 0;
}
