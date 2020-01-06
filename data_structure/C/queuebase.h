#include <stdio.h>
#include <stdlib.h>
#define QULEN 100
#define TRUE 1
#define FALSE 0
//rear �������� �����ϸ� ����
//front 0, rear 0���� �����ؼ�rear�� ī��Ʈ ��� ����
//��ť�� ������ front�� ��� ������ ���� ����(rear ����) -> rear�� front�� �������� ť�� �� ��
//rear�� ���� �ε����� front�� �Ǵ� ����(�ϳ� ���� �� ä���� ����)�� ť�� �� �� �� 

typedef int Data;

typedef struct QUEUE{
	int front;
	int rear;
	Data qarr[QULEN];
}queue;

void initqueue(queue* qq);
int qisempty(queue* qq);
int nextidx(int idx);

Data enqueue(queue* qq, Data data);
Data dequeue(queue* qq);
Data qpeek(queue* qq);

int nextidx(int idx){
	if (idx==QULEN-1)
		return 0;
	else
		return idx+1;
} 

void initqueue(queue* qq){
	qq->front=0;
	qq->rear=0;
}

int qisempty(queue* qq){
	if(qq->front==qq->rear)
		return TRUE;
	else
		return FALSE;
}

Data enqueue(queue* qq, Data data){
	if(nextidx(qq->rear)==qq->front){
		printf("queue is full now");
		exit(1);
	}
	else{
		qq->rear=nextidx(qq->rear);
		qq->qarr[qq->rear]=data;
	}
}

Data dequeue(queue* qq){
	if(qisempty(qq)==1){
		printf("queue is empty now");
		exit(1);
	}
	else{
		qq->front=nextidx(qq->front);
		return qq->qarr[qq->front];
	}
}

Data qpeek(queue* qq){
	if(qisempty(qq)==1){
		printf("queue is empty now");
		exit(1);
	}
	return qq->qarr[nextidx(qq->front)];
}

