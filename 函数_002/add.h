#pragma once

int Add(int x, int y);
//#pragma once大部分编译器支持
//若考虑到很好的移植性，可以使用以下格式包含头文件：
//#ifndef                      意思是if not define(如果没有定义)
// #define                     定义
// ......(声明)
//
// endif                       结束
//                             (这么做的目的是为了防止多个人做一个项目时，每个人都
//                              引用同一个头文件造成内存浪费)