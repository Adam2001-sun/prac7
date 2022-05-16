//
// Created by Sun Haoxian on 16/5/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_RECURSIVEBINARYSEARCH_H
#define CMAKE_CLION_CONAN_TEMPLATE_RECURSIVEBINARYSEARCH_H

#include <vector>
using namespace std;


class RecursiveBinarySearch {

public:
    RecursiveBinarySearch();

    bool search(std::vector<int>, int);

    int binarySearch(vector<int> array, int start, int end, int target);



};


#endif //CMAKE_CLION_CONAN_TEMPLATE_RECURSIVEBINARYSEARCH_H
