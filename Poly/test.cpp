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
        printf("GetElem�������Գɹ�\n");
    }
    else
        printf("GetElem��������ʧ��\n");

    LinkList p = LocateElem(L,e[1]);
    if(p && JudgeElem(p->e,e[1]))
    {
        printf("LocateElem�������Գɹ�\n");
    } else
        printf("LocateElem��������ʧ��\n");

    if(ListDelete(L,2) && JudgeElem(Ltest->next->next->e,e[2]))
    {
        printf("ListDelete�������Գɹ�\n");
    } else
        printf("ListDelete��������ʧ��\n");

    if(ListInsert(L,2,e[1]) && JudgeElem(Ltest->next->next->e,e[1]))
    {
        printf("ListInsert�������Գɹ�\n");
    } else
        printf("ListInsert��������ʧ��\n");


}