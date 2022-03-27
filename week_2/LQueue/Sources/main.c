#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h"

int main(){
	int flag = 1;
	int flag_1 = 0;//�����ж϶����Ƿ��ʼ�� 
	LQueue L;
	
	while(flag){
		system("cls");
		printf("-------���в���-------\n");
		printf("-----1.���г�ʼ��-----\n");
		printf("-----2.�����п�-------\n");
		printf("-----3.�õ���ͷ-------\n");
		printf("-----4.��ն���-------\n");
		printf("-----5.���ٶ���-------\n");
		printf("-----6.���г���-------\n");
		printf("-----7.�������-------\n");
		printf("-----8.���ݳ���-------\n");
		printf("-----9.��������-------\n"); 
		printf("-----0.�˳�����-------\n");
		printf("����������Ķ�Ӧ���֣�");
		int a;
		scanf("%d",&a);
		while(a<0||a>9){
			printf("\n���벻�Ϸ���\n���������������Ӧ�����֣�");
			fflush(stdin);//���������scanf()�������ڵ����� 
			scanf("%d",&a);
		} 
		switch(a){
			case 1:
				system("cls");
				printf("-------���в���-------\n");
				printf("-----1.���г�ʼ��-----\n");
				InitLQueue(&L);
				flag_1 = 1; //���ڱ�Ƕ��г�ʼ���ɹ� 
				break;
			case 2:
				if(!flag_1){
					printf("δ��ʼ�����У�\n");
					break;
				}
				system("cls");
				printf("-------���в���-------\n");
				printf("-----2.�����п�-------\n");
				if(IsEmptyLQueue(&L))
					printf("Ϊ�ն��У�\n");
				else 
					printf("��Ϊ�ն���\n");
				break; 
			case 3:
				if(!flag_1){
					printf("δ��ʼ�����У�\n");
					break;
				}
				system("cls");
				printf("-------���в���-------\n");
				printf("-----3.�õ���ͷ-------\n");
				void*e = NULL;
				GetHeadLQueue(&L,e);
				break; 
			case 4:
				if(!flag_1){
					printf("δ��ʼ����ͷ��\n");
					break;
				}
				system("cls");
				printf("-------���в���-------\n");
				printf("-----4.��ն���-------\n");
				ClearLQueue(&L);
				printf("��ճɹ���");
				break; 
			case 5:
				if(!flag_1){
					printf("δ��ʼ�����У�\n");
					break;
				}
				system("cls");
				printf("-------���в���-------\n");
				printf("-----5.���ٶ���-------\n");
				DestoryLQueue(&L);
				printf("���ٳɹ���"); 
				flag_1 = 0; 
				break; 
			case 6:
				if(!flag_1){
					printf("δ��ʼ�����У�\n");
					break;
				}
				system("cls");
				printf("-------���в���-------\n");
				printf("-----6.���г���-------\n");
				int length;
				length = LengthLQueue(&L);
				printf("��ǰ���еĳ��ȣ�%d\n",length);
				break; 
			case 7:
				if(!flag_1){
					printf("δ��ʼ�����У�\n");
					break;
				}
				system("cls");
				printf("-------���в���-------\n");
				printf("-----7.�������-------\n");
				int num = askType(); 						//askType��������ѯ������������ͣ�ͬʱ�洢��datatype�����еĶ�Ӧ���� 
				printf("��������Ҫ��ӵ����ݣ�");
				int tag = L.length;
				tag+=1;
				switch(num){
					case 0:{
						int a,status;
						status = scanf("%d",&a);
						while(!status){
							printf("\n�Ƿ����룡\n���������룺");
							fflush(stdin);//���������scanf()�������ڵ����� 
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
							printf("\n�Ƿ����룡\n���������룺");
							fflush(stdin);//���������scanf()�������ڵ����� 
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
							printf("\n�Ƿ����룡\n���������룺");
							fflush(stdin);//���������scanf()�������ڵ����� 
							status_2 = scanf("%f",&e);
						}
						datatype[tag] = 'f'; 
						EnLQueue(&L,&e);
						break;
					}
						
				}
				printf("������ӳɹ���\n");
				break; 
			case 8:
				if(!flag_1){
					printf("δ��ʼ���ӣ�\n");
					break;
				}
				system("cls");
				printf("-------���в���-------\n");
				printf("-----8.���ݳ���-------\n");
				DeLQueue(&L);
				break; 
			case 9:
				if(!flag_1){
					printf("δ��ʼ���ӣ�\n");
					break;
				}
				system("cls");
				printf("-------���в���-------\n");
				printf("-----9.��������-------\n");
				TraverseLQueue(&L,&LPrint); 
			case 0:
				system("cls");
				printf("-------���в���-------\n");
				printf("-----0.�˳�����-------\n");
				flag = 0;
				break;  
		}
		system("pause");
	}
	printf("�˳��ɹ���");
	return 0;	
} 
