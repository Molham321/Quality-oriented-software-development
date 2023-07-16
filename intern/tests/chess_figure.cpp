#include "chess_figure.h"

const CChessFigure& CChessFigure::GetWhiteKing()
{
    return CChessFigure(CChessFigure::WHITE, CChessFigure::KING);
}

const CChessFigure& CChessFigure::GetWhiteLady()
{
    return CChessFigure(CChessFigure::WHITE, CChessFigure::LADY);
}

const CChessFigure& CChessFigure::GetWhiteKnight()
{
    return CChessFigure(CChessFigure::WHITE, CChessFigure::KNIGHT);
}

const CChessFigure& CChessFigure::GetWhiteBishop()
{
    return CChessFigure(CChessFigure::WHITE, CChessFigure::BISHOP);

}

const CChessFigure& CChessFigure::GetWhiteRook()
{
    return CChessFigure(CChessFigure::WHITE, CChessFigure::ROOK);

}

const CChessFigure& CChessFigure::GetWhitePawn()
{
    return CChessFigure(CChessFigure::WHITE, CChessFigure::PAWN);

}

const CChessFigure& CChessFigure::GetBlackKing()
{
    return CChessFigure(CChessFigure::BLACK, CChessFigure::KING);

}

const CChessFigure& CChessFigure::GetBlackLady()
{
    return CChessFigure(CChessFigure::BLACK, CChessFigure::LADY);

}

const CChessFigure& CChessFigure::GetBlackKnight()
{
    return CChessFigure(CChessFigure::BLACK, CChessFigure::KNIGHT);

}

const CChessFigure& CChessFigure::GetBlackBishop()
{
    return CChessFigure(CChessFigure::BLACK, CChessFigure::BISHOP);

}

const CChessFigure& CChessFigure::GetBlackRook()
{
    return CChessFigure(CChessFigure::BLACK, CChessFigure::ROOK);

}

const CChessFigure& CChessFigure::GetBlackPawn()
{
    return CChessFigure(CChessFigure::BLACK, CChessFigure::PAWN);
}

CChessFigure::CChessFigure(EColor _Color, EFigureType _FigureType)
    :m_ColorType(_Color)
    ,m_FigureType(_FigureType)
{
}
