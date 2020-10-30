#include<stdio.h>

int main(void){

	int n, m, sum;
	scanf("%d", &n);
	scanf("%d", &m);
	int a[n][m];
	double b[n],c[m];

	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			scanf("%d", &a[i][j]);


	for (int i=0; i<n; i++){
		sum = 0;
		for (int j=0; j<m; j++)
			sum += a[i][j];
		b[i] = (double)sum/m;
	}
	
	for (int i=0; i<m; i++){
		sum = 0;
		for (int j=0; j<n; j++)
			sum += a[j][i];
		c[i] = (double)sum/n;
	}


	for (int i=0; i<n; i++)
		printf("%f ", b[i]);
	printf("\n");
	

	for (int i=0; i<m; i++)
		printf("%f ", c[i]);
	printf("\n");
	

	return 0;

}
