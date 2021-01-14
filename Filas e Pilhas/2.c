#include <stdio.h>
#include <stdlib.h>

typedef struct pilha
{

    int dado;
    struct celula *prox;

} pilha ;

pilha *inicializa()
{
    pilha *p;
    p=malloc(sizeof(pilha));
    if (p == NULL)
        exit (EXIT_FAILURE);
    p->prox = NULL;
    return p;
}

void empilha (pilha *p, int x)
{
    pilha *novo = malloc(sizeof(pilha));
    if (novo == NULL)
        exit (EXIT_FAILURE);
    novo->dado = x;
    novo->prox = p->prox;
    p->prox = novo;
}

/*void empilha_final (pilha *p, int x)
{
    while(p->prox != NULL)
        p = p->prox;
    pilha *novo = malloc(sizeof(pilha));
    if (novo == NULL)
        exit (EXIT_FAILURE);
    novo->dado = x;
    novo->prox = p->prox;
    p->prox = novo;
}*/

int desempilha(pilha *p)
{
    pilha *lixo = p->prox;
    int dado = lixo->dado;
    p->prox = lixo->prox;
    free(lixo);
    return dado;
}

int main()
{
    int n;
    pilha *le, *aux;
    le = inicializa();
    aux = inicializa();
    scanf("%d", &n);
    for(int i = n; i >= 1; i--)
        empilha(le, i);

    for(int i = 1; i <= n/2; i++)
    {
        if ( i == 1)
        {
            printf("Cartas descartadas: %d", desempilha(le));
            empilha(aux, desempilha(le));
        }
        else
        {
            printf(", %d", desempilha(le));
            empilha(aux, desempilha(le));

        }
    }
    //printf("\nCarta restante: %d\n", desempilha(le));

    return 0;

}
