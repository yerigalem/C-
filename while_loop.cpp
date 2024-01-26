/*
WHILE LOOPS
Create a guessing game where the program randomly selects a number between 1 and 100, and the user has to guess it.
Provide feedback if the guess is too high or too low, and continue until the correct number is guessed diff:med
 */

#include <iostream>
using namespace std;

int main(){
    int secret_num = rand() % 100 + 1;
    int guess;
    cout << "Guess a number from 1 to 100: ";
    cin >> guess;
    while(guess != secret_num){
        if(guess < 1){
            cout << "Invalid input, please try again: ";
            cin >> guess;
        }
        else if(guess > 100){
            cout << "Invalid input, please try again: ";
            cin >> guess;
        }
        else if(guess < secret_num){
            cout << "Guess is too small, try again: ";
            cin >> guess;
        }
        else{
            cout << "Guess is too large, try again: ";
            cin >> guess;
        }
    }
    cout << "YOU GOT IT LET'S GOOOO";
    return 0;
}