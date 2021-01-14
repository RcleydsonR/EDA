#include <stdio.h>

int a, b;
long long int raios[100001];

int busca_bin(long long int num){


    int i = 1;
	int f = a;

    if(num > raios[a])
        return 0;

	while(i < f)
	{
		int meio = (i+f)/2;

		if(raios[meio] >= num)
		{
			f = meio;
		}
		else
		{
			i = meio+1;
		}
	}
	return a+1-f;
}
int main(){

    long long int aux = 0;
    scanf("%d %d", &a, &b);
	for(int i = 1; i <= a; i++)
	{
		scanf("%lld", &raios[i]);
        raios[i] *= raios[i];
	}
	for(int i = 1; i <= b; i++)
	{
		long long int x, y;
		scanf("%lld %lld", &x, &y);
		aux += busca_bin(x*x+y*y);
	}
	printf("%lld\n", aux);
	return 0;
}
