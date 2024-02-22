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

    int q5_number;

    cout << "Enter the size of the array: ";
    cin >> q5_number;

    int q6_arr[q5_number];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < q5_number; i++) {
        cin >> q5_arr[i];
    }

    int q5_evenCount = 0, q5_oddCount = 0;

    for (int i = 0; i < q5_number; i++) {
        if (q5_arr[i] % 2 == 0) {
            q5_evenCount++;
        } else {
            q5_oddCount++;
        }
    }

  cout << "Total even elements: " << q5_evenCount << endl;
  cout << "Total odd elements: " << q5_oddCount << endl;


    // 6th assignment
    //

    cout << endl << "----- Question Number 6" << endl;\

    int q6_arr[] = {10, 12, 20, 25, 13, 10, 9, 40, 60, 5};
    int q6_input;

    cout << "what number you search for: ";
    cin >> q6_input;
    for (int i = 0; i < 10; i++) {
        if ( q6_arr[i] == q6_input) {
            cout << "Element found at index " << i << endl;
        }
    }


    // 7th assignment
    //

    cout << endl << "----- Question Number 7" << endl;

    int q7_arr[] = {5, 7, 8, 8, 5, 8, 7, 7};
    int q7_input;
    int q7_counter = 0;

    cout << "what number you search for: ";
    cin >> q7_input;
    for (int i = 0; i < 10; i++) {
        if ( q7_arr[i] == q7_input) {
            q7_counter++;
        }
    }
    cout << "Number of occurrences of " << q7_input <<" : " << q7_counter << endl;

    // 8th assignment
    //

    cout << endl << "----- Question Number 8" << endl;

    int q8_arr_len;

    cout << "what is the length of the Array: ";

    cin >> q8_arr_len;

    int q8_arr[q8_arr_len];
    int q8_2nd_arr[q8_arr_len];

    for (int i = 0; i < q8_arr_len; i++) {
        cin >> q8_arr[i];
        q8_2nd_arr[i] = q8_arr[i];
    }

    cout << "Array1: ";
    for (int i = 0; i < q8_arr_len; i++) {
        cout << q8_arr[i] << " ";
    }
    cout << endl;
    cout << "Array2: ";
    for (int i = 0; i < q8_arr_len; i++) {
        cout << q8_2nd_arr[i] << " ";
    }
    cout << endl;


    return 0;

}
