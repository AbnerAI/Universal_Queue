#ifndef _LINK_QUEUE_H
#define _LINK_QUEUE_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef unsigned long int ult;
typedef struct node{
    unsigned long int data; //队列的数据类型,考虑通用型
    struct node *next; //指向下一个结点
}QueNode,*QuePtr;
typedef struct{
    QuePtr front; //指向队头的指针
    QuePtr rear; //指向队尾的指针
}LinkQueue;

//这个结构体本身不属于队列，考虑了通用型，下面的结构体可以在以后的使用中替换成任意结构体
typedef struct  test
{
    int a;
    char b;
}testto;

#ifndef G_LINK_QUEUE_H
#define G_LINK_QUEUE_H extern
#endif
G_LINK_QUEUE_H void InitQueue(LinkQueue *q); //初始化队列
G_LINK_QUEUE_H bool EnQueue(LinkQueue *q,ult e); //进队操作,将元素e压入队列中
G_LINK_QUEUE_H void DeQueue(LinkQueue *q,ult *e); //出队操作,将出队的元素存入*e中
G_LINK_QUEUE_H int GetQueueLength(LinkQueue *q); //获取队列的长度
G_LINK_QUEUE_H void Clear(LinkQueue *q); //清空队列
#endif //LINKQUEUE_H