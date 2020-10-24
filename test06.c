#include<stdio.h>

void ppp(int a[],int n){
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=n-1;j>i;j--)
		{
			if(a[j]*a[j]<a[j-1]*a[j-1]){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}


int main(void){
	
	int n,i;

	do{
		scanf("%d",&n);

		int a[n];

		for (i=0;i<n;i++)
			scanf("%d",&a[i]);

		ppp(a,n);

		for (i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");

	}while(n!=0);

    	return 0;
}
