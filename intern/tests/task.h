
#pragma once

class CTask
{
	public:

		CTask();
		CTask(const CTask& _rOther);

	public:
		CTask& operator = (const CTask& _rOther);

	public:
		unsigned int GetID();
		char* GetCustomer();
		char* GetDescription();

		void SetID(unsigned int _ID);
		void SetCustomer(const char* _pCustomer);
		void SetDescription(const char* _pDescription);


	private:

		unsigned int m_ID;
		char* m_pCustomer;
		char* m_pDescription;

};