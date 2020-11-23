#include<stdio.h>

int main(void){

	long int a[10][3]={0};
	int T, m=1;
	
	scanf("%d", &T);

	if(T>10)
		T=10;

	for (int i=0; i<T; i++)
		for (int j=0; j<3; j++)
			scanf("%d", &a[i][j]);

	for (int i=0; i<T; i++)
		if (a[i][0]+a[i][1] > a[i][2])
			printf("Case %d: ture\n", m++);
		else    printf("Case %d: false\n", m++);

	return 0;
}

