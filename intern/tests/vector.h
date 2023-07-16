
#pragma once

class CVector
{
	public:

		CVector();
		~CVector();

	public:

		void Insert(int _Position, int _Value);
		int RemoveAt(int _Position);
		void Resize(int _NewSize);

		void PushBack(int _Value);
		int PopBack();

		void PushFront(int _Value);
		int PopFront();

	private:
		
		int m_Capacity;
		int m_Size;

		int* m_pVactor;

};
