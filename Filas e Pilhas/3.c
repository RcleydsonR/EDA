#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
  int *dados;
  int topo, N;
} pilha;

void inicializa(pilha *p, int n){
    p->dados = malloc(n * sizeof(int));
    if(p == NULL)
        exit(EXIT_FAILURE);
    p->topo = 0;
}

void empilha (pilha *p, int x){
    p->dados[p->topo] = x;
    p->topo++;
}

int desempilha (pilha *p){
    p->topo--;
    return p->dados[p->topo];
}

void enfileira(pilha *p){
    int u = p->dados[p->topo - 1];
    for(int i = p->topo; i > 0; i--){
        p->dados[i] = p->dados[i-1];
    }
    p->dados[0] = u;
}

int main(){

    int tam;
    scanf("%d", &tam);

    pilha *p = malloc(sizeof(pilha));
    inicializa(p, tam);
    int *lixo = malloc(tam * sizeof(int));


	for(int i = tam; i > 0; i--)
        empilha(p, i);

    for(int i = 0, j = tam; j > 1; i++, j--){
	    lixo[i] = desempilha(p);
        enfileira(p);
    }

    printf("Cartas descartadas:");
    for(int i = 0; i < tam - 2; i++)
            printf(" %d,", lixo[i]);
    printf(" %d\n", lixo[tam - 2]);
    printf("Carta restante: %d\n", p->dados[0]);


    return 0;
}
