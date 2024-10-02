#include <iostream>
using namespace std;

const int calories_cookie = 150;

double bmrWomen(double weight, double height, int age);
double bmrMen(double weight, double height, int age);

int main() {

    char gender;
    double weight;
    double heightFeet;
    double heightInches;
    double totalHeight;
    double bmr;
    int age, cookies;

    cout << "m or f: ";
    cin >> gender;

    cout << "Weight in pounds: ";
    cin >> weight;

    cout << "Height in feet: ";
    cin >> heightFeet;

    cout << "Extra inches: ";
    cin >> heightInches;

    cout << "Age: ";
    cin >> age;

    totalHeight = (heightFeet * 12) + heightInches;

    if (gender == 'f') {
        bmr = bmrWomen(weight, totalHeight, age);
    } else if (gender == 'm') {
        bmr = bmrMen(weight, totalHeight, age);
    } else {
        cout << "Invalid gender." << endl;
        return 1;
    }

    cookies = static_cast<int>(bmr / calories_cookie);

    cout << "\nYour BMR is: " << bmr << " calories per day." << endl;
    cout << "That means " << cookies << " cookies per day." << endl;

    return 0;
}

double bmrWomen(double weight, double height, int age) {
    return 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
}

double bmrMen(double weight, double height, int age) {
    return 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
}
