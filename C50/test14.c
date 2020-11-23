#include<stdio.h>

int main(void){

	int n, min, I;
	scanf("%d", &n);
	int a[n];

	for (int i=0; i<n; i++)
                scanf("%d", &a[i]);

	min=a[0];
	I=0;
	for (int i=0; i<n; i++)
		if (a[i]<min){
			min=a[i];
			I=i;
		}

	int temp=a[I];
	a[I]=a[0];
	a[0]=temp;

	for (int i=0; i<n; i++)
                printf("%d ", a[i]);

	printf("\n");

	return 0;
}

