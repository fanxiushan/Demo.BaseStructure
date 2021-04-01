//
//  Headers.h
//  BinaryTreeLCA
//
//  Created by xiushan.fan on 10/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#ifndef Headers_h
#define Headers_h

#define kMaxN   100


typedef struct BiNode {
    int data;
    struct BiNode *lChild;
    struct BiNode *rChild;
}BiNode;

typedef struct stack {
    BiNode *data[kMaxN];
    int index;
} Stack;


#endif /* Headers_h */
