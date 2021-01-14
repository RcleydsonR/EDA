#include <stdio.h>

char inverso(char *v){
    if (v[0] != '\0'){
    inverso(&v[1]);
    printf("%c", v[0]);
    }
}


int main(){
    char v[501];
    scanf(" %s", v);
    inverso(v);
    printf("\n");

    return 0;
}
