#include<stdio.h>

int main(void){
	
	int a,i;
	int m,n;

	scanf("%d", &m);
	scanf("%d", &n);

	for(a=m;a<=n;a++){
		for(i=2;i<=a;i++){
			if(i==a){
				printf("%d ",a);
			}
			else if(a%i==0){
				break;
			}
		}
	}

	printf("\n");

    	return 0;
}
