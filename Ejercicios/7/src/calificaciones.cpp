#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum alphabeticalGrade{A,B,C,D,F};

alphabeticalGrade convertToLetter(float grade){
    if (grade>= 90.0){
        return A;
    } else if (grade >= 80.0){
        return B;
    }else if (grade >= 70.0){
        return C;
    }else if (grade >= 60.0){
        return D;
    } else{
        return F;
    }
}

float convertToNumber(alphabeticalGrade g){
    switch (g){
        case A:
            return 90.0;
        case B:
            return 80.0;
        case C:
            return 70.0;
        case D:
            return 60.0;
        case F:
            return 50.0;
        default:
            cout << "Invalid grade" << endl;

    }
}
int main(){
    float numericalGrade;
    alphabeticalGrade aGrade;

    cout << "Enter the grade from 0 to 100: ";
    cin >> numericalGrade;

    aGrade = convertToLetter(numericalGrade);

    cout << "Corresponding letter grade: ";
    switch (aGrade){
        case A:
            cout << "A";
            break;
        case B:
            cout << "B";
            break;
        case C:
            cout << "C";
            break;
        case D:
            cout << "D";
            break;
        case F:
            cout << "F";
            break;
    }
    cout << endl;

    char charGrade;
    cout << "Enter the letter grade (A, B, C, D, F): ";
    cin >> charGrade;

    charGrade = toupper(charGrade);
    switch (charGrade){
        case 'A':
            aGrade = A;
            break;
        case 'B':
            aGrade = B;
            break;
        case 'C':
            aGrade = C;
            break;
        case 'D':
            aGrade = D;
            break;
        case 'F':
            aGrade = F;
            break;
        default: 
            cout << "Invalid grade" << endl;
            return 1;
    }
    float convertedGrade = convertToNumber(aGrade);

    if (convertedGrade != -1.0){
        cout << "Corresponding numeric grade: " << convertedGrade << endl;
    } 
    else{
        cout << "There was an error" << endl; 
    }
    return 0;
}