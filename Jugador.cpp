#include "Jugador.h"
#include<cstdlib>
#include<time.h>

Jugador::Jugador() : x{0}, y{0}, z{0} {}

int Jugador::get_x() const {return x;}
int Jugador::get_y() const {return y;}
int Jugador::get_z() const {return z;}

bool Jugador::Atrapar(int probabilidad){
	srand((unsigned) time(NULL));
	return (rand() % 101) <= probabilidad;
}

template <typename T>
bool Jugador::operator == (T mosca) const{
	return mosca.get_x() == get_x() && 
		mosca.get_y() == get_y() && 
		mosca.get_z() == get_z(); 
}