#include "Mosca.h"
#include <iostream>
#include<cstdlib>
#include<time.h>

Mosca::Mosca() : x{0}, y{0}, z{0}{}

Mosca::Mosca(int _x, int _y, int _z) : x{0}, y{0}, z{0}{
	Mover(_x, _y, _z);
}

int Mosca::get_x() const {return x;}
int Mosca::get_y() const {return y;}
int Mosca::get_z() const {return z;}

Mosca& Mosca::set(const int _x,const int _y, const int _z) {
	this->x = _x;
	this->y = _y;
	this->z = _z;
	return *this;
}

void Mosca::Mover(int m_x, int m_y, int m_z){
	srand((unsigned) time(NULL));
	const int a = rand() % (m_x+1);
	const int b = rand() % (m_x+1);
	const int c = rand() % (m_x+1);
	 
	set(a,b,c);
	std::cout << get_x() << get_y() <<get_z();
}