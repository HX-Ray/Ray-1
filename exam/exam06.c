#include<stdio.h>

void put(char c, int n)
{
	for(int i=0; i < n; i++)
		putchar(c);
}

void week(int c, int y, int m, int n)  //打印一个月的日历
{
	int w;
	int d=1;
	int tm = (y%400 == 0 || (y%4 == 0 && y%100 != 0))?(29):(28);  //因为二月时间由年份而定，max需要tm定义，所以定义在函数中
	int max[12]={31,tm,31,30,31,30,31,31,30,31,30,31};

	if (m == 13 || m==14)
		y -=1;

	y %= 100; //年的后两位

	w=(c/4-2*c+y+y/4+13*(m+1)/5+d-1)%7;

	put(' ', 1+4*w);
	for(int i=0; i<max[n]; i++){
		printf("%d", i+1);
		if ((w+1)%7 == 0){  //星期六 
			putchar('\n');
			putchar(' ');
		}
		else if (i <= 8){
			put(' ', 3);
		}else put(' ', 2);

		w++;
	}
	putchar('\n');

}

int main(void){

	int y;
	scanf("%d", &y);  //年

	int c = y / 100; //世纪-1
	
	int m[12]={13,14,3,4,5,6,7,8,9,10,11,12};

	char mona[12][4]={"Jun","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nev","Dec"};

	for(int i=0; i<12; i++){
		put('=', 12);
		for(int j=0; j<3; j++)
			putchar(mona[i][j]);
		put('=', 12);
		putchar('\n');

		puts("Sun Mon Tue Wed Thu Fri Sat");
		
		int yy = y;  //每次时年份不会改变，不然会递减
		week(c,yy,m[i],i);
	}

	putchar('\n');

        return 0;
}

