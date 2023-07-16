
#pragma once

class CStack
{
	public:
		static CStack& GetInstance();
		void Push(float _Value);
		float Pop();
		int GetSize();
		int GetCapasity();

	private:
		static CStack* s_pSingleton;

		float* m_Array;

		int m_Capacity;
		int m_Size;

	private:

		CStack();
		CStack(const CStack& _rOther);;
		CStack& operator = (const CStack& _rOther);

		void Resize(int _NewSize);
};