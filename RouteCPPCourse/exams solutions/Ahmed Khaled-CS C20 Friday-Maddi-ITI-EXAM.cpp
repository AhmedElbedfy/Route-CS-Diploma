#include <iostream>
#include <string>

using namespace std;

float getAverage(int *arr, int length) {
	float averageCounter = 0.0;
	for (int i = 0; i < length; i++) {
		averageCounter += arr[i];
	}

	return averageCounter / length;
}

void getSwap(int &n1, int &n2) {
	int holder = n1;
	n1 = n2;
	n2 = holder;
}


int main()
{
	// 1st Question of the Exam
	// What are the differences between If Condition and Switch, with example ? mention three differences. (15 Points)
	/*
		(A) if condition: if one condition in the chain become true you computer won't look to the other statement in the chain,
			switch cases: the computer will continue evalute the other cases and that's why we put break;

		(B) in the if I can have multiple cases to compare between as condition,
		and the cases don't have to be related but it in cases all cases depend on the same condition statement

		(C) I can have nested if condition but in cases I can't have nested switch cases
	*/
	cout << endl << "- 1st Question" << endl;
	cout << "Check the source code for the full answer.\n" << endl; // hint for console Application


	int num = 1;

	if (num == 1) cout << "one";
	else if (num == 2) cout << "two";
	else if (num == 3) cout << "there";
	else "number is greater than 3.";

	cout << " - ";


	switch (num) {
	case 1:
		cout << "one";
		break;
	case 2:
		cout << "two";
		break;
	case 3:
		cout << "there";
		break;
	default:
		cout << "number is greater than 3.\n";
	}

	cout << "\n";



	// 2nd Question of the Exam
	// What is the difference between do-while and for, with example? (15 Points)
	/*
		do-while: at least will do the code statement once before check the condition.
		for: will check the condtion before runing the code statements.
	*/
	cout << endl << "- 2nd Question" << endl;
	cout << "Check the source code for the full answer.\n" << endl; // hint for console Application

	int counter = 1;
	do {
		cout << counter << "\n";
		counter++;
	} while (counter <= 3);
	cout << endl;
	for (int counter = 1; counter <= 3; counter++) {
		cout << counter << "\n";
	}

	// 3rd Question of the Exam
	// What are primitive data types in C++? (10 Points)
	/*
	(char - bool - integer - float - long)
	*/
	cout << endl << "- 3rd Question" << endl;
	cout << "(char - bool - integer - float - long)" << endl;

	// 4th Question of the Exam
	// Write a function take an integer array and return average, then call it in main function. (15 Points)
	cout << endl << "- 4th Question" << endl;

	int arr[4] = { 1, 2, 3, 4 };

	cout << getAverage(arr, 4) << endl;

	// 5th Question of the Exam
	// Create a function take two integers to swap them, then call it in main function. (20 Points)
	cout << endl << "- 5th Question" << endl;

	int n1 = 1;
	int n2 = 2;

	getSwap(n1, n2);
	cout << n1 << " " << n2 << endl;


	// 6th Question of the Exam
	// Create a function take two integers to swap them, then call it in main function. (20 Points)
	cout << endl << "- 6th Question" << endl;

	int looping = 5;
	for (int i = 0; i <= looping; i++) {
		for (int j = looping; j >= 0; j--) {
			if (i == j) {
				cout << i << " ";
				cout << j << endl;
			}
		}
	}

	// 7th Question of the Exam
	// Without coping the following code on compiler, Draw the below code : (15 Points)
	/***
	|
	|*
	|**
	|* *
	|*  *
	|*****
	|
	***/
	cout << endl << "- 7th Question" << endl;

	cout << "*    " << endl;
	cout << "**   " << endl;
	cout << "* *  " << endl;
	cout << "*  * " << endl;
	cout << "*****" << endl;



	return 0;
}