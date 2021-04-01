//
//  main.c
//  BinaryTreeLCA
//
//  Created by xiushan.fan on 8/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//
// ------  找到两个节点的公共祖先. --------

#include <stdio.h>
#include <malloc/malloc.h>
#include <stdlib.h>
#include "Headers.h"
#include "Stack.h"

BiNode * createBiNode(BiNode *tBiNode){
    if (tBiNode == NULL) {
        tBiNode = malloc(sizeof(BiNode));
    }
    int inputData = 0;
    scanf("%d",&inputData);
    tBiNode->data = inputData;
    if (tBiNode->data == 0) {
        tBiNode->lChild = NULL;
        tBiNode->rChild = NULL;
        tBiNode=NULL;
        return NULL;
    }
    tBiNode->lChild = malloc(sizeof(BiNode));
    tBiNode->lChild = createBiNode(tBiNode->lChild);
    tBiNode->rChild = malloc(sizeof(BiNode));
    tBiNode->rChild = createBiNode(tBiNode->rChild);
    return tBiNode;
}

void print(BiNode *tBiNode) {
    if (tBiNode == NULL) {
        return;
    }
    printf("%d ",tBiNode->data);
    print(tBiNode->lChild);
    print(tBiNode->rChild);
}

BiNode * findNode(BiNode *tBiNode,int keyData,Stack *tPathStack) {
    pushNodeToStack(tBiNode, tPathStack);
    if (tBiNode == NULL) {
        popNodeToStack(tPathStack);
        return NULL;
    }
    if (tBiNode->data == keyData) {
        return tBiNode;
    }
    else {
        BiNode *finalNode = findNode(tBiNode->lChild, keyData,tPathStack);
        if (finalNode == NULL) {
            BiNode *tNode = findNode(tBiNode->rChild, keyData,tPathStack);
            if (tNode == NULL) {
                popNodeToStack(tPathStack);
            }
            return tNode;
        }
        else {
            return finalNode;
        }
    }
}

int main(int argc, const char * argv[]) {
    BiNode *headNode = createBiNode(NULL);
    Stack *pathStack1 =  createStack();
    Stack *pathStack2 =  createStack();
    print(headNode);
    printf("\n");
    
    BiNode *tFindNode1 = findNode(headNode,1,pathStack1);
    BiNode *tFindNode2 = findNode(headNode,5,pathStack2);
    
    if (tFindNode1) {
        printf("FindNode1 data = %d\n",tFindNode1->data);
    }
    if (tFindNode2) {
        printf("FindNode2 data = %d\n",tFindNode2->data);
    }
    printf("first path\n");
    printStack(pathStack1);
    printf("second path\n");
    printStack(pathStack2);
    
    int tIndex = 0;
    BiNode *node1 = pathStack1->data[tIndex];
    BiNode *node2 = pathStack2->data[tIndex];
    while (node1 && node2) {
        if (node1 != node2) {
            break;
        }
        tIndex++;
        node1 = pathStack1->data[tIndex];
        node2 = pathStack2->data[tIndex];
    }
    tIndex--;
    BiNode *ancestorNode = pathStack1->data[tIndex];
    printf("----------\n");
    if (ancestorNode != NULL) {
        printf("anstorNode = %p,anstorNode->data=%d\n",ancestorNode,ancestorNode->data);
    }
    else{
        printf("No ancestor node\n");
    }
    
    return 0;
}
