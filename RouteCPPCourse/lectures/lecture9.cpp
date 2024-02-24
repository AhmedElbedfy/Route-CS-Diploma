#include <iostream>
#include <string>


using namespace std;

/*
lecture notes:
	Polymorphism:
		1- Pointer to parent.
		2- Virtual.
		3- function (method) overwriting.

	abstract class have at least 1 pure virtual function
	interfaces all it's functions is pure virtual function

	search deeop copy vs shallow copy

	operator overloading
*/

class Animal {
protected:
	int threatLevel;
public:
	int getThreatLevel() {
		return threatLevel;
	}
	virtual void makeSound() = 0;

};

class Lion : public Animal {
public:
	Lion() {
		threatLevel = 9;
	}
	void makeSound() {
		cout << "R-OH-AH!" << endl;
	}
};

class Dog : public Animal {
public:
	Dog() {
		threatLevel = 3;
	}
	void makeSound() {
		cout << "WOOF!" << endl;
	}
};

void printHelloAnimal(Animal *a) {
	cout << "hello " << endl;

	if (a->getThreatLevel() < 5) {
		cout << "pet" << endl;
	}
	a->makeSound();
	cout << endl;

}

class Point {
	int x;
	int y;

public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	Point operator*(const Point &p) {
		//x = x * p.x;
		//y = y * p.y;
		return Point((x * p.x), (y * p.y));
		//return *this;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void printXY() {
		cout << x << " " << y << endl;
	}
};



int main()
{
	Animal *simba = new Lion;
	Animal *max = new Dog;

	printHelloAnimal(simba);

	printHelloAnimal(max);

	delete simba;
	delete max;

	Point p1(2, 2);
	Point p2(2, 2);

	Point p3 = p1 * p2;

	p3.printXY();

	return 0;
}