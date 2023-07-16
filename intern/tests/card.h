
#pragma once

class CCard
{
	public:

		enum ECardType : int
		{
			_7,
			_8,
			_9,
			_10,
			BUBE,
			DAME,
			KING,
			ASS
		};

		enum ECardColor : int
		{
			KARO,
			HERZ,
			PIK,
			KREUZ,
		};

		// KARO
		static const CCard& Get_7Karo();
		static const CCard& Get_8Karo();
		static const CCard& Get_9Karo();
		static const CCard& Get_10Karo();
		static const CCard& GetBubeKaro();
		static const CCard& GetDameKaro();
		static const CCard& GetKingKaro();
		static const CCard& Get_AssKaro();

		// HERZ
		static const CCard& Get_7Herz();
		static const CCard& Get_8Herz();
		static const CCard& Get_9Herz();
		static const CCard& Get_10Herz();
		static const CCard& GetBubeHerz();
		static const CCard& GetDameHerz();
		static const CCard& GetKingHerz();
		static const CCard& Get_AssHerz();

		// PIK
		static const CCard& Get_7Pik();
		static const CCard& Get_8Pik();
		static const CCard& Get_9Pik();
		static const CCard& Get_10Pik();
		static const CCard& GetBubePik();
		static const CCard& GetDamePik();
		static const CCard& GetKingPik();
		static const CCard& Get_AssPik();

		// KREUZ Kreuz
		static const CCard& Get_7Kreuz();
		static const CCard& Get_8Kreuz();
		static const CCard& Get_9Kreuz();
		static const CCard& Get_10Kreuz();
		static const CCard& GetBubeKreuz();
		static const CCard& GetDameKreuz();
		static const CCard& GetKingKreuz();
		static const CCard& Get_AssKreuz();

	private:

		ECardColor m_Color;
		ECardType  m_Type;

	private:

		CCard(ECardColor _Color, ECardType _Type);
};