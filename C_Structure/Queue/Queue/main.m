//
//  main.m
//  Queue
//
//  Created by xiushan.fan on 2/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef struct node{
    int data;
    struct node *next;
}Node;

typedef struct queue{
    Node *front;
    Node *rear;
}Queue;


Queue *createQueue(int length,Queue *queue) {
    queue->front = malloc(sizeof(Node));
    queue->rear = queue->front;
    for (int i = 0; i < 5; i++) {
        queue->rear->next = malloc(sizeof(Node));
        queue->rear->next->data =  i;
        queue->rear = queue->rear->next;
    }
    return queue;
}

void printQueue(Queue *queue) {
    Node *tNode = queue->front->next;
    while (tNode != NULL) {
        printf("%d\n",tNode->data);
        tNode = tNode->next;
    }
}

void insertNode(Queue *queue,Node *node) {
    Node *headNode = queue->front;
    node->next = headNode->next;
    headNode->next = node;
}

void deleteNode(Queue *queue){
    Node *tNode = queue->front->next;
    while (tNode->next != queue->rear) {
        tNode = tNode->next;
    }
    queue->rear = tNode;
    queue->rear->next = NULL;
}

int main(int argc, const char * argv[]) {
    Queue *queue = malloc(sizeof(Queue));
    queue = createQueue(5,queue);
    printQueue(queue);
    
    Node *newNode = malloc(sizeof(Node));
    newNode->data = 100;
    
    insertNode(queue, newNode);
    printQueue(queue);
    
    deleteNode(queue);
    printQueue(queue);
    
    return 0;
}
