//
// Created by Sun Haoxian on 16/5/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_BUBBLESORT_H
#define CMAKE_CLION_CONAN_TEMPLATE_BUBBLESORT_H

#include"Sort.h"

class BubbleSort: public Sort {

public:
    BubbleSort();

    std::vector<int> sort(std::vector<int> list) override;

private:
std::vector<int> storage;


};


#endif //CMAKE_CLION_CONAN_TEMPLATE_BUBBLESORT_H
