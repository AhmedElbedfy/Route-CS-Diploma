#include <iostream>
using namespace std;

int main() {
    // 1st assignment
    //

    cout << endl << "----- Question Number 1" << endl;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }

    // 2nd assignment
    //
    cout << endl << "----- Question Number 2" << endl;


    for (int i = 0; i < 6; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == j || i == 5) {
                cout << '*';
            } else {
                cout << " ";
            }
        }
         cout << endl;
    }

    // 3rd assignment
    //

    cout << endl << "----- Question Number 3" << endl;

    for (int i = 1; i <= 6; i++) {
        for (int j = 6; j >= i; j--) {
            cout << '*';
        }
        cout << endl;
    }


    // 4th assignment
    //

    cout << endl << "----- Question Number 4" << endl;


    for (int i = 1; i <= 25; i++) {
        int q4_counter = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                q4_counter++;
            }
        }
        if (q4_counter > 2) {
            cout << i << ' ';
        }
    }

    cout << endl;


    // 5th assignment
    //

    cout << endl << "----- Question Number 5" << endl;



    // 6th assignment
    //

    cout << endl << "----- Question Number 6" << endl;

    int q6_number;

    cout << "Enter the size of the array: ";
    cin >> q6_number;

    int q6_arr[q6_number];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < q6_number; i++) {
        cin >> q6_arr[i];
    }

    int q6_evenCount = 0, q6_oddCount = 0;

    for (int i = 0; i < q6_number; i++) {
        if (q6_arr[i] % 2 == 0) {
            q6_evenCount++;
        } else {
            q6_oddCount++;
        }
    }

  cout << "Total even elements: " << q6_evenCount << endl;
  cout << "Total odd elements: " << q6_oddCount << endl;


    // 7th assignment
    //

    cout << endl << "----- Question Number 7" << endl;


    // 8th assignment
    //

    cout << endl << "----- Question Number 8" << endl;


    // 9th assignment
    //

    cout << endl << "----- Question Number 9" << endl;



    // 10th assignment
    //

    cout << endl << "----- Question Number 10" << endl;


    // 11th assignment
    //

    cout << endl << "----- Question Number 11" << endl;



    // 12th assignment
    //

    cout << endl << "----- Question Number 12" << endl;



    // 13th assignment
    //

    cout << endl << "----- Question Number 13" << endl;



    //14th assignment
    //

    cout << endl << "----- Question Number 14" << endl;


    return 0;

}
