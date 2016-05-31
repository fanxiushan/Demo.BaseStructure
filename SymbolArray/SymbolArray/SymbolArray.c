//
//  SymbolArray.c
//  SymbolArray
//
//  Created by xiushan.fan on 16/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#include "SymbolArray.h"
#include <stdlib.h>

static int M = 5;

Item * STInit(int maxN) {
    Item *st= malloc(sizeof(Item)*M);
    for (int i = 0 ; i <= M; i++) {
        Item item;
        item.data = 0;
        st[i] = item;
    }
    return st;
}

int STcount(Item *st) {
    int number = 0;
    for (int i = 0; i < M; i++) {
        Item item = st[i];
        if (item.data != 0) {
            number++;
        }
    }
    return number;
}

Item STsearch(Item *item,Item searchItem) {
    return item[keyOfItem(searchItem)];
}

void STinsert(Item *item,Item insertItem) {
    item[keyOfItem(insertItem)] = insertItem;
}

void STPrint(Item *item) {
    for (int i = 0 ; i < M; i++) {
        printf("%d,",item[i].data);
    }
}

int keyOfItem(Item item){
    int key = item.data % M;
    return key;
}
