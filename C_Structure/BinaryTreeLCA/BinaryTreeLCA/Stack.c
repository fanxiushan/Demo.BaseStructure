//
//  Stack.c
//  Stack
//
//  Created by xiushan.fan on 9/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#include "Stack.h"
#include <stdlib.h>

Stack *createStack() {
    Stack *stack = malloc(sizeof(Stack));
    stack->index = 0;
    return stack;
}

void pushNodeToStack(BiNode *node,Stack *stack){
    if (stack->index >= 100) {
        printf("stack overflow");
        return;
    }
    stack->data[stack->index] = node;
    (stack->index)++;
}

BiNode * popNodeToStack(Stack *stack) {
    if (stack->index == 0) {
        return NULL;
    }
    (stack->index)--;
    BiNode *tNode = stack->data[stack->index];
    stack->data[stack->index] = NULL;
    return tNode;
}

BiNode *newNode(int tData) {
    BiNode *tNode = malloc(sizeof(BiNode));
    tNode->data = tData;
    tNode->lChild = NULL;
    tNode->rChild = NULL;
    return tNode;
}


void printStack(Stack *stack) {
    for (int i = 0; i < stack->index; i++) {
        printf("%d\n",((BiNode *)(stack->data[i]))->data);
    }
    
}