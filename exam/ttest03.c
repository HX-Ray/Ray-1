#include<stdio.h>

int main(void){

	int s=0;
	int i;
	int m=1;
	char a[128];
	scanf("%s",a);

	while(a[s]){
		s++;
	}

	putchar(a[0]);

	for(i=1;i<s;i++){
	
		if(a[i]==a[i-1])
			m++;
		else {	
			printf("%d",m);
			m=1;
			putchar(a[i]);
		}

	}

	printf("%d",m);

	putchar('\n');

    	return 0;
}

