#include<stdio.h>

int main(void){

	int y,m,d;
	int dd=0;
	
	scanf("%d/%d/%d", &y, &m, &d);
	
	if (m==3||m==5||m==7||m==8||m==10||m==12)
		dd += (m*31-(m-1)/2-2-31);
	else if (m==1)
		;
	else
		dd += (m*30+(m-1)/2-2-31);

	if (y%4==0 && m!=1)
		dd += 1;

	dd += d;

	printf("%d\n",dd);

	return 0;
}
