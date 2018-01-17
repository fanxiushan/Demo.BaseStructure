//
//  LinkList.h
//  LinkList
//
//  Created by xiushan.fan on 12/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#ifndef LinkList_h
#define LinkList_h

#include <stdio.h>

typedef struct linkNode {
    int data;
    struct linkNode *next;
}LinkNode;

LinkNode *createLinkNode(int linkNum);

void appendLinkNode(LinkNode *headNode, LinkNode *node);

void printLinkNode(LinkNode *headLinkNode);

void reverseLinkNode(LinkNode *headNode);

LinkNode *findMiddleLinkNode(LinkNode *headNode);


#endif /* LinkList_h */
