/*
更新：
1.数据域使用unsigned long int
2.考虑通用型
3.更换为无头结点队列
作者：abner
日期：2016-10-1
*/
#include "link_queue.h"
int main(int argc,char *argv[])
{
    LinkQueue q;
    unsigned long int pp;
    testto t;
    t.a=23;
    t.b='p';
    InitQueue(&q);
    //经过测试，运行正常
    while (true) {
        testto *tt=NULL;
        EnQueue(&q,(unsigned long)&t);
        DeQueue(&q,&pp);
        tt = (testto *)pp;
        printf("%d,%c\n",tt->a,tt->b);
    }
    return 0;
}