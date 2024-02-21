#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

void addScore(vector<int> &scores){
    int newScore;
    cout << "Enter your score: ";
    cin >> newScore;
    scores.push_back(newScore);
    cout << "Your score was added successfully!" << endl;
}

void showScores(const vector<int> &scores){
    if(!scores.empty()){
        vector<int> scoresCopy = scores;   
        sort(scoresCopy.rbegin(), scoresCopy.rend());

        cout << "Scores: " << endl;
        for (const int& score : scoresCopy){
            cout << score << endl;
        }

    }
    else{
        cout << "There are no scores to show" << endl;
    }
}

void showAvg(const vector<int> &scores){
    if(!scores.empty()){
        double avg = accumulate(scores.begin(), scores.end(), 0.0) / scores.size();
        cout << "The average score is: " << avg << endl;
    }
    else{
        cout << "There are no scores" << endl;
    }
}

int main(){
    int option;
    vector<int> scores;
    while(option != 4){
        cout << "What to you want to do?\n1. Add score\n2. Show all score (high to low)\n3. Show average score\n4. Exit\n";
        cin >> option;
        switch(option){
            case 1:
                addScore(scores);
            break;
            case 2:
                showScores(scores);
            break;
            case 3:
                showAvg(scores);
            break;
            case 4:
                cout << "Thanks for using!" << endl;
            break;
            default:
                cout << "Invalid option, please try again" << endl;
        }
    }
}