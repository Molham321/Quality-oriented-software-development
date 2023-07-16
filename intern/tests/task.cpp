#include "task.h"
#include <string.h>
#include <cassert>

CTask::CTask()
    :m_ID(0)
    ,m_pCustomer(nullptr)
    ,m_pDescription(nullptr)
{
}

CTask::CTask(const CTask& _rOther)
    :m_ID(_rOther.m_ID)
    ,m_pCustomer(nullptr)
    ,m_pDescription(nullptr)
{
    assert(_rOther.m_pCustomer != nullptr);
    assert(_rOther.m_pDescription != nullptr);

    int NumberOfChar = 0;

    NumberOfChar = strlen(_rOther.m_pCustomer);
    m_pCustomer = new char[NumberOfChar + 1];
    strcpy_s(m_pCustomer, NumberOfChar + 1, _rOther.m_pCustomer);

    try
    {
        NumberOfChar = strlen(_rOther.m_pDescription);
        m_pDescription = new char[NumberOfChar + 1];
        strcpy_s(m_pDescription, NumberOfChar + 1, _rOther.m_pDescription);
    }
    catch (...)
    {
        delete[] m_pCustomer;
        throw;
    }
}

CTask& CTask::operator=(const CTask& _rOther)
{
    assert(_rOther.m_pCustomer != nullptr);
    assert(_rOther.m_pDescription != nullptr);

    int NumberOfChar = 0;
    char* pCstomer = nullptr;
    char* pDescription = nullptr;

    NumberOfChar = strlen(_rOther.m_pCustomer);
    pCstomer = new char[NumberOfChar + 1];
    strcpy_s(pCstomer, NumberOfChar + 1, _rOther.m_pCustomer);

    try
    {
        NumberOfChar = strlen(_rOther.m_pDescription);
        pDescription = new char[NumberOfChar + 1];
        strcpy_s(pDescription, NumberOfChar + 1, _rOther.m_pDescription);
    }
    catch (...)
    {
        delete[] m_pCustomer;
        throw;
    }

    delete[] m_pCustomer;
    delete[] m_pDescription;

    m_pCustomer = pCstomer;
    m_pDescription = pDescription;
    m_ID = _rOther.m_ID;

    return *this;
}

unsigned int CTask::GetID()
{
    return m_ID;
}

char* CTask::GetCustomer()
{
    return m_pCustomer;
}


char* CTask::GetDescription()
{
    return m_pDescription;
}

void CTask::SetID(unsigned int _ID)
{
    m_ID = _ID;
}

void CTask::SetCustomer(const char* _pCustomer)
{
    assert(_pCustomer != nullptr);

    int NumberOfChar = strlen(_pCustomer);
    char* pCstomer = new char[NumberOfChar + 1];
    strcpy_s(pCstomer, NumberOfChar + 1, _pCustomer);

    delete[] m_pCustomer;

    m_pCustomer = pCstomer;
}

void CTask::SetDescription(const char* _pDescription)
{
    assert(_pDescription != nullptr);

    int NumberOfChar = strlen(_pDescription);
    char* pDescription = new char[NumberOfChar + 1];
    strcpy_s(pDescription, NumberOfChar + 1, _pDescription);

    delete[] m_pDescription;

    m_pDescription = pDescription;
}
