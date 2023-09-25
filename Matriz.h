#pragma one
class Matriz{
	private:
		int x,y,z;
	
	public:
		int get_x() const;
		int get_y() const;
		int get_z() const;
		
		Matriz();
		Matriz(int _x, int _y, int _z);
};