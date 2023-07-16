
#include "vector.h"

CVector::CVector()
    :m_Capacity(10)
    ,m_Size(0)
    ,m_pVactor{new int[m_Capacity]}
{
}

CVector::~CVector()
{
    delete[] m_pVactor;
}

void CVector::Insert(int _Position, int _Value)
{
    if (m_Size > m_Capacity * 0.75)
    {
        Resize(m_Capacity * 2);
    }

    for (int Index = m_Size; Index >= _Position; --Index)
    {
        m_pVactor[Index + 1] = m_pVactor[Index];
    }

    m_Size++;

    m_pVactor[_Position] = _Value;
}

int CVector::RemoveAt(int _Position)
{
    int ReturnValue = m_pVactor[_Position];
     
    for (int Index = _Position; Index < m_Size; Index++)
    {
        m_pVactor[Index] = m_pVactor[Index + 1];
    }
    m_Size--;

    return ReturnValue;
}

void CVector::Resize(int _NewSize)
{
    if (_NewSize > m_Capacity)
    {
        int* TempVector = new int[_NewSize];

        for (int Index = 0; Index < m_Size; Index++)
        {
            TempVector[Index] = m_pVactor[Index];
        }
        delete[] m_pVactor;

        m_pVactor = TempVector;
        m_Capacity = _NewSize;
    }
}

void CVector::PushBack(int _Value)
{
    if (m_Size > m_Capacity * 0.75)
    {
        Resize(m_Capacity * 2);
    }

    m_pVactor[m_Size] = _Value;
    m_Size++;
}

int CVector::PopBack()
{
    m_Size--;
    int ReturnValue = m_pVactor[m_Size];

    return ReturnValue;
}

void CVector::PushFront(int _Value)
{
    Insert(0, _Value);
}

int CVector::PopFront()
{
    return RemoveAt(0);
}
