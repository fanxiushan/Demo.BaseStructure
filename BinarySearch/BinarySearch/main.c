//
//  main.c
//  BinarySearch
//
//  Created by xiushan.fan on 18/12/15.
//  Copyright © 2015年 Smartisan. All rights reserved.
//

#include <stdio.h>

void selectSortNumbers(int *numbers,int count) {
    //选择排序.
    if (numbers == NULL || count <= 0) {
        printf("the input array exception");
        return;
    }
    for (int i = 0; i < count; i++) {
        int cacheValue = numbers[i];
        int cacheIndex = i;
        for (int j = i; j < count; j++) {
            if (cacheValue > numbers[j]) {
                cacheValue = numbers[j];
                cacheIndex = j;
            }
        }
        int middleValue = numbers[i];
        numbers[i] = numbers[cacheIndex];
        numbers[cacheIndex] = middleValue;
    }
}

void bubbleSortNumbers(int *numbers,int count) {
    //冒泡排序.
    if (numbers == NULL || count <= 0) {
        printf("the input array exception");
        return;
    }
    for (int i = 0; i < count; i++) {
        int cacheNumber = 0;
        for (int j = i; j < count - i - 1; j++) {
            //if use number[j++],something will be wrong.
            if (numbers[j] > numbers[j+1]) {
                cacheNumber = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = cacheNumber;
            }
        }
    }
}


void printNumbers(int *numbers,int count) {
    for (int i = 0; i < count; i++) {
        printf("%d ",numbers[i]);
    }
}

int  binarySearch(int *numbers,int leftIndex,int rightIndex,int keyNum) {
    if (leftIndex > rightIndex) {
        return -1;
    }
    int middleIndex = (leftIndex + rightIndex) / 2;
    if (numbers[middleIndex] > keyNum) {
        rightIndex = middleIndex - 1;
        return binarySearch(numbers, leftIndex, rightIndex, keyNum);
    }
    else if(numbers[middleIndex] < keyNum) {
        leftIndex = middleIndex + 1;
        return binarySearch(numbers, leftIndex, rightIndex, keyNum);
    }
    else {
        return middleIndex;
    }
    return -1;
}


int main(int argc, const char * argv[]) {
    int numbers[7] = {3,2,4,6,5,9,13};
    bubbleSortNumbers(numbers,7);
    printNumbers(numbers,7);
    printf("\n-------------------\n");
    
    int foundIndex = binarySearch(numbers, 0, 7, 8);
    printf("foundIndex = %d\n",foundIndex);
    return 0;
}

