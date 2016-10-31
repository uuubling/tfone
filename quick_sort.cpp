//
//  quick_sort.cpp
//  blingbling
//
//  Created by blingbling on 23/8/16.
//  Copyright © 2016年 blingbling. All rights reserved.
//

#include "quick_sort.hpp"
int partition(int array[], int left, int right) {
    //选取最左边的元素为基准点
    int standard = array[left];
    while (left < right) {
        while (left < right && array[right] >= standard) {
            right--;
        }
        if (left < right) {
            array[left] = array[right];
            left++;
        }
        while (left < right && array[left] <= standard) {
            left++;
        }
        if (left < right) {
            array[right] = array[left];
            right--;
        }
    }
    array[left] = standard;
    return left;
    
}
void quickSort(int array[], int left, int right) {
    //划分后基准点的位置
    if (left < right) {
        int keyPosition = partition(array, left, right);
        quickSort(array, left, keyPosition - 1);
        quickSort(array, keyPosition + 1, right);
    }
    
}

