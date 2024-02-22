#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;  

void rockGame(){
    int userOption;
    int gameOption;
    int min = 1;
    int max = 3;
    int Uattempt = 0;
    int Gattempt = 0;
    int userWin = 3;
    int gameWin = 3;
    char playAgain = 'y';
    while (playAgain == 'y'){
        while (Uattempt < userWin || Gattempt < gameWin){
            gameOption = min + (rand() % (max - min + 1));
            cout << "Choose\n1.Rock\n2.Paper\n3.Scissors: ";
            cin >> userOption;
            cout << "Computer chose: ";
            switch (gameOption){
                case 1:
                    cout << "Rock";
                break;
                case 2: 
                    cout << "Paper";
                break;
                case 3:
                    cout << "Scissors";
                break;
            }
            cout << endl;

            if (userOption == gameOption){
                cout << "It's a tie\n";
            }
            else if ((userOption == 1 && gameOption == 2) ||
                     (userOption == 2 && gameOption == 3) ||
                     (userOption == 3 && gameOption == 1)){
                        cout << "Computer won this round!\n";
                        Gattempt ++;
                     }
            else {
                cout << "You won this round!\n";
                Uattempt++;
                }
                cout << "User wins: " << Uattempt << ", Computer wins: " << Gattempt << endl;
            }
            if (Uattempt == userWin){
                cout << "Congrats! You win\n";
            }
            else if (Gattempt == gameWin) {
                cout << "Computer wins, better luck next time :(\n";
            }
            cout << "Do you want to play again? (y/n): ";
            cin >> playAgain;
            if (playAgain == 'y'){
                Uattempt = 0;
                Gattempt = 0;
            }
        }
    }




void var(){
    int totalNum;
    int option;
    int cont;
    double num;
    vector<double> numbers;
    while (option != 4){
        cout << "What do you want to do?\n1.Average\n2.Variance\n3.Standard Deviation\n4.Exit";
        cin >> option;
        switch (option){
            case 1:
                cout << "How many numbers do you want to add?: ";
                cin >> totalNum;
                for (int i = 0; i< totalNum; i++){
                    cout << "Enter a number: ";
                    cin >> num;
                    numbers.push_back(num);
                }
                if (!numbers.empty()){
                    double sum = 0;
                    for (double number : numbers){
                        sum += number;
                    }
                    double average = sum / numbers.size();
                    cout << "Average: " << fixed << setprecision(2) << average << endl;
                }
                else {
                    cout << "No numbers to calculate the average with" << endl;
                }
                break;
            case 2:
                if (!numbers.empty()){
                    double sumSquaredDiff = 0;
                    double average = 0;
                    for (double number : numbers){
                        average += number;
                    }
                    average /= numbers.size();
                    for (double number: numbers){
                        sumSquaredDiff += pow(number - average, 2);
                    }
                    double variance = sumSquaredDiff / numbers.size();
                    cout << "Variance: " << fixed << setprecision(2) << variance << endl;
                }
                else {
                    cout << "No numbers to calculate the variance with" << endl;
                }
                break;
            case 3:
                if (!numbers.empty()){
                    double sumSquaredDiff = 0;
                    double average = 0;
                    for (double number : numbers){
                        average += number;
                    }
                    average /= numbers.size();
                    for (double number: numbers){
                        sumSquaredDiff += pow(number - average, 2);
                    }
                    double variance = sumSquaredDiff/numbers.size();
                    double stdDeviation = sqrt(variance);
                    cout << "Standard Deviation" << fixed << setprecision(2) << stdDeviation << endl;
                }
                else {
                    cout << "No numbers to calculate the standard deviation with" << endl;
                }
                break;
            case 4:
                cout << "Back" << endl;
                break;
            default:
                cout << "Invalid option, please try again" << endl;
            
        }
    }
}

int main(){
    int option;
    while (option != 3){
        cout << "What program do you want to run?\n1. Rock-Paper-Scissors\n2. Variance\n3. Exit\n";
        cin >> option;
        switch(option){
            case 1:
                rockGame();
            break;
            case 2:
                var();
                return 0;
            break;
            case 3:
                cout << "Thanks for using! :)" << endl;
            break;
            default:
                cout << "Invalid option, please choose again." << endl;
        }
    }
}
