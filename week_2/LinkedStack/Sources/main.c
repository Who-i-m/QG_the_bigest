#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"
#include <windows.h>

int main(){
	int flag = 1;
	int flag_1 = 0;//用于判断链栈是否初始化 
	LinkStack L;
	while(flag){
		system("cls");
		printf("-------链栈操作-------\n");
		printf("-----1.链栈初始化-----\n");
		printf("-----2.链栈判空-------\n");
		printf("-----3.得到栈顶-------\n");
		printf("-----4.清空链栈-------\n");
		printf("-----5.销毁链栈-------\n");
		printf("-----6.链栈长度-------\n");
		printf("-----7.数据入栈-------\n");
		printf("-----8.数据出栈-------\n");
		printf("请输入操作的对应数字：");
		int a;
		scanf("%d",&a);
		while(a<1||a>8){
			printf("\n输入不合法！\n请重新输入操作对应的数字：");
			fflush(stdin);//用于清除输scanf()缓冲区内的数据 
			scanf("%d",&a);
		} 
		switch(a){
			case 1:
				system("cls");
				printf("-------链栈操作-------\n");
				printf("-----1.链栈初始化-----\n");
				initLStack(&L);
				printf("初始化成功！\n");
				flag_1 = 1;
				break;
			case 2:
				if(!flag_1){
					printf("未初始化栈！\n");
					break;
				}
				system("cls");
				printf("-------链栈操作-------\n");
				printf("-----2.链栈判空-------\n");
				isEmptyLStack(&L);
				break; 
			case 3:
				if(!flag_1){
					printf("未初始化栈！\n");
					break;
				}
				system("cls");
				printf("-------链栈操作-------\n");
				printf("-----3.得到栈顶-------\n");
				if(isEmptyLStack(&L)){
					break;
				}
				ElemType e;
				getTopLStack(&L,&e);
				printf("栈顶数据：%d\n",e);
				break; 
			case 4:
				if(!flag_1){
					printf("未初始化栈！\n");
					break;
				}
				system("cls");
				printf("-------链栈操作-------\n");
				printf("-----4.清空链栈-------\n");
				clearLStack(&L);
				printf("清空成功！");
				break; 
			case 5:
				if(!flag_1){
					printf("未初始化栈！\n");
					break;
				}
				system("cls");
				printf("-------链栈操作-------\n");
				printf("-----5.销毁链栈-------\n");
				destroyLStack(&L);
				printf("销毁成功！"); 
				flag_1 = 0; 
				break; 
			case 6:
				if(!flag_1){
					printf("未初始化栈！\n");
					break;
				}
				system("cls");
				printf("-------链栈操作-------\n");
				printf("-----6.链栈长度-------\n");
				int length;
				LStackLength(&L,&length);
				printf("当前链栈的长度：%d\n",length);
				break; 
			case 7:
				if(!flag_1){
					printf("未初始化栈！\n");
					break;
				}
				system("cls");
				printf("-------链栈操作-------\n");
				printf("-----7.数据入栈-------\n");
				printf("请输入需要入栈的数据：");
				int num,status;
				status = scanf("%d",&num);
				while(!status){
					printf("\n非法输入！\n");
					fflush(stdin);//用于清除输scanf()缓冲区内的数据 
					printf("请输入需要入栈的数据：");
					status = scanf("%d",&num);
				} 
				pushLStack(&L,num);
				printf("数据入栈成功！\n");
				break; 
			case 8:
				if(!flag_1){
					printf("未初始化栈！\n");
					break;
				}
				system("cls");
				printf("-------链栈操作-------\n");
				printf("-----8.数据出栈-------\n");
				int a; 
				popLStack(&L,&a);
				break; 
			case 9:
				system("cls");
				printf("-------链栈操作-------\n");
				printf("-----9.退出操作-------\n");
				flag = 0;
				break;  
		}
		system("pause");
	}
	printf("退出成功！");
	return 0;	
}

