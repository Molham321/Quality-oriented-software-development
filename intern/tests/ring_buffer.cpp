#include "ring_buffer.h"
#include <cassert>

CRingbuffer::CRingbuffer()
    :m_Size(0)
    ,m_ReadIndex(0)
    ,m_WriteIndex(0)
    ,m_Tasks{nullptr}
{
}

void CRingbuffer::Clear()
{
    while (!IsEmpty())
    {
        Read();
    }

    m_ReadIndex = 0;
    m_WriteIndex = 0;
    m_Size = 0;
}

void CRingbuffer::Write(CTask* _pTask)
{
    assert(!IsFull());

    m_Tasks[m_WriteIndex] = _pTask;

    m_WriteIndex = (m_WriteIndex + 1) % s_MaxNumberOfTask;
    m_Size++;
}

CTask* CRingbuffer::Read()
{
    assert(!IsEmpty());

    CTask* pTask = m_Tasks[m_ReadIndex];
    m_Tasks[m_ReadIndex] = nullptr;

    m_ReadIndex = (m_ReadIndex + 1) % s_MaxNumberOfTask;
    m_Size--;

    return pTask;
}

int CRingbuffer::Size()
{
    return m_Size;
}

bool CRingbuffer::IsEmpty()
{
    return m_Size == 0;
}

bool CRingbuffer::IsFull()
{
    return m_Size == s_MaxNumberOfTask;
}
