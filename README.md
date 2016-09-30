# menu
学习编写头文件，以及多个源文件的写法。
头文件使用原则：相应源文件中用到的函数声明、结构定义，都写在里面。在相应源文件中只需include这一个头文件即可。为了避免重复声明和定义，头文件的内容需写在:
#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
//write your header file here.

#endif // ****_H_INCLUDED
