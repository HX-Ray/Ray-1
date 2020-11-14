#include<stdio.h>
//#include<stdlib.h>

int MyAtoi(const char* c)
{
	int i=0;
	int n=0;
	int flag=1;

	while(c[i])
	{
		if (c[i] >= '0' && c[i] <= '9')
		{
			n = n * 10;
			n += (c[i] - '0');
		}
		else if (c[i] == '-')
		{
			flag *= -1;
		}
		else if (n != 0 || (c[1] <= '0' ||c[1] >= '9') )
			break;

		i++;
	}

	return n*flag;
}

int main(void){

	char a[128];
	scanf("%s", a);
	int b;
	
	b=MyAtoi(a);
	printf("%d\n",b);

        return 0;
}

