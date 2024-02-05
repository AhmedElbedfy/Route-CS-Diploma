#include <iostream>
#include <string>


using namespace std;

class Circle {
private:
	double radius;
	string color;

public:
	Circle() {
		radius = 1;
		color = "red";
	}
	Circle(double r) {
		radius = r;
	}
	Circle(double r, string c) {
		radius = r;
		color = c;
	}
	
	double getRadius() {
		return radius;
	}
	string getColor() {
		return color;
	}

	void setRadius(double r) {
		radius = r;
	}

	void setColor(string c) {
		color = c;
	}

	double getArea() {
		double pi = 3.14159265358979323846;
		return pi * pow(radius, 2);
	}
};

class Employee {
private: 
	int id;
	string firstName;
	string lastName;
	int salary;
public:
	Employee(int i, string fName, string lName, int s) {
		id = i;
		firstName = fName;
		lastName = lName;
		salary = s;
	}

	int getId() {
		return id;
	}

	string getFirstName() {
		return firstName;
	}

	string getLastName() {
		return lastName;
	}

	string getName() {
		return firstName + " " + lastName;
	}

	int getSalary() {
		return salary;
	}

	void setSalary(int s) {
		salary = s;
	}

	int getAnnualSalary() {
		return salary * 12;
	}

	int raiseSalary(int precent) {
		salary += salary * (precent / 100.0);
		return salary;
	}
};



int main()
{
	// first Class Circle
	Circle c1;
	cout << c1.getRadius() << endl;
	cout << c1.getColor() << endl;
	cout << c1.getArea() << endl;
	Circle c2(15, "black");
	cout << c2.getRadius() << endl;
	cout << c2.getColor() << endl;
	cout << c2.getArea() << endl;

	// Secound Class Circle
	Employee emp1(1, "Ahmed", "Khaled", 1000);
	cout << emp1.getId() << endl;
	cout << emp1.getFirstName() << endl;
	cout << emp1.getLastName() << endl;
	cout << emp1.getName() << endl;
	cout << emp1.getSalary() << endl;
	cout << emp1.getAnnualSalary() << endl;

	cout << emp1.raiseSalary(10) << endl;

	emp1.setSalary(1200);

	cout << emp1.getSalary() << endl;

	




	return 0;
}