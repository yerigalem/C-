#include <iostream>
using namespace std;

int main() {
    double bank_balance = 5000;
    double withdraw_amount;
    cout << "Enter the amount you want to withdraw: " << endl;
    cin >> withdraw_amount;
    if(withdraw_amount > 0 && withdraw_amount <= bank_balance) {
        bank_balance -= withdraw_amount;
        cout << "Transaction Complete" << endl;
    }
    else{
        cout << "Transaction refused" << endl;
    }
    return 0;
}