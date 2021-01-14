#include <stdio.h>
#include <stdlib.h>

void ordena(int *v, int n){
    for(int i= 1; i<n; i++){
        int x = v[i];
        int j;
        for(j=i-1; j>=0 && v[j] > x; j--)
            v[j+1] = v[j];
        v[j+1] = x;
    }
}

int busca_bin(int *aux, int *v, int n, int x)
{
    int e = -1;
    int d = n;
    int m;

    while(e < d - 1)
    {
        m = (d + e)/2;
        if(aux[m] == x)
        {
            for(int i = 0; i < n; i++){
                if(aux[m] == v[i])
                    return i;
            }
        }
        if(aux[m] < x)
            e = m;
        else
            d = m;
    }
    return -1;
}

int main()
{
    int N, M, dado, *v, *v_ord;
    scanf("%d %d", &N, &M);
    v = malloc(N * sizeof(int));
    v_ord = malloc(N * sizeof(int));
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &v[i]);
        v_ord[i]  = v[i];
    }

    ordena(v_ord, N);

    for(int i = 0; i < M; i++)
    {
        scanf("%d", &dado);
        printf("%d\n", busca_bin(v_ord, v, N, dado));
    }
    return 0;
}
