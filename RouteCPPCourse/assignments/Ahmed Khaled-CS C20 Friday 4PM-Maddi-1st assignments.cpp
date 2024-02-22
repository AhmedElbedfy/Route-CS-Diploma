#include <iostream>
using namespace std;

int main() {
    // 1st assignment
    // input: 5, output: 5
    cout << "1st assignment" << endl;
    int num;
    cout << "Input: ";
    cin >> num;
    cout << "Output: " << num << endl;
    // return 0;

    // 2nd assignment
    // input: 5,3,4, output: 12
    cout << "2nd assignment" << endl;
    int num1, num2, num3;

    cout << "Please enter the first number: ";
    cin >> num1;
    cout << "Please enter the secound number: ";
    cin >> num2;
    cout << "Please enter the third number: ";
    cin >> num3;
    cout << "Summation of 3 integers is " << num1 + num2 + num3 << endl;
    // return 0;

    // 3rd assignment
    // input: 6,4,4, output: 4.66667
    cout << "3rd assignment" << endl;
    int num4, num5, num6;

    cout << "Please enter the first number: ";
    cin >> num4;
    cout << "Please enter the secound number: ";
    cin >> num5;
    cout << "Please enter the third number: ";
    cin >> num6;
    cout << "The average = " << (num4 + num5 + num6) / 3.0 << endl;
    // return 0;


    // 4th assignment
    // input: 5,3, output: 16,15
    cout << "4th assignment" << endl;
    int width, height;

    cout << "width: ";
    cin >> width;
    cout << "height: ";
    cin >> height;
    cout << "the perimeter= " << 2 * (height + width) << endl;
    cout << "The area= " << height * width << endl;
    // return 0;


    // 5th assignment
    // input: 132, output: 6
    cout << "5th assignment" << endl;
    int zNum;

    cout << "input: ";
    cin >> zNum;
    cout << "output: " << (zNum % 10) + (zNum % 100 / 10) + (zNum % 1000 / 100)   << endl;
    // return 0;


    // 6th assignment
    // input: 25300 expected output: 7:1:40
    cout << "6th assignment" << endl;
    int input;

    cout << "input seconds: ";
    cin >> input;
    cout << "output: H:M:S : ";
    int hours = input / 60 / 60;
    int minutes =  (input / 60) - (hours * 60);
    int seconds = input - ((minutes * 60) + (hours * 60 * 60));

    cout << hours << ":";
    cout << minutes << ":";
    cout << seconds << endl; // output: 7:1:40

    return 0;

}
