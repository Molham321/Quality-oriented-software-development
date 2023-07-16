
#pragma once

#include "card.h"

class CCardFactory
{
	public:
		CCardFactory();
		~CCardFactory();

		CCard CreateCard(CCard::ECardColor _Color, CCard::ECardType _Type);

};
