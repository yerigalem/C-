#include <iostream>

int main() {
    using namespace std;

    //declaration section
    int secretNumber = rand() % 100 + 1;
    int guess;
    bool guessed_Correctly = false;

    cout << "Welcome to the Guessing Game!\n";

    while (!guessed_Correctly) {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;

        if (guess < 1 || guess > 100) //OR
        {
            cout << "Please enter a number between 1 and 100.\n";
        } else if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number.\n";
            guessed_Correctly = true; //breaking loop here
        } else if (guess < secretNumber) {
            cout << "Too low. Try again!\n";
        } else {
            cout << "Too high. Try again!\n";
        }
    }

    return 0;
}