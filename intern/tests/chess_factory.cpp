#include "chess_factory.h"

CChessFactory::CChessFactory()
{
}

CChessFactory::~CChessFactory()
{
}

CChessFigure CChessFactory::CreateFigure(CChessFigure::EColor _Color, CChessFigure::EFigureType _Type)
{
	switch (_Color)
	{
		case CChessFigure::BLACK:
		{
			switch (_Type)
			{
			case CChessFigure::LADY:
				return CChessFigure::GetBlackLady();
			case CChessFigure::KING:
				return CChessFigure::GetBlackKing();
			case CChessFigure::KNIGHT:
				return CChessFigure::GetBlackKnight();
			case CChessFigure::BISHOP:
				return CChessFigure::GetBlackBishop();
			case CChessFigure::ROOK:
				return CChessFigure::GetBlackRook();
			case CChessFigure::PAWN:
				return CChessFigure::GetBlackPawn();
			}
		}
		case CChessFigure::WHITE:
		{
			switch (_Type)
			{
			case CChessFigure::KING:
				return CChessFigure::GetWhiteKing();
			case CChessFigure::LADY:
				return CChessFigure::GetWhiteLady();
			case CChessFigure::KNIGHT:
				return CChessFigure::GetWhiteKnight();
			case CChessFigure::BISHOP:
				return CChessFigure::GetWhiteBishop();
			case CChessFigure::ROOK:
				return CChessFigure::GetWhiteRook();
			case CChessFigure::PAWN:
				return CChessFigure::GetWhitePawn();
			}
		}
	}
}
