#include <iostream>
using namespace std;

int main() {

    // 1st task
    /*
    cout << "1st task" << endl;

    for (int i = 1; i <= 10; i++) {

        int counter = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0){
                counter++;
            }
        }

        if (counter == 2){
            cout << i << endl;
        }
    }
    */

    // 2st task
    /*
    cout << "2nd task" << endl;

    int number;

    cout << "Please enter number: ";
    cin >> number;

    for (int i = 0; i <= number; i++) {
        cout << endl;
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
    }

    cout << endl;
    */

    // 3rd task
    /*
    cout << "3rd task";

    for (int i = 0; i < 5; i++) {
        cout << endl;

        for (int c = 0; c <= i; c++) {
            cout << " ";
        }
        for (int j = 5; j > i; j--) {
            cout << "*";
        }
    }
    */

    // 4th task
    /*
    cout << "4th task";

    for (int i = 0; i < 10; i++) {
        cout << endl;
        for (int c = 0; c < 10; c++) {
            if ( c >= i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
    }
    */

    // 5th task
    /*
    cout << "5th task" << endl;
    cout << "Please enter 5 numbers" << endl;

    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < 5; i++) {
       arr[i] = 1;
    }

    cout << endl;


    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    */

    // 6th task
    cout << "6th task";

    int arr[1000], n;
    int result = 1;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        result *= arr[i];
    }

    cout << result;


    return 0;
}
