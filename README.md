# menu
学习编写头文件，以及多个源文件的写法。
头文件使用原则：相应源文件中用到的函数声明、结构声明和定义，都写在里面。       
最近又学习了一个，为了实现头文件中的接口隐藏，结构的声明应该写在头文件也就是
```
typedef struct LinkTable tLinkTable;
```
但是结构的定义就不一定了，有时写在c文件中
```
struct LinkTable
{
    tLinkTableNode *pHead;
    tLinkTableNode *pTail;
    int            SumOfNode;
    pthread_mutex_t mutex;
};
```      

在相应源文件中只需include这一个头文件即可。为了避免重复声明和定义，头文件的内容需写在:

\#ifndef MAIN_H_INCLUDED <br> \#define MAIN_H_INCLUDED <br> //write your header file here.

\#endif // MAIN_H_INCLUDED

本文件夹中，有一个menu.h,这个头文件并没有用到，只是为了显示一下，如果给menu.c(main函数所在的源文件)写头文件该怎么写。

fork_cmd.cpp是利用fork()函数新建一个子进程的方式，调用系统内真正的cmd，不过只能在当前文件夹下操作。进入不去上级目录，也进入不了下级目录。不过可以在当前目录下查看和编辑上级、下级目录的文件。和真正的shell还是有区别的。
   
(在我上传的文件中并没有体现以下这些，只是觉得有意义就写一下。)     
什么是回调函数：去调用系统的函数，是直调；系统调用你的函数，就是回调。系统函数也就是本实验中的lintable.c中的
```
tLinkTableNode * SearchLinkTableNode(tLinkTable *pLinkTable, int Conditon(tLinkTableNode * pNode,void *args),void *args)
```
本身是不完整的，在menu.c中想要使用这个函数，必需自己实现一个condition函数传递给系统函数，才能正常工作。     
这样有什么好处呢？查询条件不再是系统内置的，对应于不同的链表查询条件不同时，linktable.c也能复用。     
