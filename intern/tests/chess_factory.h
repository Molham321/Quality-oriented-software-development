
#pragma once

#include "chess_figure.h"

class CChessFactory
{
	public:
		CChessFactory();
		~CChessFactory();

	public:
		CChessFigure CreateFigure(CChessFigure::EColor _Color, CChessFigure::EFigureType _Type);

};