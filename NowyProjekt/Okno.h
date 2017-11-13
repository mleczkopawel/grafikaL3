#ifndef OKNO_H
#define OKNO_H

#include <gl\GL.h>

class Okno
{
private:
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

