



#include <iostream>
#include <cmath>

class Vector {
public:
	Vector() : x(0), y(0), z(0)
	{}
	Vector(double _x,double _y,double _z) : x(_x),y(_y),z(_z)
	{}
	void ShowData()
	{
		std::cout << x << ' ' << y << ' ' << z;
	}
	int getModule()
	{
		return sqrt(pow(x,2)+ pow(y, 2)+ pow(z, 2));
	}
private:
	double x = 0;
	double y = 0;
	double z = 0;
};






int main()
{
	Vector vec(10,10,10);
	vec.ShowData();
	std::cout << vec.getModule();
}
