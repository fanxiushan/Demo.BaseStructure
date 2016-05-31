//
//  SymbolArray.h
//  SymbolArray
//
//  Created by xiushan.fan on 16/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#ifndef SymbolArray_h
#define SymbolArray_h

//关键是 Value 和 Key 的对应关系方便确定Value在数组中的位置... 然而这一点并没有太多在书中提及。
//书中的伪代码仅仅是 key(item) 然后得到 item 的key值.

#include <stdio.h>

typedef struct item{
    int data;
}Item;


Item * STInit(int maxN) ;

int STcount(Item *st);

Item STsearch(Item *item,Item searchItem);

void STinsert(Item *item,Item insertItem);

void STdelete(Item *item);

Item STselect(int k);

void STPrint(Item *item);

void STsort(void (*visit)(Item));

#endif /* SymbolArray_h */
