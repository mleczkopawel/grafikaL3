#include "Okno.h"


Okno::Okno()
{
	wysokoscOkna = 768;
	szerokoscOkna = 1024;
	polozenieOknaX = 100;
	polozenieOknaY = 100;
}

int main(int argc, char** argv) {
	Okno::wyswietl();
}

Okno::Okno(int wysokoscOkna, int szerokoscOkna, int polozenieOknaX, int polozenieOknaY) {
	this->wysokoscOkna = wysokoscOkna;
	this->szerokoscOkna = szerokoscOkna;
	this->polozenieOknaX = polozenieOknaX;
	this->polozenieOknaY = polozenieOknaY;
}

void Okno::stworzenieOkna(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(1024, 168);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("okno");
}

void Okno::wyswietl() {
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

Okno::~Okno()
{
}
