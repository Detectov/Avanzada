#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student{
    string name;
    int id;
    float avg;
};


void AddStudent(vector<Student>& students){
    Student newStudent;
    cout << "Enter the name of the student: ";
    cin >> newStudent.name;
    bool duppedId = true;

    while (duppedId == true){
        cout << "Enter the Id of the student: ";
        cin >> newStudent.id;

        duppedId = false;

        for (const Student& student: students){
            if (student.id == newStudent.id){
                cout << "That Id has already been registered, try with another one" << endl;
                duppedId = true;
                break;
            }
        }
    }
    cout << "Enter the average of the student: ";
    cin >> newStudent.avg;

    students.push_back(newStudent);

    cout << "Succesfully registered!" << endl;
}

void ShowStudents(const vector<Student>& students){
        if(!students.empty()){
            cout << "Student Registry:" << endl;
            for (const Student& student: students){
                cout << "Name: " << student.name << ", Id: " << student.id << ", Average: " << student.avg << endl;
            }
        }
        else{
            cout << "There aren't any students registered." << endl;
        }
}

void SearchById(const vector <Student>& students){
    int SearchedId;
    cout << "Enter the Id you want to look for: ";
    cin >> SearchedId;

    bool found = false;
    for (const Student& student: students){
        if (student.id == SearchedId){
            cout << "Student Found: " << endl;
            cout << "Name: " << student.name << ", Id: " << student.id << ", Average: " << student.avg << endl;
            found = true;
            break;
        }
    }
    if (!found){
        cout << "That Id isn't used, try another one" << endl;
    }
}

int main(){
    vector<Student> students;
    int option;
    while (option != 4){
        cout << "What do you want to do?\n1. Add a New Student\n2. Show all students\n3. Search a student by their Id\n4. Exit";
        cin >> option;
        switch(option) {
            case 1:
                AddStudent(students);
            break;
            case 2:
                ShowStudents(students);
            break;
            case 3:
                SearchById(students);
            break;
            case 4:
                cout << "Thanks for using!" << endl;
            break;
            default:
                cout << "Invalid option, try again" << endl;
        }
    } 
}