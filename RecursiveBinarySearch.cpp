//
// Created by Sun Haoxian on 16/5/22.
//

#include "RecursiveBinarySearch.h"
RecursiveBinarySearch::RecursiveBinarySearch() = default;

int binarySearch(vector<int> array, int start, int end, int target){
    if(start > end)
        return -1;

    int mid = (start + end)>>1;   // divided by two

    // Base condition (target value is found)
    if (target == array[mid])
        return mid;

        // discard all elements in the right search space
        // including the mid element
    else if (target < array[mid])
        return binarySearch(array, start, mid - 1, target);

        // discard all elements in the left search space
        // including the mid element
    else
        return binarySearch(array, start + 1, end, target);
}

int search(vector<int> array, int target)
{
    return binarySearch(array, 0, array.size() - 1, target);
}