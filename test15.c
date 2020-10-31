#include<stdio.h>

int main(void){

	char a[100] = {0};
	int T;
	
	scanf("%d", &T);

	for (int i=0; i<T; i++)
                scanf("%d",&a[i]);

	for (int i=0; i<T; i++)
                printf("%c",a[i]);

	putchar('\n');

        return 0;
}
