#include <stdio.h>

void regua(int x){
    if ( x == 0) return;
    else{
        regua(x-1);
        printf(".");
        for (int i = 0; i < x; i++)
            printf("-");
        printf("\n");
        regua(x-1);
    }
}

int main(){
    int x;
    scanf("%d", &x);
    regua(x);

    return 0;
}
