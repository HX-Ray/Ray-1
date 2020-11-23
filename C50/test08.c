#include<stdio.h>

int main(void){

	int n, sum=0, max, min;
	scanf("%d", &n);
	int a[n];

	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		sum += a[i];
	}

	max = a[0];
	min = a[0];

	for(int i=0; i<n; i++){
		if (a[i]>max)
			max = a[i];
		if (a[i]<min)
			min = a[i];
	}

	sum = sum-max-min;

	printf("%f\n",(double)sum/(n-2));

   	 return 0;
}
