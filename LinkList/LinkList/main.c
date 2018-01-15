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
    printLinkNode(headNode);
    printf("---------------------\n");
    LinkNode *tobeAppendNode = malloc(sizeof(LinkNode));
    tobeAppendNode->data = 5;
    tobeAppendNode->next = NULL;
//    appendLinkNode(headNode, tobeAppendNode);
    reverseLinkNode(headNode);
    printLinkNode(headNode);
    return 0;
}
