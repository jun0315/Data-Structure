//
// Created by lenovo on 2019/3/29.
//
#include "_StackLisk_.h"

int IsEmpty(Stack S){
    return S->Next ==NULL;
}

Stack CreateStack(void){
    Stack S;
    S = (Node *)malloc(sizeof(struct Node));
    if(S==NULL){
        printf("out of the space!!!");
    }
    S->Next = NULL;
    MakeEmpty(S);
    return S;
}

void DisposeStack(Stack S){
    if(S!=NULL){
        free(S);
    }
}

void MakeEmpty(Stack S){
    if(S==NULL){
        printf("Must use CreateStack first!!");
    }
    else{
        while (!IsEmpty(S)){
            Pop(S);
        }
    }
}

void Push(ElementType X,Stack S){
    PtrToNode TmpCell;

    TmpCell =(Node*)(malloc(sizeof(Node)));
    if(TmpCell==NULL){
        printf("out of space!!!");
    } else{
        TmpCell->Element = X;
        TmpCell->Next = S->Next;
        S->Next = TmpCell;
    }
}

ElementType Top(Stack S){
    if(!IsEmpty(S)){
        return S->Next->Element;
    }
    printf("empty stack");
}

void Pop(Stack S){
    PtrToNode FirstCell;

    if(IsEmpty(S)){
        printf("stack empty");
    } else{
        FirstCell = S->Next;
        S->Next = S->Next->Next;
        free(FirstCell);
    }
}