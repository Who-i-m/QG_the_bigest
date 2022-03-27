/***************************************************************************************
 *	File Name				:	duLinkedList.h
 *	CopyRight				:	2022 QG Studio
 *	SYSTEM					:   win10
 *	Create Data				:	2022/3/26 
 *
 *
 *--------------------------------Revision History--------------------------------------
 *	No	version		Data			Revised By			Item			Description
 *
 *
 ***************************************************************************************/

/**************************************************************
*	Multi-Include-Prevent Section
**************************************************************/

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

/**************************************************************
*	Struct Define Section
**************************************************************/

// define status
typedef enum Status 
{
    ERROR = 0, 
	SUCCESS = 1
} Status;


// define element type
typedef int ElemType;

// define struct of the StackNode of LinkStack 
typedef  struct StackNode//栈节点 
{
	ElemType data;
	struct StackNode *next;
}StackNode, *LinkStackPtr;

// define struct of LinkStack 
typedef  struct  LinkStack
{
	LinkStackPtr top;
	int	count;
}LinkStack;

/**************************************************************
*	Prototype Declare Section
**************************************************************/

/**
 *  @name        : Status initLStack(LinkStack *s)
 *	@description : 初始化栈
 *	@param		 : s(栈底)
 *	@return		 : Status
 *  @notice      : None
 */
Status initLStack(LinkStack *s);

/**
 *  @name        : Status isEmptyLStack(LinkStack *s)
 *	@description : 判断栈是否为空
 *	@param		 : s(栈底)
 *	@return		 : Status
 *  @notice      : None
 */
Status isEmptyLStack(LinkStack *s);

/**
 *  @name        : Status getTopLStack(LinkStack *s,ElemType *e)
 *	@description : 得到栈顶元素
 *	@param		 : s(栈底),e(栈顶数据） 
 *	@return		 : Status
 *  @notice      : None
 */
Status getTopLStack(LinkStack *s,ElemType *e);

/**
 *  @name        : Status clearLStack(LinkStack *s)
 *	@description : 清空栈
 *	@param		 : s(栈底)
 *	@return		 : Status
 *  @notice      : None
 */
Status clearLStack(LinkStack *s);

/**
 *  @name        : Status destroyLStack(LinkStack *s)
 *	@description : 销毁栈
 *	@param		 : s(栈底)
 *	@return		 : Status
 *  @notice      : None
 */
Status destroyLStack(LinkStack *s);

/**
 *  @name        : Status LStackLength(LinkStack *s,int *length)
 *	@description : 检测栈长度
 *	@param		 : s(栈底)，length（栈的长度） 
 *	@return		 : Status
 *  @notice      : None
 */
Status LStackLength(LinkStack *s,int *length);

/**
 *  @name        : Status pushLStack(LinkStack *s,ElemType data)
 *	@description : 入栈
 *	@param		 : s(栈底)，data（入栈数据） 
 *	@return		 : Status
 *  @notice      : None
 */
Status pushLStack(LinkStack *s,ElemType data);

/**
 *  @name        : Status popLStack(LinkStack *s,ElemType *data)
 *	@description : 出栈
 *	@param		 : s(栈底)，data（出栈数据） 
 *	@return		 : Status
 *  @notice      : None
 */
Status popLStack(LinkStack *s,ElemType *data);


#endif 
