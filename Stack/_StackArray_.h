//
// Created by lenovo on 2019/3/29.
//
#include <iostream>
#include "malloc.h"

#ifndef STACK_STACKARRAY_H
#define STACK_STACKARRAY_H

struct ElementType;
struct StackRecord;

typedef struct StackRecord * Stack;

int IsEmpty(Stack S);
int IsFull(Stack S);
Stack CreateStack(int MaxElements);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X,Stack S);
ElementType Top(Stack S);
void Pop(Stack S);
ElementType TopAndPop(Stack S);

#define EmptyTOS (-1)
#define MinStackSize (5)

struct ElementType{
    int x;
};

struct StackRecord{
    int Capacity;
    int TopOfStack;
    ElementType *Array;
};

#endif //STACK_STACKARRAY_H
