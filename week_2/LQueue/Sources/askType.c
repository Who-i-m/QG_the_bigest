#include <stdio.h>

/**
 *  @name        : int askType()
 *    @description : ѯ������������ͣ������ض�Ӧ���� 
 *    @param         ��NULL 
 *    @return         : int 
 *  @notice      : None
 */
int askType(){
	printf("����������ӵ��������ͣ�\n");
	printf("0.int��\n1.char��\n2.float��\n");
	int num,status;
	status = scanf("%d",&num);
	while(!status||num<0||num>2){
		printf("�Ƿ����룡\n���������룺");
		fflush(stdin);							//Ԥ���Ƿ����� 
		status = scanf("%d",&num);
	}
	return num; 
}
