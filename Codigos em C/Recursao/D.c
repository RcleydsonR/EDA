#include <stdio.h>
#include <stdlib.h>

int multiplo(char *v, int contador){
    int sum = 0;

    for(int i=0; i < strlen(v); i++)
        sum += v[i] - 48;

    if(sum < 9)
		return -1;

	else if(sum > 9)
	{
		char aux[1001] = {};
		sprintf(aux, "%d", sum);
		return multiplo(aux, contador + 1);
	}
    else
	return contador;
}



int main(){
    char x[1001];
    int aux = 0, i = 0;
    scanf(" %s", x);
    while(((int)x[0] - 48) != 0){
    printf("%s ", x);

    int degree = multiplo(x, 1);

    if (degree == -1)
        printf("is not a multiple of 9.\n");
    else
        printf("is a multiple of 9 and has 9-degree %d.\n", degree);

    scanf(" %s", x);
        }


    return 0;
}
