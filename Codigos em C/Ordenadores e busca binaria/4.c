#include <stdio.h>
#include <stdlib.h>
void ordena_insercao(int *v, int n){
    for(int i= 1; i<n; i++){
        int x = v[i];
        int j;
        for(j=i-1; j>=0 && v[j] > x; j--)
            v[j+1] = v[j];
        v[j+1] = x;
    }
}

int main(){
    int *v, i=0;
    v = malloc(1000*sizeof(int));
    while(scanf("%d", &v[i])!=EOF)
        i++;
    ordena_insercao(v, i);
    printf("%d", v[0]);
    for (int j=1; j<i; j++)
        printf(" %d", v[j]);
    printf("\n");
    return 0;
}
