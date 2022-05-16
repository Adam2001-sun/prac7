//
// Created by Sun Haoxian on 16/5/22.
//

#ifndef CMAKE_CLION_CONAN_TEMPLATE_SORT_H
#define CMAKE_CLION_CONAN_TEMPLATE_SORT_H


#include <vector>
using namespace std;

class Sort{
public:

    virtual std::vector<int> sort(std::vector<int> list) = 0;

    virtual void sort() = 0; // pure vartual function
    virtual void print() = 0;
    virtual vector<int> getList() = 0;
    virtual void setList(vector<int> array) = 0;
};


#endif //CMAKE_CLION_CONAN_TEMPLATE_SORT_H
