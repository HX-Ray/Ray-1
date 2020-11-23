#include<stdio.h>

int main(void){

	int n,s=1;
	scanf("%d",&n);
	int a[n];

	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);

		if (a[i]%2==1)
			s *= a[i];
	}

	printf("%d\n",s);

    	return 0;
}
