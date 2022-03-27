#include <stdio.h>

/**
 *  @name        : int askType()
 *    @description : 询问入队数据类型，并返回对应数字 
 *    @param         ：NULL 
 *    @return         : int 
 *  @notice      : None
 */
int askType(){
	printf("请问你想入队的数据类型：\n");
	printf("0.int型\n1.char型\n2.float型\n");
	int num,status;
	status = scanf("%d",&num);
	while(!status||num<0||num>2){
		printf("非法输入！\n请重新输入：");
		fflush(stdin);							//预防非法输入 
		status = scanf("%d",&num);
	}
	return num; 
}
