#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
//写头文件的原则是.c文件中，所有用到的类型、函数声明都写在头文件中。
//对于main.c也不例外。要么就不写main.h
#include <stdio.h>
#include <string.h>

typedef struct DateNode
{
    char* cmd;
    char* desc;
    int (*handler)();
    struct DateNode* next;
} tDateNode;

tDateNode* FindCmd(tDateNode* head,char* cmd);
int ShowAllCmd(tDateNode* head);

#endif // LINKLIST_H_INCLUDED
