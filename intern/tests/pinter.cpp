
#include "pinter.h"

#include <iostream>

CPrinter* CPrinter::s_pSingleton = nullptr;

CPrinter& CPrinter::GetInstance()
{
    if (s_pSingleton == nullptr)
    {
        s_pSingleton = new CPrinter;
    }

    return *s_pSingleton;
}

void CPrinter::Print(std::string& _rText)
{
    std::cout << _rText << std::endl;
}

CPrinter::CPrinter()
{
}
