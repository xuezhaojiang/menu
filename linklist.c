#include "linklist.h"
tDateNode* FindCmd(tDateNode* head,char* cmd)
{
    tDateNode* p = head;
    if(head == NULL || cmd == NULL)
    {
        return NULL;
    }

    while(p != NULL)
    {
        if( !strcmp(p->cmd, cmd))
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int ShowAllCmd(tDateNode* head)
{
    printf("Menu list: \n");
    tDateNode* p = head;
    while(p != NULL)
    {
        printf("%s : %s\n",p->cmd,p->desc);
        p = p->next;
    }
    return 0;
}
