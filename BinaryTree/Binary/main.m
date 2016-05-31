//
//  main.m
//  Binary
//
//  Created by xiushan.fan on 23/11/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <malloc/malloc.h>
#include <stdio.h>
#include "Queue.h"
#include "StructureDefine.h"
#include "BinaryTree.h"

QueueNode *createQueueNode(BiTNode *biNode){
    if (biNode == NULL) {
        return NULL;
    }
    QueueNode *queueNode = malloc(sizeof(QueueNode));
    queueNode->biNode = biNode;
    return queueNode;
}

QueueNode *createNewQueueNode(int data){
    BiTNode *biNode = malloc(sizeof(BiTNode));
    biNode->data = data;
    QueueNode *queueNode = malloc(sizeof(QueueNode));
    queueNode->biNode = biNode;
    return queueNode;
}

int main() {
    Queue queue = createEmptyBiQueue();
    
    BiTNode *biNode = CreateBiTree(NULL);
    insertBiQueue(&queue, createQueueNode(biNode));
    printBiQueue(queue);
    while (isBiQueueEmpty(queue) != 1) {
        QueueNode *headNode = queue.front;
        printf("headnode data = %d\n",headNode->biNode->data);
        deleteBiQueue(&queue);
        insertBiQueue(&queue, createQueueNode(headNode->biNode->lchild));
        insertBiQueue(&queue, createQueueNode(headNode->biNode->rchild));
    }
    
    return 0;
}

