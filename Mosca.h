#pragma one
class Mosca{
	
	private:
		int x,y,z;
		
	public:
		int get_x()const;
		int get_y()const;
		int get_z()const;
		
		Mosca& set(const int _x, const int _y, const int _z);
		
		Mosca();
		Mosca(int _x, int _y, int _z);
		
		void Mover(int m_x, int m_y, int m_z);
		
		
		
	
};