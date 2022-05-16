//
// Created by Sun Haoxian on 16/5/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_QUICKSORT_H
#define CMAKE_CLION_CONAN_TEMPLATE_QUICKSORT_H

#include"Sort.h"

class QuickSort: public Sort {
public:
    QuickSort();
    std::vector<int> sort(std::vector<int> list) override;

};


#endif //CMAKE_CLION_CONAN_TEMPLATE_QUICKSORT_H
