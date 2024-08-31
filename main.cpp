#include <iostream>
#include "src/stats/multiply.h"


int main()
{
    const int res = stats::multiply(3, 5);

    std::cout << res << std::endl;

    return 0;
}