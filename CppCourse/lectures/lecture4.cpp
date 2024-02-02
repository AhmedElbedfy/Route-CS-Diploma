#include <iostream>
using namespace std;

/*
    Notes:
    1- overflow
    2- INT-MIN, INT-MAX
    3- Pre Increment - Post Increment
    4- Pre defined function vs user defined functions
    5- Optimization Trick: if I find what I need I can but a condition to stop
    5- function overloading (Different: {data type, parameters numbers, sequence of the parameters type})
    6- function prototype
    7-

*/


int sum(int a, int b) {
    cout << a + b << endl;
    //return a+b;
}

int main() {

    // 1st task
    /*
    cout << "1st task" << endl;

    int arr[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    */


    // 2st task

    /*
    cout << "2nd task" << endl;
    int arr[3][4];
        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        int mn = INT_MAX;
        for (int j = 0; j < 3; j++){
            if(mn > arr[j][i]){
                mn = arr[j][i];
            }
        }
        cout << mn << endl;
    }
    */

    // 3rd task

    cout << "3rd task" << endl;


    sum(1, 2);
    sum(2, 3);

    cout << sum(1, 4);

    cout << sum(1, 5);

    cout << sum(1, 3);






    return 0;
}
