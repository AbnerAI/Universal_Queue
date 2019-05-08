#define G_LINK_QUEUE_H
#include "link_queue.h"
//初始化队列
void InitQueue(LinkQueue *q)
{
    q->front = q->rear = NULL;
}
//入队列
bool EnQueue(LinkQueue *q,ult e)
{
	QuePtr temp = (QuePtr)malloc(sizeof(QueNode));
	if(!temp)
        return false;
    temp->data = e;
    temp->next = NULL;
    if(q->front==NULL)
    {
        q->rear = temp;
        q->front = temp;
        return true;
    }
    q->rear->next = temp;
    q->rear = temp;
    return true;
}
//出队列
void  DeQueue(LinkQueue *q,ult *e)
{
	if(q->front == NULL)
        return ;
	QuePtr temp = q->front;
	*e = temp->data;
	q->front = temp->next;
	free(temp);
}

bool IsEmpty(LinkQueue *q) 
{
	if(q->front == NULL)
		return true;
	return false;
}

int GetQueueLength(LinkQueue *q) //返回队列的长度
{
	QuePtr temp = q->front;
	int i = 0;
	while(temp != NULL)
	{
		++i;
		temp = temp->next;
	}
	return i;
}

void Clear(LinkQueue *q) //清空队列
{
	QuePtr temp = q->front;
	while(temp)
	{
		QuePtr tp = temp;
		temp = temp->next;
		free(tp);
	}
	q->front = q->rear = NULL;
}
