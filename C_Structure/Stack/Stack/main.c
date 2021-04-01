//
//  main.c
//  Stack
//
//  Created by xiushan.fan on 9/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#include <stdio.h>
#include "Stack.h"

int main(int argc, const char * argv[]) {
    Stack *tStack = createStack();
    Node *node1 = newNode(5);
    Node *node2 = newNode(6);
    pushNodeToStack(node1, tStack);
    pushNodeToStack(node2, tStack);
    Node *popNode1 = popNodeToStack(tStack);
    Node *popNode2 = popNodeToStack(tStack);
    printf("popNode1 = %d\n",popNode1->data);
    printf("popNode1 = %d\n",popNode2->data);
    return 0;
}
