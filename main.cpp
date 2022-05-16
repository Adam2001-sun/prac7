//
// Created by Sun Haoxian on 16/5/22.
//


#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "iostream"


using namespace std;

Sort *bubblesort = new BubbleSort();
Sort *quicksort = new QuickSort();

int main(){

    vector<int> result1 = bubblesort-> sort(vector<int>{-5,-8,-4,-2,-1});
    for(int i = 0; i < result1.size();i++) {
        std::cout << result1[i] << " ";
    }
    cout<<endl;

}