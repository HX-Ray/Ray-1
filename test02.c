#include <stdio.h>
int main(void){

	int a,b;

	printf("a=");scanf("%d",&a);
	printf("b=");scanf("%d",&b);

	switch(a<0||a>100||b<0||b>100){
	
		case 1:puts("it is error");break;
		default: switch(a>=60&&b>=60){
			 
				 case 1:puts("it is pass");break;
				 default:puts("it is not pass");break;

			 }       

	}

	printf("\n");

	return 0;
}
