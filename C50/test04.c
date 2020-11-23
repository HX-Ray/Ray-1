#include<stdio.h>

int main(void){
	
	int a,b,max,min;

	printf("a=");scanf("%d",&a);
	printf("b=");scanf("%d",&b);

	max=(a>b)?a:b;
	min=(b<a)?b:a;
	a=max;
	b=min;

	while(1){
		int c;
		c=a%b;
		if(c==0){
			printf("%d",b);
			break;
		}
		a=b;
		b=c;
	}

	printf("\n");

	return 0;
}
