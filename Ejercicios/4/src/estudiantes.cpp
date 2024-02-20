#include <iostream>

using namespace std;

struct Student{
    string name;
    int id;
    float avg;
};


void printStudent(Student s){
    cout << "Name: " << s.name << endl;
    cout << "ID: " << s.id << endl;
    cout << "Average: " << s.avg << endl;
}

int main(){

}