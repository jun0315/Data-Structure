//
// Created by lenovo on 2019/3/29.
//
#include "_StackArray_.h"

int IsEmpty(Stack S){
    return S->TopOfStack == EmptyTOS;
}

int IsFull(Stack S){
    return S->TopOfStack == S->Capacity;
}

Stack CreateStack(int MaxElemnts){
    Stack S;

    if(MaxElemnts <MinStackSize){
        printf("Stack size is too small");
    }

    S = (StackRecord*)malloc(sizeof(struct StackRecord));

    if(S==NULL){
        printf("out of space!!!");
    }

    S->Array = (ElementType *)malloc(sizeof(ElementType)*MaxElemnts);
    if(S->Array ==NULL){
        printf("out of space!!!");
    }

    S->Capacity = MaxElemnts;

    MakeEmpty(S);
    return  S;
}

void DisposeStack(Stack S){
    if(S!=NULL){
        free(S->Array);
        free(S);
    }`
}

void MakeEmpty(Stack S){
    S->TopOfStack = EmptyTOS;
}

void Push(ElementType X,Stack S){
    if(IsFull(S)){
        printf("full stacK");
    } else{
        S->Array[++S->TopOfStack] = X;
    }
}

ElementType Top(Stack S){
    if(!IsEmpty(S)){
        return S->Array[S->TopOfStack];
    }
    printf("Empty stack");
}

void Pop (Stack S){
    if(IsEmpty(S)){
       printf("stack Empty");
    } else{
        S->TopOfStack--;
    }
}

ElementType TopAndPop(Stack S){
    if(!IsEmpty(S)){
        return S->Array[S->TopOfStack--];
    }
    printf("Empty stack");
}