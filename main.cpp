//
// Created by Sun Haoxian on 16/5/22.
//


#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "iostream"


using namespace std;

Sort *bubblesort = new BubbleSort();
Sort *quicksort = new QuickSort();

int main(){

    vector<int> result1 = bubblesort-> sort(vector<int>{5,9,2,1,5,6,8,9,});
    for(int i = 0; i < result1.size();i++) {
        std::cout << result1[i] << " ";
    }
    cout<<endl;

    vector<int> result2 = quicksort-> sort(vector<int>{5,9,2,1,5,6,8,9,});
    for(int i = 0; i < result1.size();i++) {
        std::cout << result2[i] << " ";
    }
    cout<<endl;
}