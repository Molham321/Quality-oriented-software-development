#include "card_factory.h"

CCardFactory::CCardFactory()
{
}

CCardFactory::~CCardFactory()
{
}

CCard CCardFactory::CreateCard(CCard::ECardColor _Color, CCard::ECardType _Type)
{
	switch (_Color)
	{
	case CCard::KARO:
		switch (_Type)
		{
		case CCard::_7:
			return CCard::Get_7Karo();
		case CCard::_8:
			return CCard::Get_8Karo();
		case CCard::_9:
			return CCard::Get_9Karo();
		case CCard::_10:
			return CCard::Get_10Karo();
		case CCard::BUBE:
			return CCard::GetBubeKaro();
		case CCard::DAME:
			return CCard::GetDameKaro();
		case CCard::KING:
			return CCard::GetKingKaro();
		case CCard::ASS:
			return CCard::Get_AssKaro();
		}
	case CCard::HERZ:
		switch (_Type)
		{
		case CCard::_7:
			return CCard::Get_7Herz();
		case CCard::_8:
			return CCard::Get_8Herz();
		case CCard::_9:
			return CCard::Get_9Herz();
		case CCard::_10:
			return CCard::Get_10Herz();
		case CCard::BUBE:
			return CCard::GetBubeHerz();
		case CCard::DAME:
			return CCard::GetDameHerz();
		case CCard::KING:
			return CCard::GetKingHerz();
		case CCard::ASS:
			return CCard::Get_AssHerz();
		}
	case CCard::PIK:
		switch (_Type)
		{
		case CCard::_7:
			return CCard::Get_7Pik();
		case CCard::_8:
			return CCard::Get_8Pik();
		case CCard::_9:
			return CCard::Get_9Pik();
		case CCard::_10:
			return CCard::Get_10Pik();
		case CCard::BUBE:
			return CCard::GetBubePik();
		case CCard::DAME:
			return CCard::GetDamePik();
		case CCard::KING:
			return CCard::GetKingPik();
		case CCard::ASS:
			return CCard::Get_AssPik();
		}
	case CCard::KREUZ:
		switch (_Type)
		{
		case CCard::_7:
			return CCard::Get_7Kreuz();
		case CCard::_8:
			return CCard::Get_8Kreuz();
		case CCard::_9:
			return CCard::Get_9Kreuz();
		case CCard::_10:
			return CCard::Get_10Kreuz();
		case CCard::BUBE:
			return CCard::GetBubeKreuz();
		case CCard::DAME:
			return CCard::GetDameKreuz();
		case CCard::KING:
			return CCard::GetKingKreuz();
		case CCard::ASS:
			return CCard::Get_AssKreuz();
		}
	}
}
