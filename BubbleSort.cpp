//
// Created by Sun Haoxian on 16/5/22.
//

#include "BubbleSort.h"

BubbleSort::BubbleSort()= default;

std::vector<int> BubbleSort::sort (std::vector<int> list) {
    bool switch_number = true;

    while(switch_number) {
        switch_number = false;
        for (int i = 0; i < list.size()-1; i++)
        {
            if (list[i]> list[i+1] )
            {
                // 3 1 2 3 4 5

                list[i] += list [i+1];
                list[i+1] = list[i] - list[i+1];
                list[i] -= list[i+1];

                switch_number = true;
            }
        }
    }
            return list;
}

