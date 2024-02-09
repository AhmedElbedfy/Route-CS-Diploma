#include <iostream>
#include <string>

using namespace std;

/*
	Lecture Number: 7

	About:
	( OOP 2n lect )

	Notes:
	1- concept of "(is a) relationship between classies"
	2- Parent vs child class
	3- Protected can be acess in it's class and child class
	4- Scope resulotion operator "::" example parent::method();
	5- Diff between overwrite and overloaded
	6- Multible inhertance ( 2 Parents or more, 1 child)
		a- Diamond problem when one child have 2 parent thats have the same (methods, or attributes
	7- Multi levels inhertance (gandfather, parent, child)

	OOP Consepts:
	* Inhertance:
		The ability to extends data in the class from other class.


	Notes from Gemini Ai:

	Inheritance in C++

	Inheritance is a fundamental concept in object-oriented programming (OOP)
	that allows you to create new classes (derived classes) based on existing
	classes (base classes), establishing an "is-a" relationship between them.


*/

class Animal {
protected:
	string name;
	string color;
public:
	Animal() {
		name = "lion";
		color = "orange";
	}
	Animal(string n, string c) {
		name = n;
		color = c;
	}

	void printData() {
		cout << name << " " << color << " ";
	}
};

class Lion :public Animal {
private:
	int speed;
public:
	Lion() {
		speed = 0;
	}
	Lion(string n, string c, int s) : Animal(n, c) {
		speed = s;
	}

	void setSpeed(int s) {
		speed = s;
	}

	int getSpeed() {
		return speed;
	}

	void printData() {
		Animal::printData();
		cout << speed << endl;
	}

};

int main()
{

	Lion l1;

	Lion l2("Simba", "white", 12);

	l1.printData();
	l2.printData();


	return 0;
}