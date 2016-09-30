#include "linklist.h"
#include "cmd.h"
#include <stdio.h>

#define CMD_MAX_LEN 128

//static tDateNode head[] =
//static对全局变量进行修饰改变了其作用域的范围，由原来的整个工程可见变为本源文件可见。
tDateNode head[] =
{
    {"help", "This is help cmd.", help, &head[1]},
    {"version", "Menu Program V1.0.", NULL, &head[2]},
    {"quit","Thanks for your using.", quit, NULL}
};

int main()
{
    char cmd[CMD_MAX_LEN];
    printf("This program support the commands as : ");
    printf("\"help,version,quit\"\n");

    while(1)
    {
        printf("Please input a command : ");
        scanf("%s", cmd);
        tDateNode* p = FindCmd(head,cmd);
        if(p == NULL)
        {
            printf("This is a wrong command!\n");
            continue;
        }
        else
        {
            printf("%s : %s \n", p->cmd,p->desc);
            if(p->handler != NULL)
            {
                p->handler();
            }
        }
    }
    return 0;
}
