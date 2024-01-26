#include <iostream>

int main() {
    using namespace std;

   //declaration
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // check if the number is divisible by 2
    if (num % 2 == 0) {
        cout << num << " is divisible by 2.\n";
    } else {
        cout << num << " is not divisible by 2.\n";
    }

    return 0;
}