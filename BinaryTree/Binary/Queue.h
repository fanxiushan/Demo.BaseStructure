//
//  Queue.h
//  Binary
//
//  Created by xiushan.fan on 3/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include <stdio.h>

#include "StructureDefine.h"


Queue createEmptyBiQueue();

int isBiQueueEmpty(Queue queue);

void printBiQueueFront(Queue queue);

void printBiQueue(Queue queue);

void insertBiQueue(Queue *queue,QueueNode *node);

void deleteBiQueue(Queue *queue);

#endif /* Queue_h */

