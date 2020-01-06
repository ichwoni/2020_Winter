#include <stdio.h>
#define QULEN 100
#define TRUE 1
#define FALSE 0

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
