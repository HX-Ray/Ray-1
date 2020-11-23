#include <stdio.h>
int main(void){

	int a,b,c,max;

	printf("a=");scanf("%d",&a);
	printf("b=");scanf("%d",&b);
	printf("c=");scanf("%d",&c);

	max=a;
	if (b>max) max=b;
	if (c>max) max=c;
	if (max>(a+b+c)/2)
		printf("0");
	else{
	
	if(a==b&&b==c)
		printf("1");
	else if(a==b||b==c||c==a)
		printf("2");
	else printf("3");
	
	}

	printf("\n");

	return 0;
}
