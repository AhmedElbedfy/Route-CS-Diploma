#include <iostream>
using namespace std;

/* ---------------- 2D Array Functions ---------------- */

// Calculates and prints the sum of diagonal elements in a 3x3 array
void Q_Num_12() {
	cout << endl << "----- Question Number 12" << endl;

	// create 2d array
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int counter = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				counter += arr[i][j];
			}
		}
	}

	cout << counter << endl;
}

// Adds corresponding elements of two 3x3 arrays and prints the result
void Q_Num_13() {
	cout << endl << "----- Question Number 13" << endl;

	// Input elements for the first array
	int firstArray[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> firstArray[i][j];
		}
	}

	// Input elements for the 2nd array
	int secoundArray[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> secoundArray[i][j];
		}
	}

	// Calculates and prints the sum of each row in a 3x3 array
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << firstArray[i][j] + secoundArray[i][j] << " ";
		}
		cout << endl;
	}
}


// Calculates and prints the sum of each row in a 3x3 array
void Q_Num_14() {
	cout << endl << "----- Question Number 14" << endl;

	int arr[3][3];

	// Input elements for the array
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	// Calculate and print row sums
	for (int i = 0; i < 3; i++) {
		int counter = 0;
		for (int j = 0; j < 3; j++) {
			counter += arr[i][j];
		}
		cout << "Sum of row " << i + 1 << " = " << counter << endl;
	}

}


/* ---------------- Function Assignments ---------------- */

// Prints a given number
void Q_Num_1_Functions(int number) {
	cout << endl << "----- Question Number 1 in Functions" << endl;
	cout << number;
}

// Calculates and returns the average of three numbers
float Q_Num_2_Functions(int i, int j, int k) {
	cout << endl << "----- Question Number 2 in Functions" << endl;
	return ((i + j + k) / 3.0);
}

// Finds the maximum and minimum of two numbers
int maxNumber(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int minNumber(int a, int b) {
	if (b > a) {
		return a;
	}
	else {
		return b;
	}
}

// Finds the maximum and minimum of two input numbers
void Q_Num_3_Functions() {
	cout << endl << "----- Question Number 3 in Functions" << endl;

	int n1, n2;
	cin >> n1;
	cin >> n2;


	cout << "Max number is: " << maxNumber(n1, n2) << endl;
	cout << "Min number is: " << minNumber(n1, n2) << endl;
}

// Determines whether a given number is even or odd.
void Q_Num_4_Functions() {
	cout << endl << "----- Question Number 4 in Functions" << endl;

	int num;
	cin >> num;

	if (num % 2 == 0) {
		cout << "Number " << num << " is even." << endl;
	}
	else {
		cout << "Number " << num << " is odd." << endl;
	}
}

// Checks if a given number is prime.
bool Q_Num_5_Functions() {
	cout << endl << "----- Question Number 5 in Functions" << endl;

	int number;
	cin >> number;

	if (number == 1) {
		return false;
	}
	else {
		int counter = 0;
		for (int i = 1; i <= number; i++) {
			if (number % i == 0) {
				counter++;
			}
		}
		if (counter == 2) {
			return true;
		}
		else {
			return false;
		}
	}


}

// Calculates and prints the cube of a given number.
void Q_Num_6_Functions(int num) {
	cout << endl << "----- Question Number 6 in Functions" << endl;
	cout << "the cube of number: " << num << " is " << (num * num * num) << endl;
}

// Calculates and prints the diameter, circumference, and area of a circle.
void Q_Num_7_Functions(float radius) {
	cout << endl << "----- Question Number 7 in Functions" << endl;
	float diameter = radius * 2;
	float circumference = 2 * 3.14159 * radius;
	float area = 3.14159 * radius * radius;

	cout << "Diameter = " << diameter << " units" << endl;
	cout << "Circumference = " << circumference << " units" << endl;
	cout << "Area = " << area << " sq. units" << endl;

}

// Prints all factors of a given number.
void Q_Num_8_Functions(int num) {
	cout << endl << "----- Question Number 8 in Functions" << endl;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			cout << i << endl;
		}
	}
}


int main()
{
	/* ---------------- 2D Array Functions ---------------- */

	// Calculates and prints the sum of diagonal elements in a 3x3 array
	Q_Num_12();

	// Adds corresponding elements of two 3x3 arrays and prints the result
	Q_Num_13();

	// Calculates and prints the sum of each row in a 3x3 array
	Q_Num_14();


	/* ---------------- Function Assignments ---------------- */

	// Prints a given number	
	Q_Num_1_Functions(5);
	
	// Calculates and returns the average of three numbers
	cout << Q_Num_2_Functions(1, 2, 3);

	// Finds the maximum and minimum of two input numbers
	Q_Num_3_Functions();

	// Determines whether a given number is even or odd.
	Q_Num_4_Functions();

	// Checks if a given number is prime.
	cout << Q_Num_5_Functions();

	// Calculates and prints the cube of a given number.
	Q_Num_6_Functions(5);

	// Calculates and prints the diameter, circumference, and area of a circle.
	Q_Num_7_Functions(10);

	// Prints all factors of a given number.
	Q_Num_8_Functions(25);

	return 0;
}



