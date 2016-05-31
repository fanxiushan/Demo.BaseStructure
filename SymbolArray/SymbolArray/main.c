//
//  main.c
//  SymbolArray
//
//  Created by xiushan.fan on 16/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#include <stdio.h>
#include "SymbolArray.h"

int main(int argc, const char * argv[]) {
    Item *st = STInit(5);
    STPrint(st);
    printf("\n-------\n");
    printf("count = %d",STcount(st));
    printf("\n-------\n");
    Item insertedItem;
    insertedItem.data = 10;
    STinsert(st, insertedItem);
    printf("count = %d",STcount(st));
    printf("\n-------\n");
    STPrint(st);
    Item searchedItem = STsearch(st, insertedItem);
    printf("searchedItem %d",searchedItem.data);
    printf("\n-------\n");
    return 0; 
}
