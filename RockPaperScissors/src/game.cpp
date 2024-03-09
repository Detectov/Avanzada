#include "game.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

RPS::RPS(): userWins(0), computerWins(0){
    srand(time(NULL));
}

Option RPS::getCompOp(){
    return static_cast<Option>(rand() % 3);
}

Option RPS::getUserOp(){
    int option;
    cout << "Choose:\n1. Rock\n2. Paper\n3.Scissors\n";
    cin >> option;
    option--;
    while(option <1 || option > 3){
        cout << "Invalid choice. Please choose again\n1. Rock\n2. Paper\n3.Scissors\n";
        cin >> option;
        option--;
    }
    return static_cast<Option>(option);
}

void RPS::Winner(Option user, Option computer){
    if (user == computer){
        cout << "It's a tie!" << endl;
    }
    else if ((user == ROCK && computer == SCISSORS) ||
             (user == PAPER && computer == ROCK)    ||
             (user == SCISSORS && computer == PAPER)){
        cout << "You win this round!" << endl;
        userWins ++;
             }
    else{
        cout << "The computer wins this round!" << endl;
        computerWins ++;
    }
}

void RPS::play(){
    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    while(userWins < 3 && computerWins < 3){
        Option userOpt = getUserOp();
        Option computerOpt = getCompOp();
        
        cout << "You chose: " << userOpt <<"\nComputer Chooses: " << computerOpt << endl;
        Winner(userOpt, computerOpt);
        cout << "Score:\nYou: " << userWins << "\nComputer: " << computerWins << endl;
    }

    if (userWins == 3){
        cout << "You win the game!" << endl;
    }
    else{
        cout << "The computer wins the game!" << endl;
    }
}