#include "card.h"


CCard::CCard(ECardColor _Color, ECardType _Type)
    :m_Color(_Color)
    ,m_Type(_Type)
{
}

const CCard& CCard::Get_7Karo()
{
    return CCard(CCard::KARO, CCard::_7);
}

const CCard& CCard::Get_8Karo()
{
    return CCard(CCard::KARO, CCard::_8);
}

const CCard& CCard::Get_9Karo()
{
    return CCard(CCard::KARO, CCard::_9);
}

const CCard& CCard::Get_10Karo()
{
    return CCard(CCard::KARO, CCard::_10);
}

const CCard& CCard::GetBubeKaro()
{
    return CCard(CCard::KARO, CCard::BUBE);
}

const CCard& CCard::GetDameKaro()
{
    return CCard(CCard::KARO, CCard::DAME);
}

const CCard& CCard::GetKingKaro()
{
    return CCard(CCard::KARO, CCard::KING);
}

const CCard& CCard::Get_AssKaro()
{
    return CCard(CCard::KARO, CCard::ASS);
}

const CCard& CCard::Get_7Herz()
{
    return CCard(CCard::HERZ, CCard::_7);
}

const CCard& CCard::Get_8Herz()
{
    return CCard(CCard::HERZ, CCard::_8);
}

const CCard& CCard::Get_9Herz()
{
    return CCard(CCard::HERZ, CCard::_9);
}

const CCard& CCard::Get_10Herz()
{
    return CCard(CCard::HERZ, CCard::_10);
}

const CCard& CCard::GetBubeHerz()
{
    return CCard(CCard::HERZ, CCard::BUBE);
}

const CCard& CCard::GetDameHerz()
{
    return CCard(CCard::HERZ, CCard::DAME);
}

const CCard& CCard::GetKingHerz()
{
    return CCard(CCard::HERZ, CCard::KING);
}

const CCard& CCard::Get_AssHerz()
{
    return CCard(CCard::HERZ, CCard::ASS);
}

const CCard& CCard::Get_7Pik()
{
    return CCard(CCard::PIK, CCard::_7);
}

const CCard& CCard::Get_8Pik()
{
    return CCard(CCard::PIK, CCard::_8);
}

const CCard& CCard::Get_9Pik()
{
    return CCard(CCard::PIK, CCard::_9);
}

const CCard& CCard::Get_10Pik()
{
    return CCard(CCard::PIK, CCard::_10);
}

const CCard& CCard::GetBubePik()
{
    return CCard(CCard::PIK, CCard::BUBE);
}

const CCard& CCard::GetDamePik()
{
    return CCard(CCard::PIK, CCard::DAME);
}

const CCard& CCard::GetKingPik()
{
    return CCard(CCard::PIK, CCard::KING);
}

const CCard& CCard::Get_AssPik()
{
    return CCard(CCard::PIK, CCard::ASS);
}

const CCard& CCard::Get_7Kreuz()
{
    return CCard(CCard::KREUZ, CCard::_7);
}

const CCard& CCard::Get_8Kreuz()
{
    return CCard(CCard::KREUZ, CCard::_8);
}

const CCard& CCard::Get_9Kreuz()
{
    return CCard(CCard::KREUZ, CCard::_9);
}

const CCard& CCard::Get_10Kreuz()
{
    return CCard(CCard::KREUZ, CCard::_10);
}

const CCard& CCard::GetBubeKreuz()
{
    return CCard(CCard::KREUZ, CCard::BUBE);
}

const CCard& CCard::GetDameKreuz()
{
    return CCard(CCard::KREUZ, CCard::DAME);
}

const CCard& CCard::GetKingKreuz()
{
    return CCard(CCard::KREUZ, CCard::KING);
}

const CCard& CCard::Get_AssKreuz()
{
    return CCard(CCard::KREUZ, CCard::ASS);
}
