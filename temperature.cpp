/*Make a program that categorizes a given temperature into "Low," "Medium," or "High."
 * define the ranges yourself like low (-10 to 0), medium (0-20), high (20-40)
*/

#include <iostream>
using namespace std;

int main(){
    int temp;
    cout << "Input a temperature for classification: ";
    cin >> temp;
    if(temp < -10 || temp > 40){
        cout << "Temperature out of range";
    }
    else if(temp < 0){
        cout << "Cold";
    }
    else if(temp < 20){
        cout << "Medium";
    }
    else{
        cout << "High";
    }
    return 0;
}