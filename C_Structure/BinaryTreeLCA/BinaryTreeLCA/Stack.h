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
#include "Headers.h"


Stack *createStack();

void pushNodeToStack(BiNode *node,Stack *stack);

BiNode * popNodeToStack(Stack *stack);

BiNode *newNode(int tData);

void printStack(Stack *stack);

#endif /* Stack_h */
