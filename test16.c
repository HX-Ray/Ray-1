#include<stdio.h>

void yuan(char s[][100],int n){
	
	int m=0;
	int a[5]={0};

	while(s[n][m]){
		switch(s[n][m]){
			case 'a' : a[0]++; break;
			case 'e' : a[1]++; break;
			case 'i' : a[2]++; break;
			case 'o' : a[3]++; break;
			case 'u' : a[4]++; break;
		}
		m++;
	}

	printf("a:%d\n", a[0]);
	printf("e:%d\n", a[1]);
	printf("i:%d\n", a[2]);
	printf("o:%d\n", a[3]);
	printf("u:%d\n", a[4]);
}
	   

int main(void){

	int n;
	scanf("%d", &n);
	char s[n][100];

	for (int i=0; i < n; i++)
		scanf("%s", s[i]);

	for (int i=0; i < n; i++){
		
		yuan(s,i);

		if (i!=n-1)
			putchar('\n');
	}

        return 0;
}
