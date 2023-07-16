
#pragma once
#include <string>


class CPrinter
{
	public:
		static CPrinter& GetInstance();

	public:
		void Print(std::string& _rText);

	private:
		CPrinter();

	private:
		static CPrinter* s_pSingleton;

};