//
//  LinkList.c
//  LinkList
//
//  Created by xiushan.fan on 12/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#include "LinkList.h"


LinkNode *createLinkNode(int linkNum) {
    LinkNode *headNode = (LinkNode *)malloc(sizeof(LinkNode));
    LinkNode *tLinkNode = headNode;
    for (int i = 0; i < linkNum; i++) {
        tLinkNode->next = malloc(sizeof(LinkNode));
        int input = 0;
        scanf("%d",&input);
        tLinkNode->next->data = input;
        tLinkNode = tLinkNode->next;
    }
    return headNode;
}

void insertLinkNode(LinkNode *headNode,LinkNode *tobeInsertedNode,LinkNode *node) {
    if (headNode->next == tobeInsertedNode) {
        headNode->next = node;
        node->next = tobeInsertedNode;
    }
    else if (tobeInsertedNode->next == NULL) {
        tobeInsertedNode->next = node;
        node->next = NULL;
    }
    else {
        node->next = tobeInsertedNode->next;
        tobeInsertedNode->next = node;
    }
}

void appendLinkNode(LinkNode *headNode, LinkNode *node) {
    LinkNode *tNode= headNode ? headNode->next : NULL;
    while (tNode != NULL) {
        if (tNode->next == NULL) {
            break;
        }
        else{
            tNode = tNode->next;
        }
    }
    tNode->next = node;
    node->next = NULL;
}

void printLinkNode(LinkNode *headLinkNode) {
    LinkNode *tLinkNode = headLinkNode ? headLinkNode->next : NULL;
    while  (tLinkNode != NULL) {
        printf("tLinkNode.data = %d\n",tLinkNode->data);
        tLinkNode = tLinkNode->next;
    }
}

void reversePrintLinkNode(LinkNode *linkNode) {
    LinkNode *tLinkNode = linkNode ? linkNode : NULL;
    if (tLinkNode != NULL) {
        tLinkNode = tLinkNode->next;
        reversePrintLinkNode(tLinkNode);
    }
    if (tLinkNode!=NULL) {
        printf("%d\n",tLinkNode->data);
    }
}



LinkNode * reverseLinkList(LinkNode *headNode,LinkNode *linkNode,LinkNode *tailorNode) {
    LinkNode *tLinkNode = linkNode ? linkNode : NULL;
    LinkNode *reverseNode = NULL;
    if (tLinkNode->next != NULL) {
        reverseNode = reverseLinkList(headNode,tLinkNode->next,tailorNode);
        if (reverseNode == NULL) {
            reverseNode = malloc(sizeof(LinkNode));
        }
        if (tLinkNode == headNode) {
            reverseNode ->next = NULL;
        }
        else{
            reverseNode->next = tLinkNode;
        }
    }
    if (tLinkNode->next == NULL) {
        tailorNode->next = tLinkNode;
    }
    return tLinkNode;
}




