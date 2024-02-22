#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Task 1

class Circle {
protected:
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
		double pi = 3.14;
		return pi * pow(radius, 2);

	}

};

class Cylinder : public Circle {
private:
	double height;
public:
	Cylinder() {
		height = 1;
	}
	Cylinder(double r) : Circle(r) {
		height = 1;
	}
	Cylinder(double r, double h) : Circle(r) {
		height = h;
	}
	Cylinder(double r, double h, string c) :Circle(r, c) {
		height = h;
	}
	double getHeight() {
		return height;
	}
	void setHeight(double h) {
		height = h;
	}
	double getVolume() {
		return getArea() * height;
	}

};

// Task 2
class MyPoint {
private:
	int x;
	int y;
public:
	MyPoint() {
		x = 0;
		y = 0;
	}
	MyPoint(int a, int b) {
		x = a;
		y = b;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void setX(int a) {
		x = a;
	}
	void setY(int b) {
		y = b;
	}

};

class MyLine {
private:
	MyPoint begin;
	MyPoint end;
public:
	MyLine(int x1, int x2, int y1, int y2) {
		begin.setX(x1);
		begin.setY(y1);
		begin.setX(x2);
		begin.setY(y2);
	}
	MyLine(MyPoint b, MyPoint e) {
		begin = b;
		end = e;
	}
	MyPoint getBegin() {
		return begin;
	}
	MyPoint getEnd() {
		return end;
	}
	int getBeginX() {
		return begin.getX();
	}
	int getEndX() {
		return end.getX();
	}
	int getBeginY() {
		return begin.getY();
	}
	int getEndY() {
		return end.getY();
	}
	void setBegin(MyPoint b) {
		begin = b;
	}
	void setEnd(MyPoint e) {
		end = e;
	}
	void setBeginX(int x) {
		begin.setX(x);
	}
	void setBeginY(int y) {
		begin.setY(y);
	}
	void setEndX(int x) {
		begin.setX(x);
	}
	void setEndY(int y) {
		begin.setY(y);
	}
	void setBeginXY(int x, int y) {
		begin.setX(x);
		begin.setY(y);
	}
	void setEndXY(int x, int y) {
		end.setX(x);
		end.setY(y);
	}
	string getLength() {
		return "Idon't know how to Calcuate it!";
	}
	string getGradien() {
		return "Idon't know how to Calcuate it!";
	}
};

// Task 3;
class MyComplex {
private:
	double real;
	double imag;
public:
	MyComplex() {
		real = 0.0;
		imag = 0.0;
	}
	MyComplex(double r, double i) {
		real = r;
		imag = i;
	}

	double getReal() {
		return real;
	}
	void setReal(double r) {
		real = r;
	}
	double getImag() {
		return imag;
	}
	void setImag(double i) {
		imag = i;
	}
	void setValue(double r, double i) {
		real = r;
		imag = i;
	}
	bool isReal() {
		return imag == 0 ? true : false;
	}
	bool isImaginay() {
		return real == 0 ? true : false;
	}
	bool equals(double r, double i) {
		if (real == r && imag == i) {
			return true;
		}
		else {
			return false;
		}
	}
	bool equals(MyComplex another) {
		if (real == another.getReal() && imag == another.getImag()) {
			return true;
		}
		else {
			return false;
		}
	}
	double magnitude() {
		// I don't know what is this? "Magnitude"
		//		what should I return?
		return 1 * 1;
	}
	MyComplex addInto(MyComplex right) {
		real += right.getReal();
		imag += right.getImag();


		return MyComplex(real, imag);
	}

	MyComplex addNew(MyComplex right) {
		double r = real + right.getReal();
		double i = imag + right.getImag();
		return MyComplex(r, i);
	}
};

// Task 4;
class Point {
protected:
	float x;
	float y;
public:
	Point() {
		x = 0.0;
		y = 0.0;
	}
	Point(float a, float b) {
		x = a;
		y = b;
	}
	void setX(float input) {
		x = input;
	}
	void setY(float input) {
		y = input;
	}
	float getX() {
		return x;
	}
	float getY() {
		return y;
	}
	void setXY(float i, float z) {
		x = i;
		y = z;
	}
};

class MovablePoint : Point {
	float xSpeed;
	float ySpeed;
public:
	MovablePoint() {
		xSpeed = 0;
		ySpeed = 0;
	}
	MovablePoint(float i, float z, float iSpeed, float zSpeed) : Point(i, z) {
		xSpeed = iSpeed;
		ySpeed = zSpeed;
	}
	MovablePoint(float i, float z) {
		xSpeed = i;
		ySpeed = z;
	}
	void setXSpeed(float input) {
		xSpeed = input;
	}
	void setYSpeed(float input) {
		ySpeed = input;
	}
	float getXSpeed() {
		return xSpeed;
	}
	float getYSpeed() {
		return ySpeed;
	}
	void setSpeed(float i, float z) {
		xSpeed = i;
		ySpeed = z;
	}
	MovablePoint move() {
		// notice that x and y is protected not private
		x += xSpeed;
		y += ySpeed;
		return MovablePoint(x, y);
	}
};

// task 5;
/*

	Composition: "Has-a" relationship.

	Inheritance: "Is-a" relationship.

	// Composition
	class Car {
	  Engine engine; // Car has an Engine
	};

	// Inheritance
	class Car : public Vehicle {
	};

*/


int main()
{


	return 0;
}
