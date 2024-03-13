#include <iostream>
#include <string>


using namespace std;

// Task 1
template <typename type>
type returnMax(type x, type y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

template <typename type>
class Calculator {
	type first;
	type secound;
public:
	Calculator(type first, type secound) {
		this->first = first;
		this->secound = secound;
	}
	type add() {
		return first + secound;
	}
	type subtract() {
		return first - secound;
	}
	type multiply() {
		return first * secound;
	}
	// Task 4 "Division by zero exceprion."
	type divide() {
		if (secound == 0) {
			throw 0;
		}

		return first / secound;
	}
};

// Task 3
double Sqrt(double number) {
	if (number < 0) {
		throw 1;
	}
	return sqrt(number);
}

// Task 5
class MyException {
	int errorCode;
public:
	MyException(int errorCode) {
		this->errorCode = errorCode;
	}
	string ExceptionMessage() {
		if (errorCode == 0) {
			return "you can't divide number by zero.";
		}
		else if (errorCode == 1) {
			return "You can't get a squre root of negtive number.";
		}
	}
	void PrintExceptionMessage() {
		if (errorCode == 0) {
			cout << "you can't divide number by zero." << endl;
		}
		else if (errorCode == 1) {
			cout << "You can't get a squre root of negtive number." << endl;
		}
	}
};



int main()
{
	// Task 1
	cout << "Maximum of 1 and 2: " << returnMax<int>(1, 2) << endl;

	// Task 2 
	Calculator<double> cal(2, 1);

	cout << "Addition: " << cal.add() << endl;
	cout << "Subtraction: " << cal.subtract() << endl;
	cout << "Multiplication: " << cal.multiply() << endl;
	try {
		cout << "Division: " << cal.divide() << endl;
	}
	catch (int errorCode) {
		MyException(errorCode).PrintExceptionMessage(); // task 5
	}

	Calculator<double> cal2(2, 0);
	// Task 4
	try {
		cout << "Division: " << cal2.divide() << endl;
	}
	catch (int errorCode) {
		MyException(errorCode).PrintExceptionMessage(); // task 5
	}

	// Task 3
	double number = -25;
	try {
		cout << "Squre Root of " << number << ": " << Sqrt(number) << endl;
	}
	catch (int errorCode) {
		MyException(errorCode).PrintExceptionMessage(); // task 5
	}


	return 0;
}