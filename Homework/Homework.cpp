
#include <iostream>
#include <string>


class Animal
{
public:
	
	virtual void Voice()
	{
		std::cout << "";
	}

};

class Dog : public Animal
{
public:
	void Voice() override
	{
		std::cout << "Woof";
	}
};
class Cat : public Animal
{
public:
	void Voice() override
	{
		std::cout << "Meow";
	}
};
class Sheep : public Animal
{
public:
	void Voice() override
	{
		std::cout << "Beeee";
	}
};
int main() {

	
	const int size = 3;
	Animal* arr[size];
	arr[0] = new Dog();
	arr[1] = new Cat();
	arr[2] = new Sheep();
	for (int i = 0; i < sizeof(arr) / sizeof(Animal); i++)
	{
		arr[i]->Voice();
		
	}
	
}


