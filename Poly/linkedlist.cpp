//
// Created by lenovo on 2019/3/6.
//
#include <iostream>
#include <stdio.h>
#include "linkedlist.h"

bool InitiList(LinkList &L)
{
    L = new LNode;
    L->next = NULL;
    return true;
}

bool GetElem(LinkList L , int i , ElemType &e)
{
    LinkList p;
    p = new LNode;
    p = L->next;
    int j = 1 ;
    while (p && j<i )
    {
        p = p->next;
        j++;
    }
    if(!p||j>i)
    {
        printf("获取数据失败");
        return false;
    }
    e = p->e;
    return true;
}


LNode *LocateElem(LinkList L, ElemType &e)
{
    LinkList p = new LNode;
    p = L->next;
    while (p && p->e!=e)
        p = p->next;
    return p;
}

bool ListInsert(LinkList &L , int i , ElemType e)
{
    LinkList p = new LNode;
    int j = 0;
    while (p && j < i-1)
    {
        p = p->next;
        j++;
    }
    if (!p||j>i-1)
    {
        return false;
    }
    LinkList s = new LNode;
    s->e = e;
    s->next = p->next;
    p->next = s;
    return true;
}

bool  ListDelete(LinkList &L , int i)
{
    LinkList p = new LNode;
    p = L;
    int j = 0;
    while (p && j< i-1)
    {
        p = p->next;
        j++;
    }
    if(!(p->next) || j > i-1)
        return false;
    p->next = p->next->next;
    p = p->next;
    delete p;
    return true;

}

void CreateList_H(LinkList &L , int n)
{
    L = new LNode;
    L->next = NULL;
    for(int i = 0 ; i < n ; i++)
    {
        LinkList p = new LNode;
        cin >>
    }
}