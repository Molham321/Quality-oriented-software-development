
#pragma once

class CChessFigure
{
	public:

		enum EFigureType : int
		{
			LADY,
			KING,
			KNIGHT,
			BISHOP,
			ROOK,
			PAWN
		};

		enum EColor : int
		{
			WHITE,
			BLACK
		};

	public:

		//WHITE
		static const CChessFigure& GetWhiteKing();
		static const CChessFigure& GetWhiteLady();
		static const CChessFigure& GetWhiteKnight();
		static const CChessFigure& GetWhiteBishop();
		static const CChessFigure& GetWhiteRook();
		static const CChessFigure& GetWhitePawn();

		//BLACK
		static const CChessFigure& GetBlackKing();
		static const CChessFigure& GetBlackLady();
		static const CChessFigure& GetBlackKnight();
		static const CChessFigure& GetBlackBishop();
		static const CChessFigure& GetBlackRook();
		static const CChessFigure& GetBlackPawn();


	private:
		EColor m_ColorType;
		EFigureType m_FigureType;

	private:
		CChessFigure(EColor _Color, EFigureType _FigureType);
};