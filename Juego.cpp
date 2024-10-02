#include "Juego.h"



Juego::Juego()
{
	this-> m1();
	Mosca mosqui(m1.get_x(), m1.get_y(), m1.get_z());
	Jugador player();
	Jugar();
}

void Juego::Jugar()
{
	
}
