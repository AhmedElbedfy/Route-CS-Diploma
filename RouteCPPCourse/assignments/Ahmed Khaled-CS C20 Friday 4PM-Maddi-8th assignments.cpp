#include <iostream>
#include <string>


using namespace std;


// Task 1
class Time {

private:
	int hour;
	int minute;
	int secound;

public:
	Time(int h, int m, int s) {
		if (h > 0 && h < 24) {
			hour = h;
		}

		if (m > 0 && m < 60) {
			minute = m;
		}

		if (s > 0 && s < 60) {
			secound = s;
		}
	}

	int getHour() {
		return hour;
	}

	int getMinute() {
		return minute;
	}

	int getSecound() {
		return secound;
	}

	void setHour(int h) {
		if (h > 0 && h < 24) {
			hour = h;
		}
	}

	void setMinute(int m) {
		if (m > 0 && m < 60) {
			minute = m;
		}
	}

	void setSecound(int s) {
		if (s > 0 && s < 60) {
			secound = s;
		}
	}

	void setTime(int h, int m, int s) {
		hour = h;
		minute = m;
		secound = s;
	}

	void printTime() {
		cout << hour << " : ";
		cout << minute << " : ";
		cout << secound << endl;
	}

	Time nextSecound() { // 10:25:58
		if (secound == 59) {
			secound = 0;
			if (minute == 59) {
				minute = 0;
				if (hour == 23) {
					hour = 0;
				}
				else {
					hour++;
				}
			}
			else {
				minute++;
			}
		}
		else {
			secound++;
		}



		return *this;
	}

	Time previousSecond() {
		if (secound == 0) {
			secound = 59;
			if (minute == 0) {
				minute = 59;
				if (hour == 0) {
					hour = 23;
				}
				else {
					hour--;
				}
			}
			else {
				minute--;
			}
		}
		else {
			secound--;
		}



		return *this;
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

	// new
	int* getBeginXY() {
		int *p = new int[2];
		p[0] = begin.getX();
		p[1] = begin.getY();
		return p;
	}

	int* getEndXY() {
		int *p = new int[2];
		p[0] = end.getX();
		p[1] = end.getY();
		return p;
	}



	string getLength() {
		return "Idon't know how to Calcuate it!";
	}
	string getGradien() {
		return "Idon't know how to Calcuate it!";
	}
};


// Task 3

class Point {
private:
	float x;
	float y;
public:
	Point() {
		x = 0.0;
		y = 0.0;
	}
	Point(float x, float y) {
		this->x = x;
		this->y = y;
	}
	void setX(float x) {
		this->x = x;
	}
	void setY(float y) {
		this->y = y;
	}
	float getX() {
		return x;
	}
	float getY() {
		return y;
	}
	void setXY(float x, float y) {
		this->x = x;
		this->y = y;
	}
	float* getXY() {
		float*p = new float[2];
		p[0] = x;
		p[1] = y;
		return p;
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
	MovablePoint(float i, float z, float xSpeed, float ySpeed) : Point(i, z) {
		this->xSpeed = xSpeed;
		this->ySpeed = ySpeed;
	}
	MovablePoint(float xSpeed, float ySpeed) {
		this->xSpeed = xSpeed;
		this->ySpeed = ySpeed;
	}
	void setXSpeed(float xSpeed) {
		this->xSpeed = xSpeed;
	}
	void setYSpeed(float ySpeed) {
		this->ySpeed = ySpeed;
	}
	float getXSpeed() {
		return xSpeed;
	}
	float getYSpeed() {
		return ySpeed;
	}
	void setSpeed(float xSpeed, float ySpeed) {
		this->xSpeed = xSpeed;
		this->ySpeed = ySpeed;
	}
	float* getSpeed() {
		float *p = new float[2];
		p[0] = xSpeed;
		p[1] = ySpeed;
		return p;
	}

	MovablePoint move() {
		float *p = Point::getXY();
		p[0] += xSpeed;
		p[1] += ySpeed;

		Point::setXY(p[0], p[1]);

		delete[]p;

		return *this;
	}
};


int main()
{


	//1st Task
	cout << "------ 1st Class Solution: \n" << endl;

	Time t1(23, 59, 57);

	//t1.setTime(10, 30, 30);
	cout << "(+) H : M : S" << endl;


	for (int i = 0; i < 6; i++) {
		cout << "(+) ";

		t1.nextSecound();
		t1.printTime();
	}

	cout << endl;
	//t1.setTime(10, 30, 30);
	cout << "(-) H : M : S" << endl;

	for (int i = 0; i < 6; i++) {
		cout << "(-) ";

		t1.previousSecond();
		t1.printTime();
	}

	cout << endl;
	//2nd Task 
	cout << "------ 2nd Class Solution: \n" << endl;


	MyLine line1(1, 2, 3, 4);

	int *l1Begin = line1.getBeginXY();

	cout << "Address: " << l1Begin << endl;

	cout << "Line Begin X: " << l1Begin[0] << endl;

	cout << "Line Begin Y: " << l1Begin[1] << endl;

	int *l1End = line1.getEndXY();

	cout << "Address: " << l1End << endl;

	cout << "Line End X: " << l1End[0] << endl;

	cout << "Line End Y: " << l1End[1] << endl;

	delete[]l1Begin;
	delete[]l1End;

	cout << endl;
	// 3rd Task
	cout << "---- 3rd Class Solution: \n" << endl;

	MovablePoint m1(2, 2, 3, 3);

	float *m1Speed = m1.getSpeed();

	cout << "Address: " << m1Speed << endl;

	cout << "M1 Speed of X: " << m1Speed[0] << endl;

	cout << "M1 Speed of Y: " << m1Speed[1] << endl;


	MovablePoint m2 = m1.move();

	delete[]m1Speed;


	return 0;
}