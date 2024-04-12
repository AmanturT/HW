



#include <iostream>
#include <vector>

class Vector {
public:
	std::vector <double> vect = { x,y,z };
	int ShowSize() {
		return vect.size();
	}
private:
	double x = 0;
	double y = 0;
	double z = 0;
};






int main()
{
	Vector temp;
	std::cout << temp.ShowSize();
	
}
