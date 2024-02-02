#include <iostream>
#include <string>

using namespace std;

/*
	Lecture Number: 6

	About:
	( OOP )

	Notes:
	1-	Access operator "dot" => "." - JS have also "Brackets notion" => "[]"
	2-	Access modifier (Public - Private - hide )
	3-	Getters and Setters for Private attributes
	4-	differnet between encapsulation and data hiding and protoction.
	5-	constructor have no return type
	6-	constructor without parameter called default constructor
	7-	parametrized constructor
	8-	constructor can be overloaded (parameters number, data type of the parameters, parmaeter order)
	9-	the constructor take the same name as the class
	10- UML Diagram

	OOP Consepts:
	1- Encapsulation
		Benefits: (Modularity - data hiding, validation and protoction)
		Meaning: group similar data into a class

*/

class Animal {
private:
	string name;
	string color;
	int birthYear;

public:
	Animal() {
		name = "Animal Name";
		color = "Black";
		birthYear = 2020;
	}
	Animal(string n, string c, int y) {
		name = n;
		color = c;
		birthYear = y;
	}

	~Animal() {
		cout << "Dead. ";
	}

	void setName(string input) {
		name = input;
	}
	void setColor(string input) {
		color = input;
	}
	bool setBirthYear(int input) {
		if (input >= 1990) {
			birthYear = input;
			return false;
		}
		else {
			return true;
		}

	}

	string getName() {
		return name;
	}
	string getColor() {
		return color;
	}
	int getBirthYear() {
		return birthYear;
	}

	int calculateAge() {
		return 2024 - birthYear;
	}

	void printAttributes() {
		cout << name << " " << color << " " << calculateAge() << endl;
	}
};


void birthYearInputValidation(Animal &obj) {
	int input;
	do {
		cout << "Please Enter a valid yaer (greater than or equal to 1990): ";
		cin >> input;
	} while (obj.setBirthYear(input));
}

int main()
{
	Animal cat1;

	cat1.setName("Kitty");
	cat1.setColor("Black");
	birthYearInputValidation(cat1);
	//cat1.setBirthYear(1981);

	cat1.printAttributes();


	Animal cat2, cat3("KittyKitty", "White", 2021);

	cat2.printAttributes();
	cat3.printAttributes();

	return 0;
}