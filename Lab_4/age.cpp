#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

int main() {
    int year = 1000;
    int guess = 0;

    srand(time(nullptr));

    int dragon_age = rand() % 100 + 1;

    std::cout << "In the year 1000, a  prince is locked up in a castle guarded by a dragon. Every five years, a fair maiden is allowed to come to the castle to try to free the prince. To free him, the maiden has to guess the dragon's age." << std::endl;

    while (true) {
        std::cout << "\nYear " << year << ":\nDragon: Hello, fair maiden. I am a fearsome dragon. How old am I?\nMaiden: ";
        std::cin >> guess;

        if (guess == dragon_age) {
            std::cout << "You got it! Here is the handsome prince. Live happily ever after!" << std::endl;
            break;
        } else if (guess < dragon_age) {
            std::cout << "Wrong, I am older. No handsome prince for you. See you in five years." << std::endl;
        } else {
            std::cout << "Wrong, I am younger. No handsome prince for you. See you in five years." << std::endl;
        }

        dragon_age += 5;
        year += 5;
    }
    return 0;
}
