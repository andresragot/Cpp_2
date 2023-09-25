#pragma one
#include "Matriz.h"
#include "Mosca.h"
#include "Jugador.h"
class Juego{
	
	public:
		Juego();
		void Jugar();
		
	private:
		Matriz m1;
		Mosca mosqui;
		Jugador player;
	
};