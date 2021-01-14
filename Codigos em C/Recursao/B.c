#include <stdio.h>

long long long int sum(long long long int n){
    if ( n == 0) return 0;
    else{
        return n%10 + sum(n/10);
    }
}

int main(){
    long long long int x;
    scanf("%llld", &x);

    printf("%llld\n", sum(x));

    return 0;
}
