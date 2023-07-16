#include "stack.h"

CStack* CStack::s_pSingleton = nullptr;

CStack& CStack::GetInstance()
{
    if (s_pSingleton == nullptr)
    {
        s_pSingleton = new CStack;
    }

    return *s_pSingleton;
}

void CStack::Push(float _Value)
{
    if (m_Size > (m_Capacity * 0.75))
    {
        Resize(m_Capacity * 2);
    }

    m_Array[m_Size] = _Value;
    m_Size++;
}

float CStack::Pop()
{
    if (m_Size > 0)
    {
        m_Size--;

        float RetunfValue = m_Array[m_Size];
        m_Array[m_Size] = 0.0f;

        return RetunfValue;        
    }

    return 0.0f;
}

int CStack::GetSize()
{
    return m_Size;
}

int CStack::GetCapasity()
{
    return m_Capacity;
}

CStack::CStack()
    :m_Size(0)
    ,m_Capacity(10)
    ,m_Array(new float[10])
{
}

void CStack::Resize(int _NewSize)
{
    if (_NewSize > m_Capacity)
    {
        float* TempArray = new float[_NewSize];
        for (int Index = 0; Index < m_Size; Index++)
        {
            TempArray[Index] = m_Array[Index];
        }

        delete[] m_Array;

        m_Array = TempArray;
        m_Capacity = _NewSize;
    }
}

CStack::CStack(const CStack& _rOther)
    :m_Size(_rOther.m_Size)
    ,m_Capacity(_rOther.m_Capacity)
    ,m_Array(nullptr)
{
    m_Array = new float[_rOther.m_Capacity];
    for (int Index = 0; Index < m_Size; Index++)
    {
        m_Array[Index] = _rOther.m_Array[Index];
    }
}

CStack& CStack::operator=(const CStack& _rOther)
{
    float* TempArray = new float[_rOther.m_Capacity];
    for (int Index = 0; Index < _rOther.m_Size; Index++)
    {
        TempArray[Index] = _rOther.m_Array[Index];
    }

    delete[] m_Array;

    m_Array = TempArray;
    m_Size = _rOther.m_Size;
    m_Capacity = _rOther.m_Capacity;

    return *this;
}
