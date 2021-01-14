#include <stdio.h>
int par(char *nome){
    if (nome[0] == '\0') return 0;
    if (nome[0] == nome[2]) return (1+par(++nome));
    return par(++nome);

}


int main(){
    char nome[201];
    int x;
    scanf(" %s", nome);
    x = par(nome);

    printf("%d\n", x);
    //printf("%c\n", *(nome+2));

    return 0;

}
