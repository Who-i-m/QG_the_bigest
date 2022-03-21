#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h" 

int main(){
	LinkedList L = NULL;
	DestroyList(&L);//销毁链表，释放所有节点
	InitList(&L);
	char c = 'Y';
	while(c=='Y'||c=='y'){
		LinkedList p = (LinkedList)malloc(sizeof(LNode));
		printf("请对链表输入:");
		scanf("%d",&p->data);
		InsertList(L,p);
		printf("是否继续输入？y/n\n"); 
		fflush(stdin);
		c = getchar();
		while((c != 'Y')&&(c != 'N')&&(c != 'y')&&(c != 'n')){
			printf("\n您输入的不合法！\n请重新输入:");
			fflush(stdin);
			c = getchar();
		}
	}
	
	TraverseList(L,&Visit);//遍历链表并输出显示
	
	printf("\n判断链表是否为循环链表：\n");
	IsLoopList(L);//判断 是否为循环链表 
	 
	ElemType e;
	printf("输入你想要搜索的数字在链表中的第一次出现的位置 ："); 
	scanf("%d",&e);
	SearchList(L,e);//查找 第一个出现用户输入的数字在链表中的节点位置 
	
	printf("\n链表的中间节点所在地址：%p",FindMidNode(&L));//查找链表中间节点的地址值 
	
	
	printf("\n反转链表结果如下：\n");
	ReverseList(&L);//对链表进行反转处理 
	TraverseList(L,&Visit);
	
	DestroyList(&L);//销毁链表，释放所有节点 
	return 0;
}
