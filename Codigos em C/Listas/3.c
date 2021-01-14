#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
}
celula;
/*
celula *inicializa()
{
    celula *novo = malloc(sizeof(celula));
    novo -> prox = NULL;

}

void insere( int i, celula *le)
{
    celula *nova =  malloc(sizeof(celula));
    nova->dado = i;
    nova->prox =le->prox;
    le->prox = nova;

}
*/

void insere_inicio (celula *le, int x)
{
    celula *novo = malloc (sizeof (celula));
    if (novo == NULL)
        exit (EXIT_FAILURE);
    novo->dado = x;
    novo->prox = le->prox;
    le->prox = novo;
}

void insere_antes (celula *le, int x, int y)
{
    celula *nova, *p;
    for (nova = le; nova->prox != NULL && nova->prox->dado != y; nova = nova->prox);
    p = malloc(sizeof(celula));
    p->dado = x;
    p->prox = nova->prox;
    nova->prox = p;

}

/*
void imprime (celula *le)
{
    for(celula *p = le->prox; p != NULL; p = p->prox)
    {
        printf("%d -> ", p->dado);
    }
    printf("NULL\n");
}

int main ()
{
    celula *le;
    le = inicializa ();
    for(int i = 0; i <= 8; i++)
        insere(i, le);
    insere_inicio(le, 10);
    insere_antes(le, 8, 4);

    imprime(le);

    return 0;

}*/
