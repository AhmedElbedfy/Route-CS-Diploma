#include <iostream>
using namespace std;

int main() {
    // 1st assignment
    //

    cout << endl << "Q Number 1" << endl;

    int number;

    cout << "Please enter an integer: ";
    cin >> number;

    if (number < 0) {
        cout << "negative" << endl;
    } else if (number > 0) {
        cout << "positive" << endl;
    }

    // 2nd assignment
    //

    cout << endl << "Q Number 2" << endl;

    int digit;

    cout << "Please enter a digit between 1 and 5: ";
    cin >> digit;

    if (digit == 1) {
        cout << "one" << endl;
    } else if (digit == 2) {
        cout << "two" << endl;
    } else if (digit == 3) {
        cout << "there" << endl;
    } else if (digit == 4) {
        cout << "four" << endl;
    } else {
        cout << "five" << endl;
    }

    // 3rd assignment
    //

    cout << endl << "Q Number 3" << endl;

    int oddNum;
    int sum = 0;

    cout << "Please enter five Numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> oddNum;
        if (oddNum % 2 == 1){
            sum+= oddNum;
        }
    }
    cout << sum << endl;

    // 4th assignment
    //

    cout << endl << "Q Number 4" << endl;

    int year;

    cout << "Please enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        cout << "it's leap year" << endl;
    } else {
        cout << "it's not a leap year" << endl;
    }

    // 5th assignment
    //

    cout << endl << "Q Number 5" << endl;

    int birthYear;
    cout << "please enter your birth year: " << endl;
    cin >> birthYear;

    if (2023 - birthYear >= 18 ) {
        cout << "the age you entered above or equal 18" << endl;
    } else {
        cout << "the age you entered less than 18" << endl;
    }

    // 6th assignment
    //

    cout << endl << "Q Number 6" << endl;

    int mark;
    cout << "Please enter your mark: " << endl;
    cin >> mark;

    if (mark < 25) {
        cout << "F" << endl;
    } else if (mark < 45) {
        cout << "E" << endl;
    } else if (mark < 50) {
        cout << "D" << endl;
    } else if (mark < 60) {
        cout << "C" << endl;
    } else if (mark < 80) {
        cout << "B" << endl;
    } else {
        cout << "A" << endl;
    }

    // 7th assignment
    //

    cout << endl << "Q Number 7" << endl;

    int monthNumber;

    cout << "Insert a number between 1 to 12 to get the month name: " << endl;
    cin >> monthNumber;

    switch (monthNumber) {
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        default:
            cout << "Invalid month number." << endl;
  }

    // 8th assignment
    //

    cout << endl << "Q Number 8" << endl;

    int validNumber;

    cout << "Enter an integer: ";
    cin >> validNumber;

    cout << ((validNumber % 2 == 0) ? "even" : "odd") << endl;

    // 9th assignment
    //

    cout << endl << "Q Number 9" << endl;

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is a consonant." << endl;
    }

    // 10th assignment
    //

    cout << endl << "Q Number 10" << endl;

    int a, b, c;
    cout << "Please enter 3 numbers: ";
    cin >> a >> b >> c;

    int maxNum = a;
    int minNum = a;

    if (b > maxNum) {
        maxNum = b;
    }
    if (c > maxNum) {
        maxNum = c;
    }

    if (b < minNum) {
        minNum = b;
    }
    if (c < minNum) {
        minNum = c;
    }

    cout << "Max element = " << maxNum << endl;
    cout << "Min element = " << minNum << endl;

    // 11th assignment
    //

    cout << endl << "Q Number 11" << endl;

    for (int i = 10; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;

    // 12th assignment
    //

    cout << endl << "Q Number 12" << endl;

    int averageInp;
    int sumOfAverage = 0;

    cout << "Please enter 10 numbers: " << endl;

    for (int i = 0; i < 10; i++) {
        cin >> averageInp;
        sumOfAverage+= averageInp;
    }

    cout << "The Average is: " << sumOfAverage / 10.0 << endl;

    // 13th assignment
    //

    cout << endl << "Q Number 13" << endl;

    int multiNum;
    cout << "Please enter a number: " << endl;
    cin >> multiNum;
    cout << endl;

    for (int i = 1; i <= 12; i++) {
        cout << i * multiNum << endl;
    }

    //14th assignment
    //

    cout << endl << "Q Number 14" << endl;

    int N, M;
    int sum14 = 0;

    cout << "Enter two integers N and M: ";
    cin >> N >> M;


    if (N > M) {
        int temp = N;
        N = M;
        M = temp;
    }

    for (int i = N; i <= M; i++) {
        sum14 += i;
    }

    cout << "The summation of all numbers between " << N << " and " << M << " is: " << sum14 << endl;


    //15th assignment
    //

    cout << endl << "Q Number 15" << endl;

    int base, exponent;
    int power = 1;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    for (int i = 0; i < exponent; i++) {
        power *= base;
    }

    cout << base << "^" << exponent << " = " << power << endl;

    //16th assignment
    //

    cout << endl << "Q Number 16" << endl;

    int number16;
    int oddCount = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> number16;
        if (number16 % 2 != 0) {
            oddCount++;
        }
    }

    cout << "Number of odd numbers: " << oddCount << endl;

    //17th assignment
    //

    cout << endl << "Q Number 17" << endl;

    int x, y;
    cout << "Please enter 2 numbers: " << endl;

    cin >> x >> y;

    if (x > y) {
        for (int i = x; i > 0; i--) {
            if (x % i == 0 && y % i == 0) {
                cout << "the module number is "<< i << endl;
                break;
            }
        }
    } else if (y > x) {
        for (int i = y; i > 0; i--) {
            if (x % i == 0 && y % i == 0) {
                cout << "the module number is "<< i << endl;
                break;
            }
        }
    }

    return 0;

}
