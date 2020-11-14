#include<stdio.h>

int main(void){

	double wei, mon=-1;
	scanf("%lf", &wei);
	
	if (wei <= 10 && wei >0 )
	{
		mon = wei * 0.8;
	}
	else if (wei > 10 && wei <= 20)
	{
		mon = wei * 0.75;
	}
	else  if (wei > 20 && wei <= 30)
	{
		mon = wei * 0.7;
	}
	else
	{
		printf("fail\n");
	}

	if (mon != -1)
		printf("%.2f\n", mon);

	return 0;
}

