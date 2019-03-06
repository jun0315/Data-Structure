//
// Created by lenovo on 2019/3/6.
//

#include <iostream>
#include <stdio.h>
#include "linkedlist.h"
using namespace std;

void test()
{
    ElemType e[3] = {{1,1},{2,2},{3,3}};
    LinkList L ;
    CreateList_H(L,3);
    LinkList Ltest = L;
    ElemType etest;
    if(GetElem(L,2,etest) && JudgeElem(etest,e[1]))
    {
        printf("GetElem函数测试成功\n");
    }
    else
        printf("GetElem函数测试失败\n");

    LinkList p = LocateElem(L,e[1]);
    if(p && JudgeElem(p->e,e[1]))
    {
        printf("LocateElem函数测试成功\n");
    } else
        printf("LocateElem函数测试失败\n");

    if(ListDelete(L,2) && JudgeElem(Ltest->next->next->e,e[2]))
    {
        printf("ListDelete函数测试成功\n");
    } else
        printf("ListDelete函数测试失败\n");

    if(ListInsert(L,2,e[1]) && JudgeElem(Ltest->next->next->e,e[1]))
    {
        printf("ListInsert函数测试成功\n");
    } else
        printf("ListInsert函数测试失败\n");


}