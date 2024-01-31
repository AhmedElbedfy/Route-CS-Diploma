#include <iostream>
#include <string>

using namespace std;

int factorial(int num) {
	if (num == 1) {
		return 1;
	}

	return factorial(num - 1) * num;
}

char lowerCase(char zChar) {
	if (zChar >= 65 && zChar <= 90) {
		return zChar + 32;
	}
	return zChar;
}

string lowerCaseSentence(string zString) {
	for (int i = 0; i < zString.length(); i++) {
		zString[i] = lowerCase(zString[i]);
	}
	return zString;
}


int main()
{
	// 1st Question of the assignment
	// cout << factorial(5);

	// 2nd Question of the assignment


	// 3rd Question of the assignment
	// cout << lowerCase('b') << endl;
	// cout << lowerCaseSentence("AbCD") << endl;

	// 4th Question of the assignment



	return 0;
}