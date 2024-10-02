#include <iostream>
#include "figures.h"

using std::cin, std::cout, std::endl;

int main() {
    int size;
    char symbol;
    int shape;
    char square, slash;

    while (true) {
        cout << "Size: ";
        cin >> size;
        if (size <= 0) {
            break;
        }

        cout << "Symbol: ";
        cin >> symbol;

        cout << "1=square | 2=slash | 3=X" << endl;
        cout << "Select the figure: ";
        cin >> shape;

        if (shape == 1) {
            cout << "f for filled or h for hollow: ";
            cin >> square;
            if (square == 'f') {
                filledSquare(size, symbol);
            } else if (square == 'h') {
                hollowSquare(size, symbol);
            } else {
                break;
            }
        }
        else if (shape == 2) {
            cout << "f for forward or b for backward: ]: ";
            cin >> slash;
            if (slash == 'f') {
                forwardSlash(size, symbol);
            } else if (slash == 'b') {
                backSlash(size, symbol);
            } else {
                break;
            }
        }
        else if (shape == 3) {
            drawX(size, symbol);
        }
        else {
            break;
        }

        cout << endl;
    }

    return 0;
}
