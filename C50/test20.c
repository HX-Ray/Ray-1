#include<stdio.h>

int u(int t){
	int z=-1;
	for (int i=0; i < t; i++)
		z *= z;
	return z;
}

double sum(int n){
	if (n == 1){
		return 1;
	}
	else{
		return u(-1)*(1/(double)n)+sum(n-1);
	}
}

int main(void){

	int m;
	scanf("%d", &m);
	int a[m];

	for (int i=0; i<m; i++)
                scanf("%d", &a[i]);

	for (int i=0; i<m; i++)
                printf("%f\n", sum(a[i]));

        return 0;
}
