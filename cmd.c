#include "cmd.h"
int help()
{
	ShowAllCmd(head);
	return 0;
}

int quit()
{
    exit(0);
    return 0;
}
