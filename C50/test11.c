#include<stdio.h>

int main(void){

	long int n,m;
	scanf("%ld", &n);
	scanf("%ld", &m);
	int a[n];

	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);

	for (int i=0; i<n-1; i++)
		for (int j=n-1; j>i; j--){
			int temp=a[j];
			if (a[j-1]<a[j]){
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}

	for (int i=0; i<m; i++)
		printf("%d ",a[i]);

	printf("\n");	

	return 0;
}

