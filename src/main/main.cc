#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> vect = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    solution.partitioning(vect, 1);
    for(auto x: vect)
    std::cout <<x<<' ';

    return EXIT_SUCCESS;
}