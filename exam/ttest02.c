#include<stdio.h>

int main(void){

	int a,sum,c,i;
	printf("输入一个三位数：");
	scanf("%d",&a);
	c=a;

	for(i=0;i<3;i++){
		int b=a%10;
		a=a/10;
		sum+=b*b*b;
	}

	if(c==sum)
		puts("Y");
	else puts("N");

    	return 0;
}

