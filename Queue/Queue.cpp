//
// Created by lenovo on 2019/4/3.
//

#include "Queue.h"

Queue::Queue() {
    front = nullptr;
    rear = nullptr;
}

bool Queue::isEmpty() {
    if (front == nullptr && rear == nullptr) {
        return true;
    } else return false;
}

void Queue::EnQueue(int x) {
    QueueNode *newNode = new QueueNode(x);
    newNode->next = nullptr;
    if(rear == nullptr){
        front = newNode;
        rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
    return;
}

int Queue::DeQueue() {
    if(isEmpty()){
        cout<<"queue is empty now"<<endl;
        return -1;
    }
    QueueNode *oldNode = front;
    int element = oldNode->data;
    front = front->next;
    delete oldNode;
    return element;
}

int Queue::GetHead() {
    if(isEmpty()){
        cout<<"queue is empty now"<<endl;
        return -1;
    }
    return front->data;
}

void Queue::Clear() {
    while (!isEmpty()){
        DeQueue();
    }
}