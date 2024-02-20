#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    char option;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operator(+ for sum, - for subtraction, * for product, / for division): ";
    cin >> option;
    cout << "Enter the second number: ";
    cin >> num2;
    switch(option){
        case '+':
            cout << "The result is: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "The result is: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "The result is: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0){
                cout << "Error: Division by zero" << endl;
                break;
            }
            else{
                cout << "The result is: " << num1 / num2 << endl;
                break;
            }
            
        default:
            cout << "Invalid operator" << endl;
    }
    return 0;
}