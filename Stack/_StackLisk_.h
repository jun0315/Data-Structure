//
// Created by lenovo on 2019/3/29.
//
#include <iostream>
#include "malloc.h"
#ifndef STACK_STACKLISK_H

struct Node;
struct ElementType;
typedef struct Node* PtrToNode;
typedef PtrToNode Stack;
struct ElementType{
};

struct Node{
    ElementType Element;
    PtrToNode Next;
};

int IsEmpty(Stack s);
Stack CreateStack(void);
void DisposeStack(Stack s);
void MakeEmpty(Stack s);
void Push(ElementType X,Stack s);
ElementType Top(Stack s);
void Pop(Stack S);









#define STACK_STACKLISK_H

#endif //STACK_STACKLISK_H
