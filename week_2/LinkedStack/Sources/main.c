#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"
#include <windows.h>

int main(){
	int flag = 1;
	int flag_1 = 0;//�����ж���ջ�Ƿ��ʼ�� 
	LinkStack L;
	while(flag){
		system("cls");
		printf("-------��ջ����-------\n");
		printf("-----1.��ջ��ʼ��-----\n");
		printf("-----2.��ջ�п�-------\n");
		printf("-----3.�õ�ջ��-------\n");
		printf("-----4.�����ջ-------\n");
		printf("-----5.������ջ-------\n");
		printf("-----6.��ջ����-------\n");
		printf("-----7.������ջ-------\n");
		printf("-----8.���ݳ�ջ-------\n");
		printf("����������Ķ�Ӧ���֣�");
		int a;
		scanf("%d",&a);
		while(a<1||a>8){
			printf("\n���벻�Ϸ���\n���������������Ӧ�����֣�");
			fflush(stdin);//���������scanf()�������ڵ����� 
			scanf("%d",&a);
		} 
		switch(a){
			case 1:
				system("cls");
				printf("-------��ջ����-------\n");
				printf("-----1.��ջ��ʼ��-----\n");
				initLStack(&L);
				printf("��ʼ���ɹ���\n");
				flag_1 = 1;
				break;
			case 2:
				if(!flag_1){
					printf("δ��ʼ��ջ��\n");
					break;
				}
				system("cls");
				printf("-------��ջ����-------\n");
				printf("-----2.��ջ�п�-------\n");
				isEmptyLStack(&L);
				break; 
			case 3:
				if(!flag_1){
					printf("δ��ʼ��ջ��\n");
					break;
				}
				system("cls");
				printf("-------��ջ����-------\n");
				printf("-----3.�õ�ջ��-------\n");
				if(isEmptyLStack(&L)){
					break;
				}
				ElemType e;
				getTopLStack(&L,&e);
				printf("ջ�����ݣ�%d\n",e);
				break; 
			case 4:
				if(!flag_1){
					printf("δ��ʼ��ջ��\n");
					break;
				}
				system("cls");
				printf("-------��ջ����-------\n");
				printf("-----4.�����ջ-------\n");
				clearLStack(&L);
				printf("��ճɹ���");
				break; 
			case 5:
				if(!flag_1){
					printf("δ��ʼ��ջ��\n");
					break;
				}
				system("cls");
				printf("-------��ջ����-------\n");
				printf("-----5.������ջ-------\n");
				destroyLStack(&L);
				printf("���ٳɹ���"); 
				flag_1 = 0; 
				break; 
			case 6:
				if(!flag_1){
					printf("δ��ʼ��ջ��\n");
					break;
				}
				system("cls");
				printf("-------��ջ����-------\n");
				printf("-----6.��ջ����-------\n");
				int length;
				LStackLength(&L,&length);
				printf("��ǰ��ջ�ĳ��ȣ�%d\n",length);
				break; 
			case 7:
				if(!flag_1){
					printf("δ��ʼ��ջ��\n");
					break;
				}
				system("cls");
				printf("-------��ջ����-------\n");
				printf("-----7.������ջ-------\n");
				printf("��������Ҫ��ջ�����ݣ�");
				int num,status;
				status = scanf("%d",&num);
				while(!status){
					printf("\n�Ƿ����룡\n");
					fflush(stdin);//���������scanf()�������ڵ����� 
					printf("��������Ҫ��ջ�����ݣ�");
					status = scanf("%d",&num);
				} 
				pushLStack(&L,num);
				printf("������ջ�ɹ���\n");
				break; 
			case 8:
				if(!flag_1){
					printf("δ��ʼ��ջ��\n");
					break;
				}
				system("cls");
				printf("-------��ջ����-------\n");
				printf("-----8.���ݳ�ջ-------\n");
				int a; 
				popLStack(&L,&a);
				break; 
			case 9:
				system("cls");
				printf("-------��ջ����-------\n");
				printf("-----9.�˳�����-------\n");
				flag = 0;
				break;  
		}
		system("pause");
	}
	printf("�˳��ɹ���");
	return 0;	
}

