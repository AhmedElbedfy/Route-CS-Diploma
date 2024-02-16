#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/*
	Lecture Number: 8

	About:
	( Pointers - Abstraction - Polymorphism )

	Notes:
	1- review the first part of the instruction online.
	2- nullptr
	3- "&" = reference operator
	4- stack (Static Allocation) & heap (Dynamic Allocation)
	5-

	OOP Consepts:
	*

	Notes from Gemini Ai:



*/

int* newArr(int i) {

	int* arr = new int[i];
	for (int y = 0; y < i; y++) {
		cin >> arr[y];
	}
	return arr;
}



int main()
{

	/*
	int x[3] = { 10, 20, 30 };

	for (int i = 0; i < 3; i++) {
		cout << (x + i) << endl;
	}
	*/

	/*
	int i;

	cin >> i;
	int* x = new int[i];

	for (int y = 0; y < i; y++) {
		x[y] = y + 1;

		cout << x[y] << endl;
	}

	delete[] x;
	*/

	/*
	int i;
	cin >> i;

	int* arr = newArr(i);

	for (int y = 0; y < i; y++) {
		cout << arr[y] << endl;
	}

	delete [] arr;
	*/


	int row, col;
	cin >> row >> col;
	int **p = new int*[row];

	cout << endl;

	for (int i = 0; i < row; i++) {
		p[i] = new int[col];
		for (int y = 0; y < col; y++) {
			cin >> p[i][y];

		}
	}

	for (int i = 0; i < row; i++) {
		for (int y = 0; y < col; y++) {
			cout << p[i][y] << " " << endl;
		}
		cout << endl;
	}

	for (int i = 0; i < row; i++) {
		delete[] p[i];
	}

	delete[] p;

	return 0;
}