#include<stdio.h>
#include<stdlib.h>
#include"duLinkedList.h" 

int main(){
	DuLinkedList L = NULL;
	InitList_DuL(&L);//链表初始化 
	char c = 'Y';
	while(c=='Y'||c=='y'){
		DuLinkedList p = (DuLinkedList)malloc(sizeof(DuLNode));
		printf("请对链表向后输入:");
		scanf("%d",&p->data);
		InsertAfterList_DuL(L,p);
		printf("是否继续向后输入？y/n\n"); 
		fflush(stdin);
		c = getchar();
		while((c != 'Y')&&(c != 'N')&&(c != 'y')&&(c != 'n')){
			printf("\n您输入的不合法！\n请重新输入:");
			fflush(stdin);
			c = getchar();
		}
	}
	
	TraverseList_DuL(L,&Visit);//遍历链表并输出显示
/*	
	printf("\n输入你想要删除链表中的倒数第几个索引：");
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
			printf("\n不存在该索引！\n");
			flag = 0;
			break;
		}
		flag = 1;
	}
	if(flag == 1){
		ElemType e;
	 	DeleteList_DuL(q,&e);//删除节点并把数据传给e 
	 	TraverseList_DuL(L,&Visit);//遍历链表并输出显示
	}
*/	
	DestroyList_DuL(&L);//销毁链表，释放所有节点 
	return 0;
}
