/* make a simple calculator using a Switch case
the calculator needs to have 4 operators, +-/x, and a default that checks unknown operator
*/

#include <iostream>
using namespace std;

int main(){

  char operand;
  int x;
  int y;

  cout << "Please pick the first number: ";
  cin >> x;
  cout << "Please pick the second number: ";
  cin >> y;
  cout << "Please input an operand for the two numbers ('+', '-', '*', '/'): ";
  cin >> operand;

  switch(operand){
    case '+':
      cout << x + y << "\n";
      break;
    case '-':
      if(x > y){
        cout << x - y << "\n";
      }
      else{
        cout << y - x << "\n";
      }
      break;
    case '*':
      cout << x * y << "\n";
      break;
    case '/':
      cout << x / y << "\n";
      break;
    default:
      cout << "Invalid input.\n";
  }
  return 0;
}
