//
//  main.c
//  ReverseLinkList
//
//  Created by xiushan.fan on 12/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "LinkList.h"

int main(int argc, const char * argv[]) {
    LinkNode *headNode = createLinkNode(3);
    printLinkNode(headNode);
    printf("-------- reverseLink -------\n");
    reversePrintLinkNode(headNode);
    printf("-------- reverse -------- \n");
    LinkNode *tailorNode = malloc(sizeof(LinkNode));
    reverseLinkList(headNode,headNode,tailorNode);
    printLinkNode(tailorNode);
    return 0;
}
