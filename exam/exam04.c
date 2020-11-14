#include<stdio.h>

typedef struct{
	int StuId;
	int Score;
}student;

void getInfo(student* ptr, int n)
{
	ptr->StuId = n;
}

void scoreSort(student* ptr, int n)
{
	ptr->Score = n;
}

void outputAsc(student* ptr, int n)
{
	student temp;
	for (int i=0; i<n; i++){
		for (int j=n-1; j>i; j--){
			if (ptr[j].Score < ptr[j-1].Score){
				temp = ptr[j];
				ptr[j] = ptr[j-1];
				ptr[j-1] = temp;
			}
		}
	}

	for (int i=0; i<n; i++){
		printf("%d  %d\n", ptr[i].StuId, ptr[i].Score);
	}
}

void outputDesc(student* ptr, int n)
{
	student temp;
	for (int i=0; i<n; i++){
		for (int j=n-1; j>i; j--){
			if (ptr[j].Score > ptr[j-1].Score){
				temp = ptr[j];
				ptr[j] = ptr[j-1];
				ptr[j-1] = temp;
			}
		}
	}

	for (int i=0; i<n; i++){
		printf("%d  %d\n", ptr[i].StuId, ptr[i].Score);
	}
}


int main(void){

	int t;
	scanf("%d", &t);
	student a[t];

	for (int i=0; i<t; i++)
	{
		int m, n;
		scanf("%d", &m);
		scanf("%d", &n);

		getInfo(&a[i], m);
		scoreSort(&a[i], n);
	}

	putchar('\n');
	outputAsc(a, t);
	putchar('\n');
	outputDesc(a, t);

        return 0;
}

