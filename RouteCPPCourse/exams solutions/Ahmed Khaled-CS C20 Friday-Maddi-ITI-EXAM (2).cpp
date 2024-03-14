#include <iostream>
#include <string>

using namespace std;

/*
			EXAM 2 SOLUTION

	1- What are the four concepts of OOP with short explain?

	[A] Encapsulation:
			It is the bundling of data with the methods that operate on that data, or the restricting of direct access to some of an object's components.
	[B] Polymorphism:
			It is the ability of a function to perform different operations or actions based on the objects that it acts upon.
	[C] Abstraction:
			It is the concept of hiding the complex implementation details and showing only the necessary features of an object.
	[D] Inheritance:
			It is the mechanism by which one class is allowed to inherit the features(fields and methods) of another class.

	2- What is the difference between access modifiers?
	[A] Private:
		The data under the Private modifiers can't be acess any where in the application but the class itself.
	[B] Public:
		The data under the Public modifiers can be acess any where in the application.
	[C] Proteted:
		The data under the Protected modifiers the same as the private but with the abblity to acess it in child classies too.

	3- Write an example for Exception handling.
		line --> 127

	4- Write an example for Template.
		line --> 149

	5- What is the difference between overloading and overriding?
		Overridiing: Is to rewrite a function or variable with same name of already exit function or variable
		Overloading: Is to have multiple functionality with the same function name base on the:
			[A] Type of the parameters
			[B] Order of the parameters
			[C] The number of the parameters

	6- Solve the below problem:
		line --> 155

*/

//	4- Write an example for Template.
//		Solution -->

template <typename type>
type returnMax(type x, type y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}


//	6- Solve the below problem :
//		Solution -->

class Point2D {
	float x;
	float y;
public:
	Point2D() {
		x = 0;
		y = 0;
	}
	Point2D(float x, float y) {
		this->x = x;
		this->y = y;
	}
	float getX() {
		return x;
	}
	float getY() {
		return y;
	}
	float* getXY() {
		float *p = new float[2];
		p[0] = x;
		p[1] = y;
		return p;
	}
	void setX(float x) {
		this->x = x;
	}
	void setY(float y) {
		this->y = y;
	}
	void setXY(float x, float y) {
		this->x = x;
		this->y = y;
	}
};

class Point3D : public Point2D {
	float z;
public:
	Point3D() {
		z = 0;
	}
	Point3D(float x, float y, float z) : Point2D(x, y), z(z) {}
	float getZ() {
		return z;
	}
	void setZ(float z) {
		this->z = z;
	}
	void setXYZ(float x, float y, float z) {
		setXY(x, y);
		setZ(z);
	}
	float* getXYZ() {
		float* p = new float[3];
		p[0] = getX();
		p[1] = getY();
		p[2] = z;
		return p;
	}
};

int main()
{
	// 	3- Write an example for Exception handling.
	//		Solution -->
	cout << "Question number 3: Write an example for Exception handling." << endl;

	try {
		float a, b;
		cout << "Please Enter two numbers to be dvided: " << endl;
		cin >> a >> b;
		if (b == 0) {
			throw 1;
		}

		cout << a << " / " << b << ": " << (a / b) << endl;
	}
	catch (int errorCode) {
		if (errorCode == 1) {
			cout << "you can't divide on Zero." << endl;
		}

	}


	//	4- Write an example for Template.
	//		Solution -->

	cout << "\nQuestion number 4: Write an example for Template." << endl;
	cout << "Maximum of 1 and 2: " << returnMax<int>(1, 2) << endl << endl;

	//	6- Solve the below problem :
	//		Solution -->
	cout << "\nQuestion number 6: Point2D & Point3D Examples." << endl;

	Point2D p1(1, 2);

	cout << "Point-1 X: " << p1.getX() << " Point-1 Y: " << p1.getY() << endl;

	Point3D p2(5, 6, 7);

	float* xyz = p2.getXYZ();

	cout << "Point-2 X: " << xyz[0] << " Point-2 Y: " << xyz[1] << " Point-2 Z: " << xyz[2] << endl;



	return 0;
}