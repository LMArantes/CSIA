#include <iostream>
#include "figures.h"

using std::cin, std::cout, std::endl;

void filledSquare(int size, char symbol) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << symbol;
        }
        cout << endl;
    }
}

void hollowSquare(int size, char symbol) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                cout << symbol;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void forwardSlash(int size, char symbol) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == size - i - 1) {
                cout << symbol;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void backSlash(int size, char symbol) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                cout << symbol;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void drawX(int size, char symbol) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || j == size - i - 1) {
                cout << symbol;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
