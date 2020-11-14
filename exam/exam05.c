#include<stdio.h>

int main(void){

	int n, i=0;
	scanf("%d", &n);

	while (n != 1){
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = n*3 + 1;
		}
		i++;
	}

	printf("%d\n", i);

        return 0;
}

