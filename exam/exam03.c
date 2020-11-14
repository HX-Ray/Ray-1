#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int Val;
	struct node* Prev;
	struct node* Next;
}listNode;

listNode* receive(listNode* ptr, int n){
	for (int i=0; i < n; i++){
		listNode* node = (listNode*)malloc(sizeof(listNode));
		scanf("%d", &node->Val);
		node->Next = ptr;
		node->Prev = NULL;
		if (ptr != NULL) ptr->Prev = node;
		ptr = node;
	}
	return ptr;
}

int main(void){

	int n;
	scanf("%d", &n);

	listNode* ptr = NULL;
	ptr = receive(ptr, n);

	listNode* ptrb = ptr;
	for (int i = 0; i < n-1; i++ )
		ptrb = ptrb->Next;

	int flag=0;
	while(ptr->Val == ptrb->Val){
		ptr = ptr->Next;
		ptrb = ptrb->Prev;
		flag++;
		if (flag == n/2)
			break;
	}

	if (flag == n/2){
		puts("true");
	}else puts("false");

        return 0;
}
