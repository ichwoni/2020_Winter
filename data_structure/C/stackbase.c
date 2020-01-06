#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define STLEN 100

typedef int data;

typedef struct Stack{
	int top;
	data starr[STLEN];
}stack;

void initstack(stack* astack);
int isempty(stack* astack);
data Push();
data Pop();
data Peek();

void initstack(stack* astack){
	astack->top = -1;
}

int isempty(stack* astack){
	if(astack->top==-1){
		return TRUE;
	}
	else{
		return FALSE;
	}
}

data Push(stack* astack, data a){
	astack->top+=1;
	astack->starr[top]=data;
}

data Pop(stack* astack){
	if (isempty(astack)==1){
		printf("stack is empty now");
	}
	else{
		int tmtop = astack->top;
		astack->top-=1;
	
		//원래 top 위치에 있던 애는 삭제 안해도 되나?
	
		return astack->starr[tmtop];
	}
}

data Peek(stack* astack){
	if (isempty(astack)==1)
		printf("stack is empty now");
	else
		return astack->starr[top];
}


