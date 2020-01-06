#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define STLEN 100

typedef int data;

typedef struct Stack{
	int end;
	data starr[STLEN];
}stack;

void initstack(stack* astack);
int isempty(stack* astack);
data Push();
data Pop();
data Peek();

void initstack(stack* astack){
	astack->end = -1;
}

int isempty(stack* astack){
	if(astack->end==-1){
		return TRUE;
	}
	else{
		return FALSE;
	}
}

data Push(stack* astack, data a){
	astack->end+=1;
	astack->starr[astack->end]=a;
}

data Pop(stack* astack){
	if (isempty(astack)==1){
		printf("stack is empty now");
		exit(1);
	}
	else{
		int tmpend = astack->end;
		astack->end-=1;
		return astack->starr[tmpend];
	}
}

data Peek(stack* astack){
	if (isempty(astack)==1){
		printf("stack is empty now");
		exit(1);
	}
	else
		return astack->starr[astack->end];
}


