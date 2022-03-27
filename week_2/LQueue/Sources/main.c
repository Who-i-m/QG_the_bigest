#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h"

int main(){
	int flag = 1;
	int flag_1 = 0;//用于判断队列是否初始化 
	LQueue L;
	
	while(flag){
		system("cls");
		printf("-------队列操作-------\n");
		printf("-----1.队列初始化-----\n");
		printf("-----2.队列判空-------\n");
		printf("-----3.得到队头-------\n");
		printf("-----4.清空队列-------\n");
		printf("-----5.销毁队列-------\n");
		printf("-----6.队列长度-------\n");
		printf("-----7.数据入队-------\n");
		printf("-----8.数据出队-------\n");
		printf("-----9.遍历队列-------\n"); 
		printf("-----0.退出操作-------\n");
		printf("请输入操作的对应数字：");
		int a;
		scanf("%d",&a);
		while(a<0||a>9){
			printf("\n输入不合法！\n请重新输入操作对应的数字：");
			fflush(stdin);//用于清除输scanf()缓冲区内的数据 
			scanf("%d",&a);
		} 
		switch(a){
			case 1:
				system("cls");
				printf("-------队列操作-------\n");
				printf("-----1.队列初始化-----\n");
				InitLQueue(&L);
				flag_1 = 1; //用于标记队列初始化成功 
				break;
			case 2:
				if(!flag_1){
					printf("未初始化队列！\n");
					break;
				}
				system("cls");
				printf("-------队列操作-------\n");
				printf("-----2.队列判空-------\n");
				if(IsEmptyLQueue(&L))
					printf("为空队列！\n");
				else 
					printf("不为空队列\n");
				break; 
			case 3:
				if(!flag_1){
					printf("未初始化队列！\n");
					break;
				}
				system("cls");
				printf("-------队列操作-------\n");
				printf("-----3.得到队头-------\n");
				void*e = NULL;
				GetHeadLQueue(&L,e);
				break; 
			case 4:
				if(!flag_1){
					printf("未初始化队头！\n");
					break;
				}
				system("cls");
				printf("-------队列操作-------\n");
				printf("-----4.清空队列-------\n");
				ClearLQueue(&L);
				printf("清空成功！");
				break; 
			case 5:
				if(!flag_1){
					printf("未初始化队列！\n");
					break;
				}
				system("cls");
				printf("-------队列操作-------\n");
				printf("-----5.销毁队列-------\n");
				DestoryLQueue(&L);
				printf("销毁成功！"); 
				flag_1 = 0; 
				break; 
			case 6:
				if(!flag_1){
					printf("未初始化队列！\n");
					break;
				}
				system("cls");
				printf("-------队列操作-------\n");
				printf("-----6.队列长度-------\n");
				int length;
				length = LengthLQueue(&L);
				printf("当前队列的长度：%d\n",length);
				break; 
			case 7:
				if(!flag_1){
					printf("未初始化队列！\n");
					break;
				}
				system("cls");
				printf("-------队列操作-------\n");
				printf("-----7.数据入队-------\n");
				int num = askType(); 						//askType函数用于询问入队数据类型，同时存储到datatype数组中的对应索引 
				printf("请输入需要入队的数据：");
				int tag = L.length;
				tag+=1;
				switch(num){
					case 0:{
						int a,status;
						status = scanf("%d",&a);
						while(!status){
							printf("\n非法输入！\n请重新输入：");
							fflush(stdin);//用于清除输scanf()缓冲区内的数据 
							status = scanf("%d",&a);
						}
						datatype[tag] = 'i';
						EnLQueue(&L,&a);
						break;
					}
						
					case 1:{
						char b[10];
						int status_1;
						status_1 = scanf("%s",b);
						while(!status_1){
							printf("\n非法输入！\n请重新输入：");
							fflush(stdin);//用于清除输scanf()缓冲区内的数据 
							status_1 = scanf("%s",b);
						}
						datatype[tag] = 'c';
						EnLQueue(&L,b);
						break;
					}
						
					case 2:{
						float e;
						int status_2;
						status_2 = scanf("f",&e);
						while(!status_2){
							printf("\n非法输入！\n请重新输入：");
							fflush(stdin);//用于清除输scanf()缓冲区内的数据 
							status_2 = scanf("%f",&e);
						}
						datatype[tag] = 'f'; 
						EnLQueue(&L,&e);
						break;
					}
						
				}
				printf("数据入队成功！\n");
				break; 
			case 8:
				if(!flag_1){
					printf("未初始化队！\n");
					break;
				}
				system("cls");
				printf("-------队列操作-------\n");
				printf("-----8.数据出队-------\n");
				DeLQueue(&L);
				break; 
			case 9:
				if(!flag_1){
					printf("未初始化队！\n");
					break;
				}
				system("cls");
				printf("-------队列操作-------\n");
				printf("-----9.遍历队列-------\n");
				TraverseLQueue(&L,&LPrint); 
			case 0:
				system("cls");
				printf("-------队列操作-------\n");
				printf("-----0.退出操作-------\n");
				flag = 0;
				break;  
		}
		system("pause");
	}
	printf("退出成功！");
	return 0;	
} 
