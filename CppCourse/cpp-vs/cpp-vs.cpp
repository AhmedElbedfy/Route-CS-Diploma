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


int main()
{
	Circle c1;
	cout << c1.getRadius() << endl;
	cout << c1.getColor() << endl;
	cout << c1.getArea() << endl;
	Circle c2(15, "black");
	cout << c2.getRadius() << endl;
	cout << c2.getColor() << endl;
	cout << c2.getArea() << endl;

	return 0;
}