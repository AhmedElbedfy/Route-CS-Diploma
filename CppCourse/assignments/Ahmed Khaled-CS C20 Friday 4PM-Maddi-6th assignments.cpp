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

class Account {
private:
	string id;
	string name;
	int balance;
public:
	Account(string i, string n) {
		id = i;
		name = n;
	}
	Account(string i, string n, int balance) {
		id = i;
		name = n;
		balance = balance;
	}

	string getId() {
		return id;
	}

	string getName() {
		return name;
	}

	int getBalance() {
		return balance;
	}

	int credit(int amount) {
		balance += amount;
		return balance;
	}

	int debit(int amount) {
		if (amount <= balance) {
			balance -= amount;
		}
		else {
			cout << "Amount exceeded balance";
			return balance;
		}
	}

	int transferTo(Account another, int amount) {
		if (amount <= balance) {
			another.credit(amount);
		}
		else {
			cout << "Amount exceeded balance";
			return balance;
		}
	}
};


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

	Time nextSecound() {
		int newSecound = secound++;
		Time nextSecoundObj(hour, minute, newSecound);

		return nextSecoundObj;
	}

	Time previousSecond() {
		int prevSecound = secound++;
		Time prevSecoundObj(hour, minute, prevSecound);

		return prevSecoundObj;
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