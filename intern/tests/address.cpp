#include "address.h"
#include <string.h>
#include <assert.h>

SAddress::SAddress()
    :m_pStreet(nullptr)
    ,m_pCity(nullptr)
    ,m_HouseNumber(0)
    ,m_Postalcode(0)
{
}

SAddress& SAddress::operator=(const SAddress& _rOther)
{
    assert(_rOther.m_pStreet != nullptr);
    assert(_rOther.m_pCity != nullptr);

    int NumberOfChars = 0;
    char* pStreet = nullptr;
    char* pCity = nullptr;

    NumberOfChars = strlen(_rOther.m_pStreet);
    pStreet = new char[NumberOfChars + 1];
    strcpy_s(pStreet, NumberOfChars + 1, _rOther.m_pStreet);

    try
    {
        NumberOfChars = strlen(_rOther.m_pCity);
        pCity = new char[NumberOfChars + 1];
        strcpy_s(pCity, NumberOfChars + 1, _rOther.m_pCity);
    }
    catch (...)
    {
        delete[] pStreet;
        throw;
    }

    delete[] m_pStreet;
    delete[] m_pCity;

    m_pStreet = pStreet;
    m_pCity = pCity;
    m_HouseNumber = _rOther.m_HouseNumber;
    m_Postalcode = _rOther.m_Postalcode;

    return *this;
}
