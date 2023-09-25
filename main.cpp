#include <iostream>
#include<cstdlib>
#include "Matriz.h"
#include "Mosca.h"
#include "Jugador.h"
using namespace std;

int main(){
	
	//se que tengo un error porque esoty declarando todas las funciones dentro de la clase y esta luego no me permite usar estas mismas dentro de otras clases
	//por ejemplo está aqui el mosquita.Mover, y el set del mosca que luego no me deja utilizar fuera. se que tiene que ver cuando declaras las funciones como Mosca::Mover
	//no logré resolver el problema, pero mi lógica estaba buena, o eso creo. lo que me faltaba era terminar el codigo en la condicion de ganar del juego.
	Mosca mosquita();
	mosquita.Mover(50,50,50);
	
	/* // Dentro del main lo unico que iba a haber era esto
	
	Juego play();
	
	*/
	return 0;
}