//Aufgabe 1:
//A);
//Failure Transparency: Zustandskonsitenz, keine Seiteneffekte, keine Memory Leaks
//						Throw dringt nicht nach au�en
//Strong Exception Safety:  Zustandskonsitenz, keine Seiteneffekte, keine Memory Leaks
//Basic Exception Safety:   Zustandskonsitenz, keine Memory Leaks
//Minimal Exception Safety: Transparency: keine Memory Leaks
//B)
//Bei einem Blackboxtest ist die innere Funktionsweise nicht bekannt, somit kann das Ergebnis nur von der EIngabe abgeleitet werden.
//Diese Eingaben und Ergebnisse m�ssen in einer Spezifikation/Dokumetation festgeschrieben sein.
//Bei einem Whiteboxtest ist die innere Funktionsweise bekannt.

//Aufgabe 2
//A)
//Asserts werfen fehler aus und halten das Programm an beziehungsweise k�nnen es beenden, wohingegen if-Anweisungen versuchen den Fehler
//zu korrigieren und den weiteren ablauf des Programmes nicht zu gef�rden.
//B)
//if-Anweisung -> da das Programm weiterhin f�r den Kunden Nutzbar sein soll.
//C)

#include <assert.h>

char g_Name[256];
int GetHashValue(const char* _pName)
{
	int NumberOfChars = 0;
	assert(_pName != nullptr);
	while (_pName[NumberOfChars] != '\0')
	{
		assert(NumberOfChars < 256);
		g_Name[NumberOfChars] = _pName[NumberOfChars];
		++NumberOfChars;
	}

	assert(NumberOfChars != 0);
	return 4096 / NumberOfChars;
}
