#include <stdio.h>

int  f91(int v){
    if (v >= 101)
        return v-10;
    if (v <= 100)
        return f91(f91(v + 11));
}

int main(){
    int x[250000], i=0;
    scanf("%d", &x[i]);
    while (x[i] != 0){
        printf("f91(%d) = %d\n", x[i], f91(x[i]));
        i++;
        scanf("%d", &x[i]);
    }

    return 0;

}
