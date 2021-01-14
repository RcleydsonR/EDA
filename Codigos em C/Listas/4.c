#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
}
celula;

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

int remove_depois (celula *p){
    celula *aux = p->prox;
        if(aux != NULL){
            p->prox = p->prox->prox;
            free(aux);
        }
}

void remove_elemento (celula *le, int x)
{
    celula *p;

    for(p = le; p->prox != NULL && p->prox->dado != x; p = p->prox);

        remove_depois (p);
}

void remove_todos_elementos(celula *le, int x){
    celula *novo = le;

    while(novo->prox != NULL){
        if(novo->prox->dado == x){
            remove_depois(novo);
        }
        else novo = novo->prox;

    }

}



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
    int x;
    le = inicializa ();
    while(scanf("%d", &x) != EOF){
        insere(x, le);
    }


    //remove_depois(le);
    //remove_elemento(le, 3);
    //remove_todos_elementos(le, 3);
    imprime(le);


    return 0;

}
