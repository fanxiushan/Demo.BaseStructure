//
//  BinarySearchTree.c
//  BinarySearchTreeADT
//
//  Created by xiushan.fan on 29/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#include "BinarySearchTree.h"
#include <stdlib.h>

BinaryNode * newBinaryNode() {
    BinaryNode *binaryNode = malloc(sizeof(BinaryNode));
    int data = 0;
    printf("please input binary node data:");
    scanf("%d",&data);
    binaryNode->data = data;
    binaryNode->number = 0;
    binaryNode->lChild = NULL;
    binaryNode->rChild = NULL;
    return binaryNode;
}

BinaryNode * insertBinaryNode(BinaryNode *headNode,BinaryNode *newNode) {
    if (headNode == NULL) {
        return newNode;
    }
    if (newNode->data < headNode->data) {
        headNode->lChild = insertBinaryNode(headNode->lChild, newNode);
    }
    else {
        headNode->rChild = insertBinaryNode(headNode->rChild, newNode);
    }
    return headNode;
}




int binaryNodeNumber(BinaryNode *headNode) {
    if (headNode == NULL) {
        return 0;
    }
    if (headNode->lChild == NULL && headNode->rChild == NULL) {
        return 1;
    }
    int count = 0;
    count = count + binaryNodeNumber(headNode->lChild);
    count = count + binaryNodeNumber(headNode->rChild);
    return count+1;
}

void refreshBinaryNodeNumber(BinaryNode *headNode) {
    if (headNode == NULL) {
        return;
    }
    headNode->number = binaryNodeNumber(headNode);
    refreshBinaryNodeNumber(headNode->lChild);
    refreshBinaryNodeNumber(headNode->rChild);
    return;
}


BinaryNode * selectKNode(BinaryNode *headNode) {
    if (headNode->lChild -> lChild) {
        //
    }
    return NULL;
}


void printPreBinaryNode(BinaryNode *headNode) {
    if (headNode == NULL) {
        return;
    }
    printf("data: %d ",headNode->data);
    printf("number: %d ",headNode->number);
    printf("\n");
    printPreBinaryNode(headNode->lChild);
    printPreBinaryNode(headNode->rChild);
}

void printMidBinaryNode(BinaryNode *headNode) {
    if (headNode == NULL) {
        return;
    }
    printMidBinaryNode(headNode->lChild);
    printf("data: %d ",headNode->data);
    printf("number: %d ",headNode->number);
    printf("\n");
    printMidBinaryNode(headNode->rChild);
}


void printAftBinaryNode(BinaryNode *headNode) {
    if (headNode == NULL) {
        return;
    }
    printAftBinaryNode(headNode->lChild);
    printAftBinaryNode(headNode->rChild);
    printf("%d ",headNode->data);
}

BinaryNode *searchNodeInBinarySearchTree(BinaryNode *rootNode,int keyData) {
    if (rootNode == NULL) {
        return NULL;
    }
    if (rootNode->data == keyData) {
        return rootNode;
    }
    if (keyData > rootNode->data) {
        return searchNodeInBinarySearchTree(rootNode->rChild, keyData);
    }
    else {
        return searchNodeInBinarySearchTree(rootNode->lChild, keyData);
    }
    
    return NULL;
}


BinaryNode * invertBinarySearchTree(BinaryNode *headNode) {
    if (headNode == NULL) {
        return headNode;
    }
    headNode->lChild = invertBinarySearchTree(headNode->lChild);
    headNode->rChild = invertBinarySearchTree(headNode->rChild);
    BinaryNode *tNode = headNode->lChild;
    headNode->lChild = headNode->rChild;
    headNode->rChild = tNode;
    return headNode;
}


BinaryNode *rotationRight(BinaryNode *headNode) {
    BinaryNode *next = headNode->lChild;
    headNode->lChild = next->rChild;
    next->rChild = headNode;
    return next;
}

BinaryNode *rotationLeft(BinaryNode *headNode) {
    BinaryNode *next = headNode->rChild;
    headNode->rChild = next->lChild;
    next->lChild = headNode;
    return next;
}

BinaryNode *insertNodeToBinarySearchTreeHead(BinaryNode *headNode,BinaryNode *newNode) {
    //相当于在最底部插入后，记住路径，然后依次倒序翻转.
    if (headNode == NULL) {
        return newNode;
    }
    if (newNode->data < headNode->data) {
        headNode->lChild= insertNodeToBinarySearchTreeHead(headNode->lChild, newNode);
        headNode = rotationRight(headNode);
    }
    else {
        headNode->rChild= insertNodeToBinarySearchTreeHead(headNode->rChild, newNode);
        headNode = rotationLeft(headNode);
    }
    return headNode;
}

