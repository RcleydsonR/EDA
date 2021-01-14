#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;
/*
celula *inicializa(){

    celula *novo = malloc(sizeof(celula));
    novo -> prox = NULL;
}

void insere(celula *le, int i){

	celula *nova = malloc(sizeof(celula));
	nova -> dado = i;
	nova -> prox = le -> prox;
	le -> prox = nova;

}

*/

celula *busca (celula *le, int x)
{
    celula *p;
    for(p = le -> prox; p != NULL && p->dado != x; p = p->prox)
        return p;
}

celula *busca_rec (celula *le, int x)
{
    if (le == NULL)
        return NULL;
    else if(le ->dado == x)
        return le;
    else
        return busca_rec(le->prox, x);
}

/*int main()
{
    celula *le;
    le = inicializa ();
    for(int i = 0; i <= 10; i++)
		insere(le, i);
    printf("%d \n", busca(le, 3));
    printf("%d \n", busca_rec(le, 4));

    return 0;
}*/

