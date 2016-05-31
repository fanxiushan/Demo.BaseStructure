//
//  BinaryTree.h
//  Binary
//
//  Created by xiushan.fan on 3/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h

#include <stdio.h>
#include "StructureDefine.h"

BiTNode * CreateBiTree(BiTNode *tNode);

void middleOrderTraverse(BiTNode *tNode);

void posterOrderTraverse(BiTNode *tNode);

void preorderTraverse(BiTNode *tNode);

void leverTraverse(BiTNode *tNode);

#endif /* BinaryTree_h */
