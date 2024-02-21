#include <iostream>
#include <iomanip>

using namespace std;

const double minimumBalance = 0.0;
const double interestRate = 0.02;

void deposit(double &balance){
    double quantity;
    cout << "Enter the amount you want to deposit: ";
    cin >> quantity;
    if (quantity > 0){
        balance += quantity;
        cout << "Deposit was succesful. New balance: $" << fixed << setprecision(2) << balance << endl;
    }
    else{
        cout << "Quantity must be greater than 0" << endl;
    }

}

void withdrawal(double &balance){
    double quantity;
    cout << "Enter the amount you want to withdraw: ";
    cin >> quantity;

    if (quantity > 0){
        if (balance - quantity >= minimumBalance){
            balance -= quantity;
            cout 
        }
    }
}

int main()[

]