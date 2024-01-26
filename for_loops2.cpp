/*Write a program that checks if the number is divisible by 2.
*/

#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter a positive integer: ";
    cin >> x;
    bool odd = true;
    for(int i; i <= x; ++i){
        if(odd){
            odd = false;
        }
        else{
            odd = true;
        }
    }
    if(odd){
        cout << "Number is not divisible by 2";
    }
    else{
        cout << "Number is divisible by 2";
    }
    return 0;
}