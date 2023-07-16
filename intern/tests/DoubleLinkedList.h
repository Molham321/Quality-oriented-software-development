
#pragma once

class CDoubleLinkedList
{

	public:
		CDoubleLinkedList();

	public:

		void PushBack(int _Value); //Fügt einen Wert am Ende der Liste ein.
		void PopBack(); //Entfernt den letzten Wert.
		int GetFront(); //Liefert den Wert des ersten Elements
		bool IsEmpty(); //Liefert true, wenn die Liste leer ist, ansonsten false.
		int GetElementCount(); //Liefert die Anzahl der eingefügten Elemente.

	private:

		struct SNode
		{
			int m_Value;
			SNode* m_pPrevious;
			SNode* m_pNext;

		};

	private:

		SNode* m_pFirstNode;
		SNode* m_pLastNode;

		int m_Count;
};