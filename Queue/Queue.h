//
// Created by lenovo on 2019/4/3.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H
using namespace std;

struct QueueNode {
    int data;
    QueueNode *next = nullptr;

    QueueNode(int x) {
        data = x;
    }
};

class Queue {
private:
    QueueNode *front;
    QueueNode *rear;

public:
    Queue();

    bool isEmpty();

    void EnQueue(int x);

    int DeQueue();

    int GetHead();

    void Clear();
};


#endif //QUEUE_QUEUE_H
