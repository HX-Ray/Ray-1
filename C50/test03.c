#include <stdio.h>

#define m 5

int main(void){

	int i,j,k,n;
	n=m;
	k=0;

	for(;n>0;n-=2)
	{
		for(j=0;j<k;j++)
			putchar(' ');

		for(i=0;i<n;i++)
		{
			putchar('*');
		}
		putchar('\n');
		k++;
	}
	k-=2;
	n+=4;

	for(;n<=m;n+=2)
	{
		for(j=0;j<k;j++)
			putchar(' ');

		for(i=0;i<n;i++)
		{		
			putchar('*');
		}
		putchar('\n');
		k--;
	}

	return 0;
}
