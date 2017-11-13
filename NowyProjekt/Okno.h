#ifndef OKNO_H
#define OKNO_H

#include <gl/freeglit.h>

#pragma once
class Okno
{

	static int wysokoscOkna;
	static int szerokoscOkna;
	int polozenieOknaX;
	int polozenieOknaY;

public:
	Okno();
	Okno(void);
	Okno(int wysokoscOkna, int szerokoscOkna, int polozenieOknaX, int polozenieOknaY);
	~Okno();
	~Okno(void);

	void stworzenieOkna(int argc, char** argv);
	static void wyswietl();
};
#endif //OKNO_H

