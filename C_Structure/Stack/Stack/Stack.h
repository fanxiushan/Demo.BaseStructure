//
//  Stack.h
//  Stack
//
//  Created by xiushan.fan on 9/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>

#define kMaxN   100

typedef struct node {
    int data;
} Node;

typedef struct stack {
    Node *data[kMaxN];
    int index;
} Stack;


Stack *createStack();

void pushNodeToStack(Node *node,Stack *stack);

Node * popNodeToStack(Stack *stack);

Node *newNode(int tData);

#endif /* Stack_h */
