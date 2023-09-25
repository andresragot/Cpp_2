#include "Juego.h"



Juego::Juego(){
	//tampoco supe como declarar clases dentro de un constructor cuando ya la variable la tenemos en el header.
	this-> m1();
	Mosca mosqui(m1.get_x(), m1.get_y(), m1.get_z());
	Jugador player();
	Jugar();
}

void Juego::Jugar(){
	//aqui va la condicion de ganar que si la logra agarrar a o no y adentro se verifica si estan en la misma posicion
	/*while(booleano dependiendo del player atrapada){
	verificar si estan en la misma posisicion,
	correr el atrapar del player y darle el nuevo valor a el booleano de arriba.
	}
	*/
}