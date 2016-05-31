//
//  Queue.c
//  Binary
//
//  Created by xiushan.fan on 3/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

//<<<<<< front <<<<<<< rear <<<<<<<<

#include "Queue.h"

Queue createEmptyBiQueue() {
    Queue queue;
    queue.front = NULL;
    queue.rear = NULL;
    return  queue;
}

void printBiQueue(Queue queue) {
    QueueNode *node = queue.front;
    while (node != NULL) {
        printf("queue node = %d\n",node->biNode->data);
        node = node->next;
    }
}

int isBiQueueEmpty(Queue queue) {
    if (queue.front==NULL && queue.rear == NULL) {
        return 1;
    }
    return 0;
}

void printBiQueueFront(Queue queue) {
    if (queue.front == NULL) {
        printf("queue node date= %d\n",queue.front->biNode->data);
    }
}

void insertBiQueue(Queue *queue,QueueNode *tNode){
    if (tNode == NULL) {
        return;
    }
    if (queue->front != NULL && queue->rear != NULL) {
        queue->rear->next = tNode;
        queue->rear = tNode;
    }
    else {
        queue->front = tNode;
        queue->rear = tNode;
    }
}

void deleteBiQueue(Queue *queue){
    queue->front = queue->front->next;
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
}
