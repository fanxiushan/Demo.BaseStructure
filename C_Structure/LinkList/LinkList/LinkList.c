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
        tLinkNode->next->data = i;
        tLinkNode->next->next = NULL;
        tLinkNode = tLinkNode->next;
    }
    return headNode;
}

LinkNode *lastLinkNode(LinkNode *headNode) {
    LinkNode *tNode= headNode ? headNode->next : NULL;
    while (tNode != NULL) {
        if (tNode->next == NULL) {
            break;
        } else{
            tNode = tNode->next;
        }
    }
    return tNode;
}

void appendLinkNode(LinkNode *headNode, LinkNode *node) {
    LinkNode *tNode= headNode ? headNode->next : NULL;
    while (tNode != NULL) {
        if (tNode->next == NULL) {
            break;
        } else{
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

void reverseLinkNode(LinkNode *headNode) {
    LinkNode *t = headNode->next;
    LinkNode *next = NULL;
    LinkNode *prev = NULL;
    while (t->next) {
        next = t->next;
        t->next = prev;
        prev = t;
        t = next;
    }
    t->next = prev;
    headNode->next = t;
}

LinkNode *findMiddleLinkNode(LinkNode *headNode) {
    LinkNode *t = headNode;
    LinkNode *m = headNode;
    int i = 0;
    while (t) {
        t = t->next;
        i = i+1;
        if (i%2 == 0) {
            m = m->next;
        }
    }
    return m;
}

int isCircleExist(LinkNode *head) {
    if (head->next == NULL) {
        return 0;
    }
    LinkNode *singleStep = head->next;
    LinkNode *doubleStep = head->next;
    int haveCircle = 0;
    while (doubleStep->next != NULL) {
        if (singleStep->next) {
            singleStep = singleStep->next;
        } else {
            haveCircle = 0;
            break;
        }
        if (doubleStep->next->next) {
            doubleStep = doubleStep->next->next;
        } else {
            haveCircle = 0;
            break;
        }
        if (singleStep == doubleStep) {
            haveCircle = 1;
            break;
        }
    }
    return haveCircle;
}
