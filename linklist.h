#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
//дͷ�ļ���ԭ����.c�ļ��У������õ������͡�����������д��ͷ�ļ��С�
//����main.cҲ�����⡣Ҫô�Ͳ�дmain.h
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
