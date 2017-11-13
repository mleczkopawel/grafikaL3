#include "Okno.h"


Okno::Okno()
{
	wysokoscOkna = 768;
	szerokoscOkna = 1024;
	polozenieOknaX = 100;
	polozenieOknaY = 100;
}

Okno::Okno(int wysokoscOkna, int szerokoscOkna, int polozenieOknaX, int polozenieOknaY) {
	this->wysokoscOkna = wysokoscOkna;
	this->szerokoscOkna = szerokoscOkna;
	this->polozenieOknaX = polozenieOknaX;
	this->polozenieOknaY = polozenieOknaY;
}

void Okno::stworzenieOkna(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplay(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWidnowSize(1024, 168);
	glutInitWindowPosition(100, 100);
	glitCreateWindow("okno");
}

void Okno::wyswietl() {
	glClear(CL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

Okno::~Okno()
{
}
