//
// Created by lenovo on 2019/4/10.
//

#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack() {
    stackNode = nullptr;
}

bool Stack::IsEmpty() {
    if (stackNode!= nullptr){
        return true;
    } else return false;
}
void Stack::Push(int x) {
    StackNode* newNode = new StackNode(x);
    newNode->next = stackNode;
    stackNode = newNode;
}

int Stack::Pop() {
    if(IsEmpty()){
        cout << "Stack is empty" << endl;
        return -1;
    }
    int element = stackNode->element;
    StackNode* oldPtr = stackNode;
    stackNode = stackNode->next;
    delete oldPtr;
    return element;
}

int Stack::Top() {
    if(IsEmpty()){
        cout << "Stack is empty" << endl;
        return -1;
    }
    return stackNode->element;
}

void Stack::Claer() {
    while (!IsEmpty()){
        Pop();
    }
}
