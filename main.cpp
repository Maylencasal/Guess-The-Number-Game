
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    std::cout << "Welcome to Guess the Number!\n";

    // Game loop
    while (true) {
        std::cout << "Enter your guess (1-100): ";
        std::cin >> guess;

        attempts++;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Too high! Try again.\n";
        }
    }

    return 0;
}
