#include "DoubleLinkedList.h"

CDoubleLinkedList::CDoubleLinkedList()
    :m_Count(0)
    ,m_pFirstNode(nullptr)
    ,m_pLastNode(nullptr)
{

}

void CDoubleLinkedList::PushBack(int _Value)
{
    SNode* newNode = new SNode;

    newNode->m_pNext = nullptr;
    newNode->m_pPrevious = m_pLastNode;
    newNode->m_Value = _Value;

    if (m_Count == 0)
    {
        m_pFirstNode = newNode;
        m_pLastNode = newNode;
    }
    else
    {
        m_pLastNode->m_pNext = newNode;
        m_pLastNode = newNode;
    }

    m_Count++;
}

void CDoubleLinkedList::PopBack()
{
    if (m_Count != 0)
    {
        SNode* newLast = m_pLastNode->m_pPrevious;

        delete m_pLastNode;

        m_pLastNode = newLast;
        m_pLastNode->m_pNext = nullptr;

        m_Count--;
    }
}

int CDoubleLinkedList::GetFront()
{
    return m_pFirstNode->m_Value;
}

bool CDoubleLinkedList::IsEmpty()
{
    return m_Count == 0;
}

int CDoubleLinkedList::GetElementCount()
{
    return m_Count;
}
