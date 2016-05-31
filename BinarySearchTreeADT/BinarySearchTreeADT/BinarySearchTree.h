//
//  BinarySearchTree.h
//  BinarySearchTreeADT
//
//  Created by xiushan.fan on 29/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include <stdio.h>

typedef struct binaryNode{
    int data;
    int number;
    struct binaryNode *lChild;
    struct binaryNode *rChild;
}BinaryNode;

BinaryNode * newBinaryNode();

//from small -> big.
BinaryNode * insertBinaryNode(BinaryNode *headNode,BinaryNode *newNode);

int binaryNodeNumber(BinaryNode *headNode);

void refreshBinaryNodeNumber(BinaryNode *headNode);

BinaryNode * selectKNode(BinaryNode *headNode);

void printMidBinaryNode(BinaryNode *headNode);

void printPreBinaryNode(BinaryNode *headNode);

void printAftBinaryNode(BinaryNode *headNode);

//在二叉树里查找关键字
BinaryNode *searchNodeInBinarySearchTree(BinaryNode *rootNode,int keyData);

//翻转二叉树.
BinaryNode * invertBinarySearchTree(BinaryNode *headNode);

//右旋转
BinaryNode *rotationRight(BinaryNode *headNode);

//左旋转
BinaryNode *rotationLeft(BinaryNode *headNode);

//将节点插入头结点.
BinaryNode *insertNodeToBinarySearchTreeHead(BinaryNode *headNode,BinaryNode *newNode);

#endif /* BinarySearchTree_h */
