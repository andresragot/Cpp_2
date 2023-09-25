#pragma one

class Jugador{
	
	private:
		int x, y, z;
		
	public:
		int get_x()const;
		int get_y()const;
		int get_z()const;
		
		Jugador();
		
		bool Atrapar(int probabilidad);
		
		template<typename T>
		bool operator == (T) const;
};
