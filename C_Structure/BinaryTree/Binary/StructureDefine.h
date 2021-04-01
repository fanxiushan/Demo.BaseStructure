//
//  StructureDefine.h
//  Binary
//
//  Created by xiushan.fan on 3/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#ifndef StructureDefine_h
#define StructureDefine_h

typedef struct BiTNode{     //定义数据结构
    int data;
    struct BiTNode *lchild,*rchild;
}BiTNode;

typedef struct node{
    BiTNode *biNode;
    struct node *next;
}QueueNode;

typedef struct queue{
    QueueNode *front;
    QueueNode *rear;
}Queue;

#endif /* StructureDefine_h */
