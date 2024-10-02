#include <iostream>
#include <cstdlib>
#include <cmath>
#include <bits/locale_facets_nonio.h>

using namespace std;

int main() {
    while (true) {
        cout <<
                "C++ CALCULATOR\n*********\n\n1. absolute value\n2. square root\n3. cube root\n4. power\nChoose your operation: "
                << endl;
        int choice;
        int value1;
        int value2;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the value to be absolute value: " << endl;
                cin >> value1;
                cout << "The absolute value is: " << abs(value1) << endl;
                break;
            case 2:
                cout << "Enter the value to be square root: " << endl;
                cin >> value1;
                cout << "The square root is: " << sqrt(value1) << endl;
                break;
            case 3:
                cout << "Enter the value to be cube root: " << endl;
                cin >> value1;
                cout << "The cube root is: " << cbrt(value1) << endl;
                break;
            case 4:
                cout << "Enter the base value: " << endl;
                cin >> value1;
                cout << "Enter the exponent: " << endl;
                cin >> value2;
                cout << "The power is: \n" << pow(value1, value2) << endl;
                break;
            default:
                goto exit_loop;
        }
    }
exit_loop:
    return 0;
}
