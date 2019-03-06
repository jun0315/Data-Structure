//
// Created by lenovo on 2019/3/6.
//

#ifndef POLY_LINKEDLIST_H
#define POLY_LINKEDLIST_H

typedef struct ElemType
{
    float coef;
    int expm;
}ElemType;//此链表的数据类型用来存储多项式

typedef struct LNode
{
    ElemType e;
    struct LNode *next;
}LNode,*LinkList;//PNode链表节点，next与Polynomial均为指针，后者默认为头节点

bool InitiList(LinkList &L);
//用于单链表的初始化，用头指针L指向头节点

bool GetElem(LinkList L,int i , ElemType &e);
//单链表的取值，定位第i个节点，取值。

LNode *LocateElem(LinkList L,ElemType e);
//单链表的按值查找，返回第一个与值域相等的指针

bool ListInsert(LinkList &L,int i,ElemType e);
//在第i个位置插入值为e的新节点

bool ListDelete(LinkList &L,int i);
//删除第i个节点

void CreateList_H(LinkList &L,int n);
//头插法，需要逆序插入n个数

#endif //POLY_LINKEDLIST_H
