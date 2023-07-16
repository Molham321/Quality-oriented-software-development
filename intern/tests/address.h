
#pragma once

struct SAddress
{
	SAddress();

	char* m_pCity;
	char* m_pStreet;

	int m_HouseNumber;
	int m_Postalcode;

	SAddress& operator = (const SAddress& _rOther);
};
