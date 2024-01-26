//IF ELSE
//Write a program that takes two numbers as input and prints the larger one. Use an if-else statement for comparison.
//diff:easy

#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    cout << "Please input two numbers: ";
    cin >> x >> y;
    if(x > y) {
        cout << x;
    }
    else if(y > x){
        cout << y;
    }
    else{
        cout << "The numbers are equal.";
    }
    return 0;
}