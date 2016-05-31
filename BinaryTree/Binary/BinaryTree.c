//
//  BinaryTree.c
//  Binary
//
//  Created by xiushan.fan on 3/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#include "BinaryTree.h"

void middleOrderTraverse(BiTNode *tNode){
    if (tNode->lchild != NULL) {
        middleOrderTraverse(tNode->lchild);
    }
    printf("data = %d\n",tNode->data);
    if (tNode->rchild != NULL) {
        middleOrderTraverse(tNode->rchild);
    }
}

void posterOrderTraverse(BiTNode *tNode){
    
    if (tNode->lchild != NULL) {
        posterOrderTraverse(tNode->lchild);
    }
    if (tNode->rchild != NULL) {
        posterOrderTraverse(tNode->rchild);
    }
    printf("data = %d\n",tNode->data);
}

void preorderTraverse(BiTNode *tNode) {
    printf("data = %d\n",tNode->data);
    if (tNode->lchild != NULL) {
        preorderTraverse(tNode->lchild);
    }
    if (tNode->rchild != NULL) {
        preorderTraverse(tNode->rchild);
    }
}

void leverTraverse(BiTNode *tNode) {
    
}

BiTNode * CreateBiTree(BiTNode *tNode) {
    if (tNode == NULL) {
        tNode = (BiTNode *)malloc(sizeof(BiTNode));
    }
    (*tNode).lchild =(BiTNode *)malloc(sizeof(BiTNode));
    (*tNode).rchild =(BiTNode *)malloc(sizeof(BiTNode));
    printf("tNode = %p\n",tNode);
    printf("tNode->lchild = %p\n",tNode->lchild);
    printf("tNode->rchild = %p\n",tNode->rchild);
    int a = 0;
    scanf("%d",&a);
    (*tNode).data = a;
    if (a == 0) {
        (*tNode).lchild = NULL;
        (*tNode).rchild = NULL;
        return NULL;
    }
    else {
        CreateBiTree((*tNode).lchild);
        CreateBiTree((*tNode).rchild);
    }
    return tNode;
}

