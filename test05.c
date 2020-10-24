#include<stdio.h>
#define n 100

int main(void){
	
	int a,i;

	printf("%d ",2);

	for(a=1;a<=n;a++){
		for(i=2;i<a;i++){
			if(a%i==0)
				break;
			else if(i==(a-1))
				printf("%d ",a);
		}
	}

	printf("\n");

    	return 0;
}
