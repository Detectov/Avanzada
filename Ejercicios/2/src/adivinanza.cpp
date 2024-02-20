#include <iostream>

using namespace std;

int main(){
    int num;
    int guess;
    int attempts = 0;
    int maxAttempts = 10;
    int maxNum = 100;
    int minNum = 1;
    char playAgain = 'y';
    while(playAgain == 'y'){
        num = minNum + (rand() % (maxNum - minNum + 1));
        cout << "Guess the number between " << minNum << " and " << maxNum << endl;
        while(attempts < maxAttempts){
            cout << "Enter your guess: ";
            cin >> guess;
            if(guess == num){
                cout << "Congratulations! You guessed the number" << endl;
                break;
            }
            else if(guess < num){
                cout << "The number is greater than " << guess << endl;
            }
            else{
                cout << "The number is less than " << guess << endl;
            }
            attempts++;
        }
        if(attempts == maxAttempts){
            cout << "You have reached the maximum number of attempts" << endl;
        }
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        attempts = 0;
    }
    return 0;

    

    
}