#include<stdio.h>
#include<stdlib.h>
#include"duLinkedList.h" 

int main(){
	DuLinkedList L = NULL;
	InitList_DuL(&L);//�����ʼ�� 
	char c = 'Y';
	while(c=='Y'||c=='y'){
		DuLinkedList p = (DuLinkedList)malloc(sizeof(DuLNode));
		printf("��������������:");
		scanf("%d",&p->data);
		InsertAfterList_DuL(L,p);
		printf("�Ƿ����������룿y/n\n"); 
		fflush(stdin);
		c = getchar();
		while((c != 'Y')&&(c != 'N')&&(c != 'y')&&(c != 'n')){
			printf("\n������Ĳ��Ϸ���\n����������:");
			fflush(stdin);
			c = getchar();
		}
	}
	
	TraverseList_DuL(L,&Visit);//�������������ʾ
/*	
	printf("\n��������Ҫɾ�������еĵ����ڼ���������");
	int position;
	scanf("%d",&position);
	DuLinkedList p = NULL;
	DuLinkedList q = L;
	int flag;
	int a;
	for(a = 1;a<=position;a++){
		if(q){
			q = q->next;
		}
		if(!q){
			printf("\n�����ڸ�������\n");
			flag = 0;
			break;
		}
		flag = 1;
	}
	if(flag == 1){
		ElemType e;
	 	DeleteList_DuL(q,&e);//ɾ���ڵ㲢�����ݴ���e 
	 	TraverseList_DuL(L,&Visit);//�������������ʾ
	}
*/	
	DestroyList_DuL(&L);//���������ͷ����нڵ� 
	return 0;
}
