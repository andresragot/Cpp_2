#include "Matriz.h"
#include <iostream>
using namespace std;

Matriz::Matriz()
{
	cout << "Para crear una matriz dame su ancho es metros" << endl;
	string _x;
	cin >> _x;
	
	
	cout << endl << "dame ahora su altura en metros" << endl;
	string _y;
	cin >> _y;
	
	cout << endl << "dame ahora su profundidad en metros" << endl;
	string _z;
	cin >> _z;
	
	x = stoi(_x)*10;
	y = stoi(_y)*10;
	z = stoi(_z)*10;
}

Matriz::Matriz(int _x, int _y, int _z) : x{_x}, y{_y}, z{_z} {}

int Matriz::get_x() const {return x;}
int Matriz::get_y() const {return y;}
int Matriz::get_z() const {return z;}
