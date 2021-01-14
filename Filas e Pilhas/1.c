#include <stdio.h>
#include <stdlib.h>

/*typedef struct pilha{
    char *dados;
    int topo;
    int N;

}pilha;

void inicializa(pilha *p){
    p->N = 50;
    p->dados = malloc(p->N*sizeof(char));
    if (p->dados == NULL) exit(EXIT_FAILURE);
    p->topo = 0;
}

void empilha (pilha *p, char x){
        if (p->topo == p->N ){
        p->dados = realloc(p->dados, 2*p->N*sizeof(int));
        if (p->dados == NULL) exit(EXIT_FAILURE);
        p->N*=2;
        }
    p->dados[p->topo] = x;
    p->topo ++;
}

char desempilha(pilha *p)
{
    p->topo--;
    return p->dados[p->topo];
}*/

int main()
{
    int tam, conta_pares = 0;
    int *p_esq, *p_dir;
    char pe;

   p_esq = calloc(31, sizeof(int));
   p_dir = calloc(31, sizeof(int));

    while(scanf("%d %c", &tam, &pe)!=EOF)
    {
        if(pe == 'D')
            p_dir[tam-30] +=1;
        else
            p_esq[tam-30] +=1;
    }
    for (int i = 0; i <31; i++){
        if(p_esq[i] > 0 && p_dir[i] > 0){
            if(p_esq[i] < p_dir[i])
                conta_pares += p_esq[i];
            else
                conta_pares += p_dir[i];
        }

    }
        printf("%d\n", conta_pares);

    return 0;


}
