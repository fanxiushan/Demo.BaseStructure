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

void pushNodeToStack(Node *node,Stack *stack){
    if (stack->index >= 100) {
        printf("stack overflow");
        return;
    }
    stack->data[stack->index] = node;
    (stack->index)++;
}

Node * popNodeToStack(Stack *stack) {
    if (stack->index == 0) {
        return NULL;
    }
    (stack->index)--;
    Node *tNode = stack->data[stack->index];
    return tNode;
}

Node *newNode(int tData) {
    Node *tNode = malloc(sizeof(Node));
    tNode->data = tData;
    return tNode;
}
