
#include "unittest/ut_suite.h"

#include <iostream>

void main()
{
    UT::Suite::Reset(&std::cout);
    UT::Suite::RunTests();
}
