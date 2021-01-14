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

}*/

void mescla_listas (celula *l1, celula *l2, celula *l3)
{
  celula *p1 = l1->prox;
  celula *p2 = l2->prox;
  celula *p3 = l3;
  celula *aux;

  while (p1 != NULL && p2 != NULL) {
    if (p1->dado < p2->dado) {
      aux = p1->prox;
      p1->prox = p3->prox;
      p3->prox = p1;
      p1 = aux;
    }
    else {
      aux = p2->prox;
      p2->prox = p3->prox;
      p3->prox = p2;
      p2 = aux;
    }
    p3 = p3->prox;
  }

  if (p1 == NULL)
    p3->prox = p2;
  else
    p3->prox = p1;
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
    celula *le, *le1, *le2;
    int x;
    le = inicializa ();
    le1 = inicializa ();
    le2 = inicializa ();
    while(scanf("%d", &x) != EOF){
        insere(x, le);
    }
    while(scanf("%d", &x) != EOF){
        insere(x, le1);
    }
    mescla_listas(le, le1, le2);

    imprime(le2);


    return 0;

}*/
