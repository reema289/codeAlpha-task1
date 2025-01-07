
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void numberGuessingGame() {
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Can you guess it?" << endl;

    // Seed the random number generator and generate a random number
    srand(time(0));
    int targetNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a valid number." << endl;
            continue;
        }

        // Check if the guess is too high, too low, or correct
        if (guess < targetNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > targetNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number " << targetNumber << " correctly in " << attempts << " attempts." << endl;
            break;
        }
    }
}

int main() {
    numberGuessingGame();
    return 0;
}
