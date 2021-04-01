//
//  main.c
//  LinkList
//
//  Created by xiushan.fan on 12/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"

int main(int argc, const char * argv[]) {
    LinkNode *headNode = createLinkNode( 5);
    LinkNode *lastNode = lastLinkNode(headNode);
    //
    LinkNode *node1 = malloc(sizeof(LinkNode));
    LinkNode *node2 = malloc(sizeof(LinkNode));
    LinkNode *node3 = malloc(sizeof(LinkNode));
    LinkNode *node4 = malloc(sizeof(LinkNode));
    node1->data = 5;
    node1->next = node2;
    node2->data = 6;
    node2->next = node3;
    node3->data = 7;
    node3->next = node4;
    node4->data = 7;
    node4->next = node1;
    lastNode->next = node1;

    int result = isCircleExist(headNode);
    if (result) {
        printf("link list have circle");
    } else {
        printLinkNode(headNode);
    }
    //翻转链表.
//    reverseLinkNode(headNode);
//    printLinkNode(headNode);


    return 0;
}





