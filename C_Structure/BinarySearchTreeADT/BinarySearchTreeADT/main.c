//
//  main.c
//  BinarySearchTreeADT
//
//  Created by xiushan.fan on 29/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#include <stdio.h>
#include "BinarySearchTree.h"

int main(int argc, const char * argv[]) {
    BinaryNode *headNode = newBinaryNode();

    insertBinaryNode(headNode, newBinaryNode());
    insertBinaryNode(headNode, newBinaryNode());
    insertBinaryNode(headNode, newBinaryNode());
    insertBinaryNode(headNode, newBinaryNode());
    insertBinaryNode(headNode, newBinaryNode());
    
    refreshBinaryNodeNumber(headNode);
    
    //print number in middle order
    printf("\n---------------\n");
    printMidBinaryNode(headNode);
    printf("\n---------------\n");
    //print number in pre order
    printf("\n---------------\n");
    printPreBinaryNode(headNode);
    printf("\n---------------\n");
    printf("count = %d",binaryNodeNumber(headNode));
    printf("\n---------------\n");
    
    return 0;
}



