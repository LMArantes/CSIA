#include <iostream>

using namespace std;
bool is_zero;

int main() {
    int number;
    int sum = 0;

    while (true) {

        cout << "Enter a number: ";
        cin >> number;
        cout << endl;

        if (number == 0) {
            break;
        }

        if (number > 0) {
            sum = sum + number;
        }
    }
    cout << "The total sum is: " << sum << endl;
}
