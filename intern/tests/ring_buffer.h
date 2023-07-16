
#pragma once

class CTask;

class CRingbuffer
{
	public:

		CRingbuffer();

	public:
		void Clear();
		void Write(CTask* _pTask);

		CTask* Read();
		int Size();

		bool IsEmpty();
		bool IsFull();

	private:

		static constexpr int s_MaxNumberOfTask = 8;

		CTask* m_Tasks[s_MaxNumberOfTask];

		int m_ReadIndex;
		int m_WriteIndex;
		int m_Size;

};