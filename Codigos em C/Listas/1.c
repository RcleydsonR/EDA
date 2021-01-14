#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

/*celula *inicializa(){

    celula *novo = malloc(sizeof(celula));
    novo -> prox = NULL;
}

void insere(celula *le, int i){

	celula *nova = malloc(sizeof(celula));
	nova -> dado = i;
	nova -> prox = le -> prox;
	le -> prox = nova;

}*/


void imprime (celula *le)
{
    for(celula *p = le -> prox; p != NULL; p = p->prox){
        printf("%d -> ", p->dado);
    }
    printf("NULL\n");
}

void imprime_rec (celula *le)
{
    if (le->prox == NULL){
        printf ("NULL\n");
        return ;
    }
    else
    {
        printf("%d -> ", le->prox->dado);
        return imprime_rec (le->prox);
    }


}

/*int main()
{
    celula *le;
    le = inicializa ();
    for(int i = 0; i <= 5; i++)
		insere(le, i);
    imprime(le);
    imprime_rec (le);

    return 0;
}*/


